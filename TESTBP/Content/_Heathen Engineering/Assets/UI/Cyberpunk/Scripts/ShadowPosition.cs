using System.Linq;
using UnityEngine;
using UnityEngine.UI;

namespace HeathenEngineering.UIX.Theme.Cyberpunk
{
    [RequireComponent(typeof(Shadow))]
    [ExecuteInEditMode]
    public class ShadowPosition : MonoBehaviour
    {
        public CameraReference Camera;
        public ColorReference Color;
        public float Opacity = 0.25f;
        public Vector2 AbsoluteMax = new Vector2(64, 64);
        private Shadow[] shadowEffects;
        private RectTransform rectTransform;
        private Canvas topMostCanvas;

        private void OnEnable()
        {
            Camera.Value = UnityEngine.Camera.main;
            shadowEffects = GetComponents<Shadow>();
            rectTransform = GetComponent<RectTransform>();
            Canvas[] c = GetComponentsInParent<Canvas>();
            topMostCanvas = c[c.Length - 1];
        }

        // Update is called once per frame
        void LateUpdate()
        {
            #region House Keeping
            //Check our state in update because we can run in edit mode so enable may not have been called correctly
            if (Application.isEditor)
            {
                shadowEffects = GetComponents<Shadow>();
                if (shadowEffects == null || shadowEffects.Length < 1)
                    return;

                rectTransform = GetComponent<RectTransform>();

                Canvas[] c = GetComponentsInParent<Canvas>();
                topMostCanvas = c[c.Length - 1];
            }
            #endregion

            if ((Camera.m_variable == null && Camera.m_constantValue == null))
                return;

            //Fetch the screen position based on the top most canvas type
            Vector2 screenPosition;
            if (topMostCanvas != null && topMostCanvas.renderMode == RenderMode.ScreenSpaceOverlay)
                screenPosition = rectTransform.position;
            else
                screenPosition = Camera.Value.WorldToScreenPoint(rectTransform.position);

            //Convert the screen position from pixel space to screen normal.. top right = 1,1 bottom left = -1,-1 center = 0,0
            screenPosition -= new Vector2(Camera.Value.pixelWidth / 2f, Camera.Value.pixelHeight / 2f);
            screenPosition.x /= Camera.Value.pixelWidth;
            screenPosition.y /= Camera.Value.pixelHeight;

            //Offset the shadow based on the offset from center of screen
            shadowEffects[0].effectDistance = new Vector2(screenPosition.x * AbsoluteMax.x, screenPosition.y * AbsoluteMax.y);
            shadowEffects[0].effectColor = new Color(Color.Value.r, Color.Value.g, Color.Value.b, Opacity);
            if (shadowEffects.Length > 1)
            {
                shadowEffects[1].effectDistance = new Vector2(screenPosition.x * AbsoluteMax.x * 0.5f, screenPosition.y * AbsoluteMax.y * 0.5f);
                shadowEffects[1].effectColor = new Color(Color.Value.r, Color.Value.g, Color.Value.b, Opacity * 0.5f);
            }
        }
    }
}

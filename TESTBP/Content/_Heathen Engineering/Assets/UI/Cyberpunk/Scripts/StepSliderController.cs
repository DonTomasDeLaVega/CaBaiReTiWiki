using UnityEngine;
using UnityEngine.UI;

namespace HeathenEngineering.UIX.Theme.Cyberpunk
{
    [RequireComponent(typeof(Slider))]
    public class StepSliderController : MonoBehaviour
    {
        private Slider slider;

        private void OnEnable()
        {
            slider = GetComponent<Slider>();
        }

        public void IncramentValue()
        {
            if (slider != null)
                slider.value++;
        }

        public void DecramentValue()
        {
            if (slider != null)
                slider.value--;
        }
    }
}

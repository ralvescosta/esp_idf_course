/**
 * Application entry point.
 */

#include "nvs_flash.h"
#include "wifi_app.h"
#include "DHT22.h"
#include "wifi_reset_button.h"

void app_main(void)
{
  // Initialize NVS
  esp_err_t res = nvs_flash_init();

  if (res == ESP_ERR_NVS_NO_FREE_PAGES || res == ESP_ERR_NVS_NEW_VERSION_FOUND)
  {
    ESP_ERROR_CHECK(nvs_flash_erase());
    res = nvs_flash_init();
  }

  ESP_ERROR_CHECK(res);

  // Start WiFi
  wifi_app_start();

  // Configure WiFi reset button
  wifi_reset_button_config();

  // Start DHT22 Sensor task
  DHT22_task_start();
}

#include "stdbool.h"
#include "driver/ledc.h"

#include "esp_log.h"

#include "rgb_led.h"

static const char *TAG = "RGB_LED";

void rgb_led_wifi_app_started(void)
{
  ESP_LOGI(TAG, "TOGGLE RGB LED WiFi APP STARTED!");
}

void rgb_led_http_server_started(void)
{
  ESP_LOGI(TAG, "TOGGLE RGB LED HTTP SERVER STARTED");
}

void rgb_led_wifi_connected(void)
{
  ESP_LOGI(TAG, "TOGGLE RGB LED WiFi CONNECTED");
}

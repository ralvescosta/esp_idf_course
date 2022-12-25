#include <stdio.h>
#include <stdbool.h>
#include <unistd.h>

#include <esp_log.h>

#include "bme680_sensor.h"

static const char *TAG = "MAIN";

void app_main(void)
{
  esp_log_level_set("*", ESP_LOG_DEBUG);

  ESP_LOGD(TAG, "HELLO");
  ESP_LOGI(TAG, "WORLD");
  ESP_LOGE(TAG, "!!");

  BME680_task_start();
}
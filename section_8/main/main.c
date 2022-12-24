#include "stdio.h"
#include "stdbool.h"

#include "freertos/FreeRTOS.h"
#include "esp_log.h"
#include "esp_event.h"

static const char *TAG = "MAIN";

void app_main(void)
{
  esp_log_level_set("*", ESP_LOG_DEBUG);

  ESP_LOGI(TAG, "HELLO WORLD!!");
  vTaskDelay(1000 / portTICK_PERIOD_MS);
}
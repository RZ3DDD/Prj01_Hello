#include "main.h"

#define LOG_LEVEL_LOCAL ESP_LOG_VERBOSE
#include "esp_log.h"
#define LOG_TAG "MAIN"

static Main my_main;

extern "C" void app_main(void)
{
    vTaskDelay(7000 / portTICK_PERIOD_MS);
    ESP_ERROR_CHECK(my_main.setup());

    while (true)
    {
        my_main.run();
    }
}


/**
 * @brief Should be performed once. Должна выполнятся единожды.
 * 
 * @return esp_err_t 
 */
esp_err_t Main::setup(void)
{
    esp_err_t status{ESP_OK};
    // vTaskDelay(7000 / portTICK_PERIOD_MS);
    ESP_LOGD(LOG_TAG, "Setup!");
    return status;
}

void Main::run(void)
{
    ESP_LOGI(LOG_TAG, "Hello, World!");
    vTaskDelay(1000 / portTICK_PERIOD_MS);
}
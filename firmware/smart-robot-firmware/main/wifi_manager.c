#include "wifi_manager.h"
#include "freertos/FreeRTOS.h"
#include "freertos/event_groups.h"
#include "esp_log.h"
#include "nvs_flash.h"
#include "esp_event.h"
#include "esp_wifi.h"
#include "esp_netif.h"
#include "config.h" // Aqui você coloca seu SSID/senha (ou busca do menuconfig/NVS)

static EventGroupHandle_t wifi_event_group;
static wifi_state_t wifi_state = WIFI_STATE_DISCONNECTED;
static const char *TAG = "wifi_manager";  // Tag para logs
static const int WIFI_CONNECTED_BIT = BIT0; // Bit para sinalizar conexão Wi-Fi

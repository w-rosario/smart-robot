#pragma once

// Enum para estados do Wi-Fi, facilita para tasks saberem o status
typedef enum {
    WIFI_STATE_DISCONNECTED = 0,
    WIFI_STATE_CONNECTING,
    WIFI_STATE_CONNECTED,
    WIFI_STATE_ERROR
} wifi_state_t;

// Função para inicializar o Wi-Fi (chame no app_main)
void wifi_manager_init(void);

// Função para consultar o estado atual do Wi-Fi
wifi_state_t wifi_manager_get_state(void);

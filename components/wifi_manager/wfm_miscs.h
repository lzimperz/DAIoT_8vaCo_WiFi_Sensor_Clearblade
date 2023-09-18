#ifndef WIFI_MANAGER_MISCS_
#define WIFI_MANAGER_MISCS_

#include "esp_err.h"

esp_err_t get_config_param_str(char* name, char** param);
esp_err_t set_config_param_str(char* name, char* param);








#endif /* WIFI_MANAGER_MISCS_ */
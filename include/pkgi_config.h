#pragma once

#include "pkgi_db.h"

typedef struct Config {
    DbSort sort;
    DbSortOrder order;
    uint32_t filter;
    int version_check;
    int dl_mode_background;
    int music;
} Config;

void pkgi_load_config(Config* config, char* update_url, uint32_t update_len);
void pkgi_save_config(const Config* config, const char* update_url);

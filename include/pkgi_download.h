#pragma once

#include <stdint.h>
#include "pkgi_db.h"

#define PKGI_RAP_SIZE 16

int pkgi_download(const DbItem* item, const int background_dl);
int rap2rif(const uint8_t* rap, const char* content_id, const char *exdata_path);

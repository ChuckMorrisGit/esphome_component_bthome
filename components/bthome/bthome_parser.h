#pragma once

#include <functional>

using namespace std;

namespace esphome {

typedef enum
{
  BTProtoVersion_None = 0,
  BTProtoVersion_BTHomeV1 = 1,
  BTProtoVersion_BTHomeV2 = 2,
} BTProtoVersion_e;

using measurement_cb_fn_t = std::function<void(uint8_t measurement_type, float value)>;

bool parse_payload_bthome(const uint8_t *payload_data, uint32_t payload_length, BTProtoVersion_e proto, measurement_cb_fn_t measurement_cb);
                          
}
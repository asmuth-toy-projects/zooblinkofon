#pragma once
#include <stdint.h>

namespace iot9000 {

struct LEDState {
  uint8_t g;
  uint8_t r;
  uint8_t b;
};

class LEDController {
public:

  static const uint16_t kLEDCount = 32;

  LEDController();

  void setLEDColor(
      uint16_t led_idx,
      uint8_t red,
      uint8_t green,
      uint8_t blue);

  void refreshDisplay();

protected:
  LEDState led_state[kLEDCount];
};

} // namespace iot9000

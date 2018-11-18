#include <FastLED.h>

#include "../config.h"

#define LED_COUNT (LED_COUNT_1 + LED_COUNT_2 + LED_COUNT_3)
#define LED_OFFSET_1 0
#define LED_OFFSET_2 (LED_OFFSET_1 + LED_COUNT_1)
#define LED_OFFSET_3 (LED_OFFSET_2 + LED_COUNT_2)

extern CRGB leds[LED_COUNT];
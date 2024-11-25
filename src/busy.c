/**
 * Copyright (c) 2020 Raspberry Pi (Trading) Ltd.
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

#include "pico/stdlib.h"

int main() {
    int rc = pico_led_init();
    hard_assert(rc == PICO_OK);

    while(1) {
        uint32_t k;
        for (int i = 0; i < 30) {
            uint32_t j = 0;
            j = ((~j >> i) + 1) * 27644437;
            k = j;
        }
    }
    return 0;
}
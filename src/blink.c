#include "pico/stdlib.h"
#include "pico/cyw43_arch.h"


#define LED_DELAY_MS 2500
#define LED_PIN 0


// Turn the led on or off.
void pico_set_led(bool led_status) {
    gpio_put(LED_PIN, led_status);
}

int main() {
    stdio_init_all();
    gpio_init(LED_PIN);
    gpio_set_dir(LED_PIN, GPIO_OUT);
    
    while (true) {
        pico_set_led(true);
        sleep_ms(LED_DELAY_MS);
        pico_set_led(false);
        sleep_ms(LED_DELAY_MS);
    }
}
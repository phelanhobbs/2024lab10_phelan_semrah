#include <stdio.h>
#include <pico/stdlib.h>
#include <pico/sync.h>

#define IN_PIN 1

struct task_args
{
    bool recieved_signal;
    uint gpio;
};

void irq_callback(uint gpio, uint32_t event_mask)
{
    //Work
    int count = 0;
    for(int i = 0; i < 10000; i++)
    {
        count++;
    }
}

int main(void)
{

    gpio_set_irq_enabled_with_callback(IN_PIN, GPIO_IRQ_EDGE_RISE | GPIO_IRQ_EDGE_FALL , true, irq_callback);
    
    while(1) __nop();
    
    return 0;
}
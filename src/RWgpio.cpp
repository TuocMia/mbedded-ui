#include "RWgpio.h"

void gpio_init(){
    pinMode(InputPin1, INPUT_PULLUP);
    pinMode(InputPin2, INPUT_PULLUP);
    pinMode(InputPin3, INPUT_PULLUP);
    pinMode(OutputPin1, OUTPUT);
    pinMode(OutputPin2, OUTPUT);
    pinMode(OutputPin3, OUTPUT);
}
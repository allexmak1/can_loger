#include "logic.h"

extern tim_t tim;

void init(){

}

void loop(){
  if(tim.cnt1>1000){
    tim.cnt1 = 0;
    HAL_GPIO_TogglePin(GPIOC, GPIO_PIN_13);
  }
}
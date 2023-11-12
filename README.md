# can_loger

Прибор для лога CAN отображения его на экран и записи  трафика.

![Screnshot](https://github.com/allexmak1/can_loger/tree/main/image/image.jpg)

## Hardware 
 * CPU: STM32F103C6Tx (72 MHz SYSCLK)
 * DISPLAY: DMG85480F050_01WTC
 * CAN driver: TJA1050
 * АКБ: Li-Ion (3,7v)
 * зарядная плата: TP4056

### That used
 * TIM1 на 1мс
 * ADC1 + DMA
 * CAN
 * USART + DMA
 * SYS_WAKUP
 * WWDG

### Pins

|STM32F103C6Tx|Description|Info            |STM32F103C6Tx|Description |Info           |
|:----------- |:----------|:-------------- |:-----------|:---------- |:--------------|
|PB12         |           |                |GND         |            |               |
|PB13         |           |                |GND         |            |               |
|PB14         |           |                |3V3         |            |               |
|PB15         |           |                |PB10        |            |               |
|PA8          |           |                |PB2         |            |               |
|PA9          | USART1_TX | для панели     |PB1         |            |               |
|PA10         | USART1_RX | для панели     |PB0         |            |               |
|PA11         | CAN_RX    | для монитора сети|PA7         |            |               |
|PA12         | СAN_TX    | для монитора сети|PA6         |            |               |
|PA15         |           |                |PA5         |            |               |
|PB3          |           |                |PA4         |            |               |
|PB4          |           |                |PA3         |            |               |
|PB5          |           |                |PA2         |            |               |
|PB6          |           |                |PA1         | ADC1_IN1   | заряд акб     |
|PB7          |           |                |PA0         |  SYS_WAKUP | для пробуждения|
|PB8          |           |                |RESET       |            |               |
|PB9          |           |                |PC15        |            |               |
|5V           |           |                |PC14        |            |               |
|GND          |           |                |PC13        |            |               |
|3V3          |           |                |VBAT        |            |               |

## To-Do

 - [ ] Создать интерфейс
 - [ ] Отобразить заряд акб на экран
 - [ ] Осуществить запись на флеш или SD
 - [ ] Поставить гальваническую развязку на Can
 - [ ] Добавить фильтры

## Resources

 allexmak, 2023

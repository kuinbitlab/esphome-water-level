# Level Monitor
## A ultrasonic sensor based water level 

## Features
 - temperature compensation (_optional_)
 - error correction (_error code_)
 - raw data processing (_higher resolution_)
> This library mainly designed for cylindrical home roof tank where's inside tank temperature fluctution a lot and some time ultrasonic received single echo many times

Other additonal sensor 
| sensor | type | unit
| -- | -- | -- |
| sensor error | binary | true
| flow rate | numeric | l/min
| error code | text | error

## Sensor
Currently only waterproof sensor are implemented
- temperature (_DS18B20_)
- ultrasonic (_JSN-SR04T_)

## Installation
this repo consist two main file **l4-tank.yaml** and **cs_l4_tank.h** just copy both to esphome home folder

## Note
* entrire library designed to work reliably as long even something goes wrong.
* based on [kalman filter] to process raw data _special thanks to [denyssene]_ for their library
* error code implemented for diagonistic purpose (**0xe0**, **0xe1**, **0xe2**, **0xe3**)

## Calibration
> varible are available in **cs_l4_tank.h**

| Variable | Defination|
|---|---|
| MAX_HEIGHT | tank bottom to sensor mount distance (132 cm) -> 132|
| DIVIDE_RATIO | tank top height (121 cm) -> 1.21 |
| MULTIPLY_RATIO | tank volume in litre (1000 l) -> 10.0

## Refrences
> l4 -> level 4 

> cs -> custom senor

| Error | Meaning |
| --- | --- | 
| 0xe0 | everything is ok |
| 0xe1 | temperature sensor issue |
| 0xe2 | near the ultrasonic sensor |
| 0xe3 | unknown error or out of range |

## Frontened
> there are more assests avalable in image section

**Integration**

![node sensors](https://github.com/ku8bit/esphome-water-level/blob/main/images/light_node_sensors.png)

**Dashboard**

![dashboard](https://github.com/ku8bit/esphome-water-level/blob/main/images/light_dashboard.png)

**History**

![history graph](https://github.com/ku8bit/esphome-water-level/blob/main/images/light_dashboard_history.png)

[kalman filter]: <https://en.wikipedia.org/wiki/Kalman_filter>
[denyssene]: <https://github.com/denyssene>

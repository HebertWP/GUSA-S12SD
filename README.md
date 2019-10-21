# GUVA-S12SD 

GUVA-S12SD is library that implements the program to use the the sensor's with same name.

## Installation

Click in folowing steps :

```bash
Clone or Download --> Download ZIP
```
In Arduino IDE:

```bash
Sketch --> Include library --> manager librarys 
```
## Depedences

None :) 

## Auxiliary information
Links:
- Article from filipeflop show how to use the sensors board.

```link
https://www.filipeflop.com/blog/medidor-de-indice-uv-com-arduino/
```
## Usage

```arduino
#include <Arduino.h>
#include <GUVA-S12SD.h>

GUVA_S12SD sensor(3);

void setup(){
    Serial.begin(115200);    
}

void loop(){
    Serial.print(" UV : ");
    Serial.println(sensor.getUVIntensity());
    delay(1000);
}
```
## Note
- For programing the ESP-NodeMCU - use the following board configuration
```json
{
    "board": "esp32:esp32:esp32doit-devkit-v1",
    "configuration": "FlashFreq=80,UploadSpeed=115200,DebugLevel=none"
}
```
- The examples abouve heve been made with Visual code editor in mind

## Contact
```bash
Nome: Hebert Wandick Parreira
Mobile number:+55 (19) 98282 - 7899
Email :wandick.hebert98@gmail.com
Personal contact. 
````
#include <GUVA-S12SD.h>

GUVA_S12SD::GUVA_S12SD( int pin ){
    pin__= pin;
};
int GUVA_S12SD::getUVIntensity(){

    int ADC_VALUE = analogRead(pin__);
    float voltage_value = (ADC_VALUE * 3.3 ) / (4095);
    int UV_index=0;
    if (voltage_value < 0.1)
    {
        UV_index = 0;
    }
    else if (voltage_value <= 0.2)
    {
        UV_index = 1;
    }
    else if (voltage_value <= 0.3)
    {
        UV_index = 2;
    }
    else if (voltage_value <= 0.4)
    {
        UV_index = 3;
    }
    else if (voltage_value <= 0.5)
    {
        UV_index = 4;
    }
    else if (voltage_value <= 0.6)
    {
        UV_index = 5;
    }
    else if (voltage_value <= 0.7)
    {
        UV_index = 6;
    }
    else if (voltage_value <= 0.8)
    {
        UV_index = 7;
    }
    else if (voltage_value <= 0.9)
    {
        UV_index = 8;
    }
    else if (voltage_value <= 1)
    {
        UV_index = 9;
    }
    else if (voltage_value <= 1.1)
    {
        UV_index = 10;
    }
    return UV_index;
};
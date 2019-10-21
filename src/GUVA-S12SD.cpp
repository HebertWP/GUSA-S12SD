#include <GUVA-S12SD.h>

GUVA_S12SD::GUVA_S12SD( int pin ){
    pin__= pin;
};
int GUVA_S12SD::getUVIntensity(){

    int ADC_VALUE = analogRead(pin__);
    int voltage_value = (ADC_VALUE * 3.3 ) / (4095);
    int UV_index=0;
    if (voltage_value > 0 && voltage_value < 50)
    {
        UV_index = 0;
    }
    else if (voltage_value > 50 && voltage_value <= 227)
    {
        UV_index = 0;
    }
    else if (voltage_value > 227 && voltage_value <= 318)
    {
        UV_index = 1;
    }
    else if (voltage_value > 318 && voltage_value <= 408)
    {
        UV_index = 2;
    }
    else if (voltage_value > 408 && voltage_value <= 503)
    {
        UV_index = 3;
    }
    else if (voltage_value > 503 && voltage_value <= 606)
    {
        UV_index = 4;
    }
    else if (voltage_value > 606 && voltage_value <= 696)
    {
        UV_index = 5;
    }
    else if (voltage_value > 696 && voltage_value <= 795)
    {
        UV_index = 6;
    }
    else if (voltage_value > 795 && voltage_value <= 881)
    {
        UV_index = 7;
    }
    else if (voltage_value > 881 && voltage_value <= 976)
    {
        UV_index = 8;
    }
    else if (voltage_value > 976 && voltage_value <= 1079)
    {
        UV_index = 9;
    }
    else if (voltage_value > 1079 && voltage_value <= 1170)
    {
        UV_index = 10;
    }
    else if (voltage_value > 1170)
    {
        UV_index = 11;
    }
    return UV_index;
};
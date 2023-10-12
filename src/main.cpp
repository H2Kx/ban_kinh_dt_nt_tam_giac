#include <Arduino.h>

float ban_kinh_dt_nt_tam_giac_deu(float a)
{
float ban_kinh=a*sqrt(3)/6;
return ban_kinh;
}
float kq;
void setup() 
{
  Serial.begin(9600);
}
void loop()
{
kq=ban_kinh_dt_nt_tam_giac_deu(2);
Serial.println(kq);
delay(1000);
}
#include <OneWire.h>
#include <DallasTemperature.h>
#define ONE_WIRE_BUS 12
OneWire oneWire(ONE_WIRE_BUS);

 
DallasTemperature sensors(&oneWire);
void setup()
{  
  Serial.begin(9600);
  pinMode(5, OUTPUT);
  //device on
  digitalWrite(5,HIGH);
  delay(3000);
  digitalWrite(5,LOW);
  sensors.begin();
}

void loop()
{
  sensors.requestTemperatures();
  Serial.println(sensors.getTempCByIndex(0));
  int ctemp= sensors.getTempCByIndex(0);
  delay(1000);

  if(ctemp < 44){
    delay(2000);
    digitalWrite(5,HIGH);
    delay(500);
    digitalWrite(5,LOW);   
  }
  if(ctemp == 44){
    delay(2000);
    digitalWrite(5,HIGH);
    delay(500);
    digitalWrite(5,LOW);
    delay(500);
    digitalWrite(5,HIGH);
    delay(500);
    digitalWrite(5,LOW);   
  }
  if(ctemp > 44 && ctemp <66){
    delay(2000);
    digitalWrite(5,HIGH);
    delay(500);
    digitalWrite(5,LOW);
    delay(500);
    digitalWrite(5,HIGH);
    delay(500);
    digitalWrite(5,LOW);   
  }
  if(ctemp == 66){
    delay(2000);
    digitalWrite(5,HIGH);
    delay(500);
    digitalWrite(5,LOW);
    delay(500);
    digitalWrite(5,HIGH);
    delay(500);
    digitalWrite(5,LOW);
    delay(500);
    digitalWrite(5,HIGH);
    delay(500);
    digitalWrite(5,LOW);
  }  
  
  if(ctemp > 66 && ctemp < 96){
    delay(2000);
    digitalWrite(5,HIGH);
    delay(500);
    digitalWrite(5,LOW);
    delay(500);
    digitalWrite(5,HIGH);
    delay(500);
    digitalWrite(5,LOW);
    delay(500);
    digitalWrite(5,HIGH);
    delay(500);
    digitalWrite(5,LOW);   
  }
  if(ctemp > 96){
    delay(2000);
    digitalWrite(5,HIGH);
    delay(6000);
    digitalWrite(5,LOW);
  }
}

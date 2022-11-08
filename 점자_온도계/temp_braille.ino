#include <OneWire.h>
#include <DallasTemperature.h>

// Data wire is plugged into digital pin 2 on the Arduino
#define ONE_WIRE_BUS 12

// Setup a oneWire instance to communicate with any OneWire device
OneWire oneWire(ONE_WIRE_BUS);  

// Pass oneWire reference to DallasTemperature library
DallasTemperature sensors(&oneWire);
int val;
int hundred;
int ten;
int one;
String a;
int tens;
int ones;
void setup(){
  sensors.begin();  // Start up the library
  Serial.begin(9600);
  pinMode(3, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT); 
}

void loop()
{ 
  // Send the command to get temperatures
  sensors.requestTemperatures(); 
  delay(1000);
  //print the temperature in Celsiu
  val = round(sensors.getTempCByIndex(0));
  Serial.println("Temperature is: ");
  Serial.print(val);
  if(val < 100){
    a = String(val);
    tens=a[0]-'0';
    ones=a[1]-'0';
    delay(1000);
    //Start Braile
    digitalWrite(3,HIGH);
    digitalWrite(5,HIGH);
    digitalWrite(6,HIGH);
    digitalWrite(11,HIGH);
    delay(1000);
    digitalWrite(3,LOW);
    digitalWrite(5,LOW);
    digitalWrite(6,LOW);
    digitalWrite(11,LOW);
    delay(2000);
    if (tens < 10){
      if(tens== 1){
        digitalWrite(9,HIGH);
        delay(1000);
        digitalWrite(9,LOW);
        delay(1000);
      }
      if(tens== 2){
        digitalWrite(9,HIGH);
        digitalWrite(10,HIGH);
        delay(1000);
        digitalWrite(9,LOW);
        digitalWrite(10,LOW);
        delay(1000);
      }
      if(tens== 3){
        digitalWrite(3,HIGH);
        digitalWrite(9,HIGH);
        delay(1000);
        digitalWrite(3,LOW);
        digitalWrite(9,LOW);
        delay(1000);
      }
      if(tens== 4){
        digitalWrite(3,HIGH);
        digitalWrite(5,HIGH);
        digitalWrite(9,HIGH);
        delay(1000);
        digitalWrite(3,LOW);
        digitalWrite(5,LOW);
        digitalWrite(9,LOW);
        delay(1000);
      }
      if(tens== 5){
        digitalWrite(5,HIGH);
        digitalWrite(9,HIGH);
        delay(1000);
        digitalWrite(5,LOW);
        digitalWrite(9,LOW);
        delay(1000);
      }
      if(tens== 6){
        digitalWrite(3,HIGH);
        digitalWrite(9,HIGH);
        digitalWrite(10,HIGH);
        delay(1000);
        digitalWrite(3,LOW);
        digitalWrite(9,LOW);
        digitalWrite(10,LOW);
        delay(1000);
      }
      if(tens== 7){
  
        digitalWrite(5,HIGH);
        digitalWrite(9,HIGH);
        digitalWrite(10,HIGH);
        delay(1000);
        digitalWrite(5,LOW);
        digitalWrite(9,LOW);
        digitalWrite(10,LOW);
        delay(1000);
      }
      if(tens== 8){
        digitalWrite(3,HIGH);
        digitalWrite(5,HIGH);
        digitalWrite(9,HIGH);
        digitalWrite(10,HIGH);
        delay(1000);
        digitalWrite(3,LOW);
        digitalWrite(5,LOW);
        digitalWrite(9,LOW);
        digitalWrite(10,LOW);
        delay(1000);
      }
      if(tens== 9){
        digitalWrite(3,HIGH);
        digitalWrite(10,HIGH);
        delay(1000);
        digitalWrite(3,LOW);
        digitalWrite(10,LOW);
        delay(1000);
      }
      if(tens== 0){
        digitalWrite(3,HIGH);
        digitalWrite(5,HIGH);
        digitalWrite(9,HIGH);
        delay(1000);
        digitalWrite(3,LOW);
        digitalWrite(5,LOW);
        digitalWrite(9,LOW);
        delay(1000);
      }
    }
    if (ones < 10) {
      if(ones== 1){
        digitalWrite(9,HIGH);
        delay(1000);
        digitalWrite(9,LOW);
        delay(1000);
      }
      if(ones== 2){
        digitalWrite(9,HIGH);
        digitalWrite(10,HIGH);
        delay(1000);
        digitalWrite(9,LOW);
        digitalWrite(10,LOW);
        delay(1000);
      }
      if(ones== 3){
        digitalWrite(3,HIGH);
        digitalWrite(9,HIGH);
        delay(1000);
        digitalWrite(3,LOW);
        digitalWrite(9,LOW);
        delay(1000);
      }
      if(ones== 4){
        digitalWrite(3,HIGH);
        digitalWrite(5,HIGH);
        digitalWrite(9,HIGH);
        delay(1000);
        digitalWrite(3,LOW);
        digitalWrite(5,LOW);
        digitalWrite(9,LOW);
        delay(1000);
      }
      if(ones== 5){
        digitalWrite(5,HIGH);
        digitalWrite(9,HIGH);
        delay(1000);
        digitalWrite(5,LOW);
        digitalWrite(9,LOW);
        delay(1000);
      }
      if(ones== 6){
        digitalWrite(3,HIGH);
        digitalWrite(9,HIGH);
        digitalWrite(10,HIGH);
        delay(1000);
        digitalWrite(3,LOW);
        digitalWrite(9,LOW);
        digitalWrite(10,LOW);
        delay(1000);
      }
      if(ones== 7){
        digitalWrite(5,HIGH);
        digitalWrite(9,HIGH);
        digitalWrite(10,HIGH);
        delay(1000);
        digitalWrite(5,LOW);
        digitalWrite(9,LOW);
        digitalWrite(10,LOW);
        delay(1000);
      }
      if(ones== 8){
        digitalWrite(3,HIGH);
        digitalWrite(5,HIGH);
        digitalWrite(9,HIGH);
        digitalWrite(10,HIGH);
        delay(1000);
        digitalWrite(3,LOW);
        digitalWrite(5,LOW);
        digitalWrite(9,LOW);
        digitalWrite(10,LOW);
        delay(1000);
      }
      if(ones== 9){
        digitalWrite(3,HIGH);
        digitalWrite(10,HIGH);
        delay(1000);
        digitalWrite(3,LOW);
        digitalWrite(10,LOW);
        delay(1000);
      }
      if(ones== 0){
        digitalWrite(3,HIGH);
        digitalWrite(5,HIGH);
        digitalWrite(9,HIGH);
        delay(1000);
        digitalWrite(3,LOW);
        digitalWrite(5,LOW);
        digitalWrite(9,LOW);
        delay(1000);
      }
    }
  }
  //digitalWrite(5,LOW);
  //digitalWrite(6,LOW);
  //digitalWrite(11,LOW);
  //if ((val > 99) || (val < 0 )){
  //hundred= abs(val/100);
  //ten= abs(val % 100 /10);
  //one = abs(val % 10); 
  //Serial.println(hundred);
  //Serial.println(val);
  //Serial.println(ten);
  //Serial.println(one);
  //}

  
}

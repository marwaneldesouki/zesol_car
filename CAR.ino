#include <SoftwareSerial.h>
#include <Wire.h> 
#include <LiquidCrystal_I2C.h>

#define echopin  9 // echo pin
#define trigpin 10 // Trigger pin
SoftwareSerial BT(0, 1);

LiquidCrystal_I2C lcd(0x27, 16, 2);
int motor2Pin1 = 8; // pin 6 on L293D IC
int motor2Pin2 = 7; // pin 7 on L293D IC

int motor1Pin1 = 2; // pin 4 on L293D IC
int motor1Pin2 = 3; // pin 5 on L293D IC

int ledf = 11;
int ledb = 13;
int buzzer = 12;
int tonePin = 12;
int state;
int Speed = 130; 

int temp;
int hum;

int timer = 0;

int distanceFwd;
long duration;

int chk = 0;
int set = 35;



void setup() {
    pinMode (trigpin, OUTPUT);
    pinMode (echopin, INPUT );
   
    pinMode(motor1Pin1, OUTPUT);
    pinMode(motor1Pin2, OUTPUT);
 
    pinMode(motor2Pin1, OUTPUT);
    pinMode(motor2Pin2, OUTPUT);

pinMode (ledf, OUTPUT);
pinMode (ledb, OUTPUT);
   digitalWrite(ledf, HIGH);
      digitalWrite(ledb, HIGH);

      pinMode (buzzer, OUTPUT);

      lcd.begin();
  lcd.backlight();
   for (int i=0;i<5;i++){
   lcd.print("Project Made");
   lcd.setCursor (0,1); // go to start of 2nd line
 lcd.print("By ZESOL");
   delay(1000);
   lcd.clear();
   delay(1000);
   }
lcd.print("  For DR.ALYAA");
lcd.setCursor (0,1); // go to start of 2nd line
lcd.print("    By ZESOL");

    // initialize serial communication at 9600 bits per second:
    Serial.begin(9600);
    BT.begin(9600); // Setting the baud rate of Software Serial Library  
    delay(500); 
}

void loop() {
    //if some date is sent, reads it and saves in state
    if(BT.available() > 0){     
      state = BT.read(); 
      Serial.println(state);
      if(state > 10){
         Speed = state;}      

   distanceFwd = data();  
         
   if((distanceFwd<set) && (chk==1)){chk = 2; digitalWrite(ledb,  HIGH); Stop(); }
    if(distanceFwd>set){chk = 0; }
    if(state== 'X'){
      
  tone(tonePin, 587, 709.720327982);
  delay(788.578142202);
  
  delay(10.3082110092);
  tone(tonePin, 554, 709.720327982);
  delay(788.578142202);
  
  delay(5.15410550459);
  tone(tonePin, 493, 273.683002294);
  delay(304.092224771);
  delay(5.15410550459);
  
  tone(tonePin, 369, 273.683002294);
  delay(304.092224771);
  delay(5.15410550459);
  tone(tonePin, 369, 134.52215367);
  delay(149.469059633);
  
  delay(5.15410550459);
  tone(tonePin, 369, 134.52215367);
  delay(149.469059633);
  delay(5.15410550459);
  tone(tonePin, 369, 134.52215367);
  delay(149.469059633);
  delay(5.15410550459);
  tone(tonePin, 369, 134.52215367);
  delay(149.469059633);
  delay(5.15410550459);
  tone(tonePin, 369, 134.52215367);
  delay(149.469059633);
  
  delay(5.15410550459);
  tone(tonePin, 493, 134.52215367);
  delay(149.469059633);
  delay(5.15410550459);
  tone(tonePin, 493, 134.52215367);
  delay(149.469059633);
  delay(5.15410550459);
  
  tone(tonePin, 493, 134.52215367);
  delay(149.469059633);
  delay(5.15410550459);
  
  tone(tonePin, 493, 273.683002294);
  delay(304.092224771);
  delay(5.15410550459);
  tone(tonePin, 440, 134.52215367);
  delay(149.469059633);
  delay(5.15410550459);
  tone(tonePin, 493, 273.683002294);
  delay(304.092224771);
  delay(5.15410550459);
  
  tone(tonePin, 391, 412.843850917);
  delay(458.715389908);
  delay(5.15410550459);
  
  tone(tonePin, 391, 134.52215367);
  delay(149.469059633);
  delay(5.15410550459);
  tone(tonePin, 391, 134.52215367);
  delay(149.469059633);
  delay(5.15410550459);
  
  tone(tonePin, 391, 134.52215367);
  delay(149.469059633);
  delay(5.15410550459);
  tone(tonePin, 391, 134.52215367);
  delay(149.469059633);
  delay(5.15410550459);
  tone(tonePin, 391, 134.52215367);
  delay(149.469059633);
  delay(5.15410550459);
  tone(tonePin, 493, 134.52215367);
  delay(149.469059633);
  delay(5.15410550459);
  
  tone(tonePin, 493, 134.52215367);
  delay(149.469059633);
  delay(5.15410550459);
  tone(tonePin, 493, 134.52215367);
  delay(149.469059633);
  delay(5.15410550459);
  tone(tonePin, 493, 273.683002294);
  delay(304.092224771);
  delay(5.15410550459);
  
  tone(tonePin, 554, 134.52215367);
  delay(149.469059633);
  delay(5.15410550459);
  tone(tonePin, 587, 273.683002294);
  delay(304.092224771);
  delay(5.15410550459);
  
  tone(tonePin, 440, 412.843850917);
  delay(458.715389908);
  delay(5.15410550459);
  tone(tonePin, 440, 134.52215367);
  delay(149.469059633);
  delay(5.15410550459);
  tone(tonePin, 440, 134.52215367);
  delay(149.469059633);
  delay(5.15410550459);
  tone(tonePin, 440, 134.52215367);
  delay(149.469059633);
  
  delay(5.15410550459);
  tone(tonePin, 440, 41.7482545872);
  delay(46.3869495413);
  delay(36.0787385321);
  tone(tonePin, 440, 37.109559633);
  delay(41.2328440367);
  
  delay(30.9246330275);
  tone(tonePin, 440, 134.52215367);
  delay(149.469059633);
  delay(5.15410550459);
  tone(tonePin, 587, 134.52215367);
  delay(149.469059633);
  delay(5.15410550459);
  tone(tonePin, 587, 134.52215367);
  delay(149.469059633);
  delay(5.15410550459);
  
  tone(tonePin, 587, 46.3869495413);
  delay(51.5410550459);
  delay(30.9246330275);
  tone(tonePin, 587, 46.3869495413);
  delay(51.5410550459);
  delay(20.6164220183);
  tone(tonePin, 587, 273.683002294);
  delay(304.092224771);
  
  delay(5.15410550459);
  tone(tonePin, 659, 134.52215367);
  delay(149.469059633);
  delay(5.15410550459);
  tone(tonePin, 659, 273.683002294);
  delay(304.092224771);
  delay(5.15410550459);
  
  tone(tonePin, 554, 691.165548165);
  delay(767.961720183);
  delay(314.40043578);
  tone(tonePin, 587, 552.004699541);
  delay(613.338555046);
  delay(5.15410550459);
  tone(tonePin, 554, 552.004699541);
  delay(613.338555046);
  delay(5.15410550459);
  
  tone(tonePin, 493, 273.683002294);
  delay(304.092224771);
  delay(5.15410550459);
  tone(tonePin, 369, 273.683002294);
  delay(304.092224771);
  delay(5.15410550459);
  tone(tonePin, 369, 134.52215367);
  delay(149.469059633);
  delay(5.15410550459);
  tone(tonePin, 369, 134.52215367);
  delay(149.469059633);
  
  delay(5.15410550459);
  tone(tonePin, 369, 134.52215367);
  delay(149.469059633);
  delay(5.15410550459);
  tone(tonePin, 369, 134.52215367);
  delay(149.469059633);
  delay(5.15410550459);
  
  tone(tonePin, 369, 134.52215367);
  delay(149.469059633);
  delay(5.15410550459);
  tone(tonePin, 493, 46.3869495413);
  delay(51.5410550459);
  
  delay(30.9246330275);
  tone(tonePin, 493, 46.3869495413);
  delay(51.5410550459);
  delay(20.6164220183);
  tone(tonePin, 493, 134.52215367);
  delay(149.469059633);
  
  delay(5.15410550459);
  tone(tonePin, 493, 134.52215367);
  delay(149.469059633);
  delay(5.15410550459);
  
  tone(tonePin, 493, 273.683002294);
  delay(304.092224771);
  delay(5.15410550459);
  tone(tonePin, 440, 134.52215367);
  delay(149.469059633);
  
  delay(5.15410550459);
  tone(tonePin, 493, 273.683002294);
  delay(304.092224771);
  delay(5.15410550459);
  tone(tonePin, 391, 273.683002294);
  delay(304.092224771);
  delay(159.777270642);
  tone(tonePin, 391, 134.52215367);
  delay(149.469059633);
  delay(5.15410550459);
  
  tone(tonePin, 391, 41.7482545872);
  delay(46.3869495413);
  delay(30.9246330275);
  tone(tonePin, 391, 37.109559633);
  delay(41.2328440367);
  
  delay(36.0787385321);
  tone(tonePin, 391, 134.52215367);
  delay(149.469059633);
  delay(5.15410550459);
  tone(tonePin, 391, 134.52215367);
  delay(149.469059633);
  delay(5.15410550459);
  tone(tonePin, 391, 134.52215367);
  delay(149.469059633);
  
  delay(5.15410550459);
  tone(tonePin, 493, 134.52215367);
  delay(149.469059633);
  
  delay(5.15410550459);
  tone(tonePin, 493, 134.52215367);
  delay(149.469059633);
  delay(5.15410550459);
  
  tone(tonePin, 493, 134.52215367);
  delay(149.469059633);
  delay(5.15410550459);
  tone(tonePin, 493, 273.683002294);
  delay(304.092224771);
  delay(5.15410550459);
  tone(tonePin, 554, 134.52215367);
  delay(149.469059633);
  
  delay(5.15410550459);
  tone(tonePin, 587, 273.683002294);
  delay(304.092224771);
  delay(5.15410550459);
  tone(tonePin, 440, 412.843850917);
  delay(458.715389908);
  delay(5.15410550459);
  
  tone(tonePin, 440, 134.52215367);
  delay(149.469059633);
  delay(5.15410550459);
  tone(tonePin, 440, 64.9417293578);
  delay(72.1574770642);
  delay(5.15410550459);
  tone(tonePin, 440, 64.9417293578);
  delay(72.1574770642);
  delay(5.15410550459);
  tone(tonePin, 440, 134.52215367);
  delay(149.469059633);
  
  delay(5.15410550459);
  tone(tonePin, 440, 134.52215367);
  delay(149.469059633);
  delay(5.15410550459);
  tone(tonePin, 440, 134.52215367);
  delay(149.469059633);
  
  delay(5.15410550459);
  tone(tonePin, 587, 134.52215367);
  delay(149.469059633);
  delay(5.15410550459);
  tone(tonePin, 587, 134.52215367);
  delay(149.469059633);
  
  delay(5.15410550459);
  tone(tonePin, 587, 51.0256444954);
  delay(56.6951605505);
  delay(30.9246330275);
  tone(tonePin, 587, 51.0256444954);
  delay(56.6951605505);
  delay(10.3082110092);
  
  tone(tonePin, 587, 134.52215367);
  delay(149.469059633);
  delay(5.15410550459);
  tone(tonePin, 659, 273.683002294);
  delay(304.092224771);
  delay(5.15410550459);
  
  tone(tonePin, 659, 273.683002294);
  delay(304.092224771);
  delay(5.15410550459);
  tone(tonePin, 554, 134.52215367);
  delay(149.469059633);
  delay(5.15410550459);
  
  tone(tonePin, 880, 134.52215367);
  delay(149.469059633);
  delay(5.15410550459);
  tone(tonePin, 880, 134.52215367);
  delay(149.469059633);
  delay(5.15410550459);
  
  tone(tonePin, 880, 134.52215367);
  delay(149.469059633);
  delay(5.15410550459);
  tone(tonePin, 880, 134.52215367);
  delay(149.469059633);
  delay(5.15410550459);
  
  tone(tonePin, 880, 134.52215367);
  delay(149.469059633);
  delay(5.15410550459);
  tone(tonePin, 880, 134.52215367);
  delay(149.469059633);
  delay(314.40043578);
  tone(tonePin, 880, 134.52215367);
  delay(149.469059633);
  
  delay(5.15410550459);
  tone(tonePin, 880, 134.52215367);
  delay(149.469059633);
  delay(5.15410550459);
  tone(tonePin, 880, 134.52215367);
  delay(149.469059633);
  delay(5.15410550459);
  tone(tonePin, 880, 412.843850917);
  delay(458.715389908);
  delay(5.15410550459);
  
  tone(tonePin, 739, 134.52215367);
  delay(149.469059633);
  delay(5.15410550459);
  tone(tonePin, 659, 134.52215367);
  delay(149.469059633);
  delay(5.15410550459);
  tone(tonePin, 739, 134.52215367);
  delay(149.469059633);
  delay(5.15410550459);
  
  tone(tonePin, 659, 134.52215367);
  delay(149.469059633);
  
  delay(5.15410550459);
  tone(tonePin, 739, 273.683002294);
  delay(304.092224771);
  delay(5.15410550459);
  tone(tonePin, 659, 134.52215367);
  delay(149.469059633);
  delay(5.15410550459);
  
  tone(tonePin, 739, 273.683002294);
  delay(304.092224771);
  delay(5.15410550459);
  tone(tonePin, 659, 134.52215367);
  delay(149.469059633);
  delay(5.15410550459);
  tone(tonePin, 739, 134.52215367);
  delay(149.469059633);
  delay(5.15410550459);
  tone(tonePin, 659, 134.52215367);
  delay(149.469059633);
  delay(5.15410550459);
  tone(tonePin, 739, 273.683002294);
  delay(304.092224771);
  
  delay(5.15410550459);
  tone(tonePin, 783, 134.52215367);
  delay(149.469059633);
  delay(5.15410550459);
  tone(tonePin, 783, 273.683002294);
  delay(304.092224771);
  delay(5.15410550459);
  tone(tonePin, 587, 412.843850917);
  delay(458.715389908);
  
  delay(469.023600917);
  tone(tonePin, 783, 273.683002294);
  delay(304.092224771);
  delay(5.15410550459);
  tone(tonePin, 783, 134.52215367);
  delay(149.469059633);
  delay(5.15410550459);
  tone(tonePin, 783, 134.52215367);
  delay(149.469059633);
  
  delay(5.15410550459);
  tone(tonePin, 783, 134.52215367);
  delay(149.469059633);
  delay(5.15410550459);
  tone(tonePin, 783, 125.244763761);
  delay(139.160848624);
  delay(36.0787385321);
  
  delay(134.006743119);
  tone(tonePin, 783, 4.63869495413);
  delay(5.15410550459);
  tone(tonePin, 880, 129.883458716);
  delay(144.314954128);
  delay(5.15410550459);
  tone(tonePin, 880, 273.683002294);
  delay(304.092224771);
  
  delay(5.15410550459);
  tone(tonePin, 739, 111.328678899);
  delay(123.69853211);
  delay(958.663623853);
  tone(tonePin, 739, 134.52215367);
  delay(149.469059633);
  delay(5.15410550459);
  tone(tonePin, 739, 134.52215367);
  delay(149.469059633);
  delay(5.15410550459);
  
  tone(tonePin, 739, 134.52215367);
  delay(149.469059633);
  delay(5.15410550459);
  tone(tonePin, 739, 134.52215367);
  delay(149.469059633);
  delay(159.777270642);
  tone(tonePin, 880, 273.683002294);
  delay(304.092224771);
  delay(5.15410550459);
  tone(tonePin, 783, 134.52215367);
  delay(149.469059633);
  delay(5.15410550459);
  
  tone(tonePin, 739, 273.683002294);
  delay(304.092224771);
  delay(5.15410550459);
  tone(tonePin, 659, 273.683002294);
  delay(304.092224771);
  delay(5.15410550459);
  tone(tonePin, 659, 134.52215367);
  delay(149.469059633);
  
  delay(5.15410550459);
  tone(tonePin, 659, 134.52215367);
  delay(149.469059633);
  delay(5.15410550459);
  tone(tonePin, 659, 134.52215367);
  delay(149.469059633);
  delay(5.15410550459);
  
  tone(tonePin, 659, 134.52215367);
  delay(149.469059633);
  delay(5.15410550459);
  tone(tonePin, 659, 134.52215367);
  delay(149.469059633);
  
  delay(5.15410550459);
  tone(tonePin, 659, 134.52215367);
  delay(149.469059633);
  delay(5.15410550459);
  tone(tonePin, 659, 134.52215367);
  delay(149.469059633);
  
  delay(5.15410550459);
  tone(tonePin, 659, 134.52215367);
  delay(149.469059633);
  delay(5.15410550459);
  
  tone(tonePin, 554, 273.683002294);
  delay(304.092224771);
  delay(5.15410550459);
  tone(tonePin, 587, 273.683002294);
  delay(304.092224771);
  delay(5.15410550459);
  tone(tonePin, 739, 134.52215367);
  delay(149.469059633);
  delay(5.15410550459);
  
  tone(tonePin, 659, 134.52215367);
  delay(149.469059633);
  delay(5.15410550459);
  tone(tonePin, 739, 134.52215367);
  delay(149.469059633);
  delay(5.15410550459);
  tone(tonePin, 659, 134.52215367);
  delay(149.469059633);
  delay(5.15410550459);
  
  tone(tonePin, 739, 134.52215367);
  delay(149.469059633);
  delay(5.15410550459);
  tone(tonePin, 659, 134.52215367);
  delay(149.469059633);
  delay(5.15410550459);
  tone(tonePin, 739, 273.683002294);
  delay(304.092224771);
  delay(185.547798165);
  tone(tonePin, 659, 199.463883028);
  delay(221.626536697);
  delay(25.7705275229);
  
  delay(206.164220183);
  tone(tonePin, 739, 4.63869495413);
  delay(5.15410550459);
  tone(tonePin, 659, 171.631713303);
  delay(190.70190367);
  tone(tonePin, 739, 190.186493119);
  delay(211.318325688);
  delay(41.2328440367);
  
  tone(tonePin, 783, 134.52215367);
  delay(149.469059633);
  delay(5.15410550459);
  tone(tonePin, 783, 273.683002294);
  delay(304.092224771);
  delay(5.15410550459);
  tone(tonePin, 587, 412.843850917);
  delay(458.715389908);
  delay(314.40043578);
  
  tone(tonePin, 783, 273.683002294);
  delay(304.092224771);
  delay(5.15410550459);
  tone(tonePin, 783, 134.52215367);
  delay(149.469059633);
  delay(5.15410550459);
  tone(tonePin, 783, 134.52215367);
  delay(149.469059633);
  
  delay(5.15410550459);
  tone(tonePin, 783, 134.52215367);
  delay(149.469059633);
  delay(5.15410550459);
  tone(tonePin, 783, 273.683002294);
  delay(304.092224771);
  delay(5.15410550459);
  tone(tonePin, 880, 134.52215367);
  delay(149.469059633);
  delay(5.15410550459);
  tone(tonePin, 783, 273.683002294);
  delay(304.092224771);
  
  delay(5.15410550459);
  tone(tonePin, 739, 552.004699541);
  delay(613.338555046);
  delay(469.023600917);
  tone(tonePin, 739, 134.52215367);
  delay(149.469059633);
  delay(5.15410550459);
  
  tone(tonePin, 739, 41.7482545872);
  delay(46.3869495413);
  delay(30.9246330275);
  tone(tonePin, 739, 37.109559633);
  delay(41.2328440367);
  delay(36.0787385321);
  tone(tonePin, 739, 134.52215367);
  delay(149.469059633);
  
  delay(5.15410550459);
  tone(tonePin, 739, 134.52215367);
  delay(149.469059633);
  delay(190.70190367);
  tone(tonePin, 880, 78.8578142202);
  delay(87.619793578);
  delay(36.0787385321);
  
  tone(tonePin, 880, 78.8578142202);
  delay(87.619793578);
  delay(30.9246330275);
  tone(tonePin, 783, 190.186493119);
  delay(211.318325688);
  
  delay(25.7705275229);
  tone(tonePin, 739, 190.186493119);
  delay(211.318325688);
  delay(36.0787385321);
  tone(tonePin, 659, 807.132922018);
  delay(896.814357798);
  
  delay(201.010114679);
  tone(tonePin, 587, 134.52215367);
  delay(149.469059633);
  delay(5.15410550459);
  tone(tonePin, 587, 134.52215367);
  delay(149.469059633);
  
  delay(5.15410550459);
  tone(tonePin, 587, 134.52215367);
  delay(149.469059633);
  
  delay(5.15410550459);
  tone(tonePin, 587, 32.4708646789);
  delay(36.0787385321);
  delay(41.2328440367);
  
  tone(tonePin, 587, 32.4708646789);
  delay(36.0787385321);
  delay(41.2328440367);
  tone(tonePin, 587, 134.52215367);
  delay(149.469059633);
  delay(5.15410550459);
  
  tone(tonePin, 587, 134.52215367);
  delay(149.469059633);
  delay(5.15410550459);
  tone(tonePin, 493, 134.52215367);
  delay(149.469059633);
  
  delay(5.15410550459);
  tone(tonePin, 587, 134.52215367);
  delay(149.469059633);
  delay(5.15410550459);
  tone(tonePin, 493, 64.9417293578);
  delay(72.1574770642);
  delay(5.15410550459);
  tone(tonePin, 493, 64.9417293578);
  delay(72.1574770642);
  
  delay(159.777270642);
  tone(tonePin, 493, 134.52215367);
  delay(149.469059633);
  delay(5.15410550459);
  tone(tonePin, 554, 134.52215367);
  delay(149.469059633);
  delay(5.15410550459);
  
  tone(tonePin, 587, 46.3869495413);
  delay(51.5410550459);
  delay(30.9246330275);
  tone(tonePin, 587, 46.3869495413);
  delay(51.5410550459);
  
  delay(20.6164220183);
  tone(tonePin, 554, 134.52215367);
  delay(149.469059633);
  delay(5.15410550459);
  
  tone(tonePin, 493, 134.52215367);
  delay(149.469059633);
  delay(5.15410550459);
  tone(tonePin, 587, 134.52215367);
  delay(149.469059633);
  delay(5.15410550459);
  tone(tonePin, 493, 64.9417293578);
  delay(72.1574770642);
  
  delay(5.15410550459);
  tone(tonePin, 493, 64.9417293578);
  delay(72.1574770642);
  delay(159.777270642);
  tone(tonePin, 493, 134.52215367);
  delay(149.469059633);
  delay(5.15410550459);
  
  tone(tonePin, 554, 134.52215367);
  delay(149.469059633);
  delay(5.15410550459);
  
  tone(tonePin, 587, 134.52215367);
  delay(149.469059633);
  delay(5.15410550459);
  tone(tonePin, 554, 27.8321697248);
  delay(30.9246330275);
  delay(41.2328440367);
  
  tone(tonePin, 554, 27.8321697248);
  delay(30.9246330275);
  delay(51.5410550459);
  tone(tonePin, 493, 134.52215367);
  delay(149.469059633);
  delay(5.15410550459);
  tone(tonePin, 587, 134.52215367);
  delay(149.469059633);
  delay(5.15410550459);
  
  tone(tonePin, 493, 64.9417293578);
  delay(72.1574770642);
  delay(5.15410550459);
  tone(tonePin, 493, 64.9417293578);
  delay(72.1574770642);
  delay(159.777270642);
  tone(tonePin, 493, 134.52215367);
  delay(149.469059633);
  delay(5.15410550459);
  
  tone(tonePin, 587, 41.7482545872);
  delay(46.3869495413);
  delay(30.9246330275);
  tone(tonePin, 587, 41.7482545872);
  delay(46.3869495413);
  delay(30.9246330275);
  
  tone(tonePin, 587, 51.0256444954);
  delay(56.6951605505);
  delay(30.9246330275);
  tone(tonePin, 587, 51.0256444954);
  delay(56.6951605505);
  delay(10.3082110092);
  
  tone(tonePin, 587, 134.52215367);
  delay(149.469059633);
  delay(5.15410550459);
  tone(tonePin, 493, 51.0256444954);
  delay(56.6951605505);
  delay(25.7705275229);
  
  tone(tonePin, 493, 46.3869495413);
  delay(51.5410550459);
  delay(20.6164220183);
  tone(tonePin, 587, 134.52215367);
  delay(149.469059633);
  delay(5.15410550459);
  tone(tonePin, 493, 64.9417293578);
  delay(72.1574770642);
  
  delay(5.15410550459);
  tone(tonePin, 493, 64.9417293578);
  delay(72.1574770642);
  delay(314.40043578);
  tone(tonePin, 659, 134.52215367);
  delay(149.469059633);
  delay(5.15410550459);
  
  tone(tonePin, 659, 134.52215367);
  delay(149.469059633);
  delay(5.15410550459);
  tone(tonePin, 659, 134.52215367);
  delay(149.469059633);
  delay(5.15410550459);
  
  tone(tonePin, 587, 134.52215367);
  delay(149.469059633);
  delay(5.15410550459);
  tone(tonePin, 659, 134.52215367);
  delay(149.469059633);
  delay(5.15410550459);
  tone(tonePin, 659, 134.52215367);
  delay(149.469059633);
  delay(5.15410550459);
  tone(tonePin, 659, 134.52215367);
  delay(149.469059633);
  
  delay(5.15410550459);
  tone(tonePin, 659, 134.52215367);
  delay(149.469059633);
  delay(5.15410550459);
  tone(tonePin, 659, 134.52215367);
  delay(149.469059633);
  delay(5.15410550459);
  tone(tonePin, 739, 134.52215367);
  delay(149.469059633);
  delay(5.15410550459);
  
  tone(tonePin, 659, 46.3869495413);
  delay(51.5410550459);
  delay(30.9246330275);
  tone(tonePin, 659, 46.3869495413);
  delay(51.5410550459);
  delay(20.6164220183);
  tone(tonePin, 587, 134.52215367);
  delay(149.469059633);
  delay(5.15410550459);
  tone(tonePin, 587, 273.683002294);
  delay(304.092224771);
  
  delay(5.15410550459);
  tone(tonePin, 587, 134.52215367);
  delay(149.469059633);
  delay(159.777270642);
  tone(tonePin, 659, 134.52215367);
  delay(149.469059633);
  delay(5.15410550459);
  tone(tonePin, 659, 134.52215367);
  delay(149.469059633);
  delay(5.15410550459);
  
  tone(tonePin, 659, 60.3030344037);
  delay(67.0033715596);
  delay(20.6164220183);
  tone(tonePin, 659, 60.3030344037);
  delay(67.0033715596);
  
  tone(tonePin, 587, 134.52215367);
  delay(149.469059633);
  delay(5.15410550459);
  tone(tonePin, 659, 134.52215367);
  delay(149.469059633);
  delay(5.15410550459);
  tone(tonePin, 659, 51.0256444954);
  delay(56.6951605505);
  
  delay(25.7705275229);
  tone(tonePin, 659, 51.0256444954);
  delay(56.6951605505);
  delay(15.4623165138);
  tone(tonePin, 659, 134.52215367);
  delay(149.469059633);
  delay(5.15410550459);
  
  tone(tonePin, 587, 134.52215367);
  delay(149.469059633);
  delay(5.15410550459);
  tone(tonePin, 659, 134.52215367);
  delay(149.469059633);
  delay(5.15410550459);
  tone(tonePin, 739, 134.52215367);
  delay(149.469059633);
  
  delay(5.15410550459);
  tone(tonePin, 659, 134.52215367);
  delay(149.469059633);
  delay(5.15410550459);
  tone(tonePin, 587, 134.52215367);
  delay(149.469059633);
  delay(5.15410550459);
  tone(tonePin, 587, 273.683002294);
  delay(304.092224771);
  
  delay(5.15410550459);
  tone(tonePin, 587, 134.52215367);
  delay(149.469059633);
  delay(5.15410550459);
  tone(tonePin, 440, 134.52215367);
  delay(149.469059633);
  delay(5.15410550459);
  tone(tonePin, 587, 134.52215367);
  delay(149.469059633);
  
  delay(5.15410550459);
  tone(tonePin, 587, 134.52215367);
  delay(149.469059633);
  delay(5.15410550459);
  tone(tonePin, 587, 134.52215367);
  delay(149.469059633);
  delay(5.15410550459);
  tone(tonePin, 493, 134.52215367);
  delay(149.469059633);
  delay(5.15410550459);
  tone(tonePin, 587, 134.52215367);
  delay(149.469059633);
  
  delay(5.15410550459);
  tone(tonePin, 587, 134.52215367);
  delay(149.469059633);
  delay(5.15410550459);
  tone(tonePin, 587, 134.52215367);
  delay(149.469059633);
  delay(5.15410550459);
  
  tone(tonePin, 587, 134.52215367);
  delay(149.469059633);
  delay(5.15410550459);
  tone(tonePin, 587, 134.52215367);
  delay(149.469059633);
  delay(5.15410550459);
  tone(tonePin, 587, 134.52215367);
  delay(149.469059633);
  delay(5.15410550459);
  tone(tonePin, 587, 134.52215367);
  delay(149.469059633);
  delay(5.15410550459);
  tone(tonePin, 493, 134.52215367);
  delay(149.469059633);
  delay(5.15410550459);
  
  tone(tonePin, 659, 273.683002294);
  delay(304.092224771);
  delay(5.15410550459);
  tone(tonePin, 587, 134.52215367);
  delay(149.469059633);
  delay(159.777270642);
  tone(tonePin, 587, 64.9417293578);
  delay(72.1574770642);
  delay(5.15410550459);
  
  tone(tonePin, 587, 64.9417293578);
  delay(72.1574770642);
  delay(82.4656880734);
  tone(tonePin, 587, 64.9417293578);
  delay(72.1574770642);
  
  delay(5.15410550459);
  tone(tonePin, 587, 64.9417293578);
  delay(72.1574770642);
  delay(82.4656880734);
  tone(tonePin, 587, 64.9417293578);
  delay(72.1574770642);
  delay(5.15410550459);
  
  tone(tonePin, 587, 64.9417293578);
  delay(72.1574770642);
  delay(5.15410550459);
  tone(tonePin, 587, 134.52215367);
  delay(149.469059633);
  delay(5.15410550459);
  tone(tonePin, 587, 134.52215367);
  delay(149.469059633);
  delay(5.15410550459);
  tone(tonePin, 587, 134.52215367);
  delay(149.469059633);
  delay(5.15410550459);
  
  tone(tonePin, 587, 134.52215367);
  delay(149.469059633);
  delay(5.15410550459);
  tone(tonePin, 587, 134.52215367);
  delay(149.469059633);
  delay(5.15410550459);
  
  tone(tonePin, 587, 134.52215367);
  delay(149.469059633);
  delay(5.15410550459);
  tone(tonePin, 587, 134.52215367);
  delay(149.469059633);
  delay(5.15410550459);
  tone(tonePin, 493, 134.52215367);
  delay(149.469059633);
  delay(5.15410550459);
  
  tone(tonePin, 659, 273.683002294);
  delay(304.092224771);
  delay(5.15410550459);
  tone(tonePin, 587, 134.52215367);
  delay(149.469059633);
  delay(159.777270642);
  tone(tonePin, 587, 134.52215367);
  delay(149.469059633);
  delay(5.15410550459);
  tone(tonePin, 587, 134.52215367);
  delay(149.469059633);
  delay(5.15410550459);
  
  tone(tonePin, 587, 134.52215367);
  delay(149.469059633);
  delay(5.15410550459);
  tone(tonePin, 587, 134.52215367);
  delay(149.469059633);
  delay(5.15410550459);
  tone(tonePin, 739, 134.52215367);
  delay(149.469059633);
  
  delay(5.15410550459);
  tone(tonePin, 739, 134.52215367);
  delay(149.469059633);
  delay(5.15410550459);
  tone(tonePin, 739, 134.52215367);
  delay(149.469059633);
  delay(5.15410550459);
  tone(tonePin, 739, 134.52215367);
  delay(149.469059633);
  
  delay(5.15410550459);
  tone(tonePin, 880, 134.52215367);
  delay(149.469059633);
  delay(5.15410550459);
  tone(tonePin, 880, 134.52215367);
  delay(149.469059633);
  delay(5.15410550459);
  
  tone(tonePin, 587, 134.52215367);
  delay(149.469059633);
  delay(5.15410550459);
  tone(tonePin, 587, 134.52215367);
  delay(149.469059633);
  delay(5.15410550459);
  tone(tonePin, 587, 273.683002294);
  delay(304.092224771);
  
  delay(5.15410550459);
  tone(tonePin, 587, 134.52215367);
  delay(149.469059633);
  delay(159.777270642);
  tone(tonePin, 739, 134.52215367);
  delay(149.469059633);
  delay(5.15410550459);
  tone(tonePin, 739, 134.52215367);
  delay(149.469059633);
  
  delay(5.15410550459);
  tone(tonePin, 739, 134.52215367);
  delay(149.469059633);
  delay(5.15410550459);
  tone(tonePin, 739, 134.52215367);
  delay(149.469059633);
  delay(5.15410550459);
  tone(tonePin, 659, 166.993018349);
  delay(185.547798165);
  
  delay(77.3115825688);
  tone(tonePin, 659, 125.244763761);
  delay(139.160848624);
  delay(72.1574770642);
  tone(tonePin, 659, 129.883458716);
  delay(144.314954128);
  delay(92.7738990826);
  tone(tonePin, 659, 143.799543578);
  delay(159.777270642);
  delay(97.9280045872);
  tone(tonePin, 587, 148.438238532);
  delay(164.931376147);
  delay(82.4656880734);
  
  tone(tonePin, 659, 259.766917431);
  delay(288.629908257);
  delay(15.4623165138);
  tone(tonePin, 587, 148.438238532);
  delay(164.931376147);
  delay(15.4623165138);
  tone(tonePin, 369, 134.52215367);
  delay(149.469059633);
  delay(5.15410550459);
  tone(tonePin, 587, 273.683002294);
  delay(304.092224771);
  delay(5.15410550459);
  tone(tonePin, 587, 51.0256444954);
  delay(56.6951605505);
  delay(20.6164220183);
  
  tone(tonePin, 587, 51.0256444954);
  delay(56.6951605505);
  delay(20.6164220183);
  tone(tonePin, 587, 134.52215367);
  delay(149.469059633);
  delay(5.15410550459);
  
  tone(tonePin, 493, 273.683002294);
  delay(304.092224771);
  delay(5.15410550459);
  tone(tonePin, 493, 134.52215367);
  delay(149.469059633);
  delay(159.777270642);
  tone(tonePin, 587, 134.52215367);
  delay(149.469059633);
  delay(5.15410550459);
  tone(tonePin, 587, 134.52215367);
  delay(149.469059633);
  delay(5.15410550459);
  tone(tonePin, 587, 134.52215367);
  delay(149.469059633);
  delay(5.15410550459);
  
  tone(tonePin, 587, 134.52215367);
  delay(149.469059633);
  delay(5.15410550459);
  tone(tonePin, 493, 273.683002294);
  delay(304.092224771);
  delay(5.15410550459);
  
  tone(tonePin, 493, 134.52215367);
  delay(149.469059633);
  delay(159.777270642);
  tone(tonePin, 587, 134.52215367);
  delay(149.469059633);
  delay(5.15410550459);
  
  tone(tonePin, 587, 134.52215367);
  delay(149.469059633);
  delay(5.15410550459);
  tone(tonePin, 587, 106.689983945);
  delay(118.544426606);
  delay(36.0787385321);
  tone(tonePin, 587, 106.689983945);
  delay(118.544426606);
  delay(36.0787385321);
  
  tone(tonePin, 493, 273.683002294);
  delay(304.092224771);
  delay(5.15410550459);
  tone(tonePin, 369, 83.4965091743);
  delay(92.7738990826);
  delay(61.849266055);
  tone(tonePin, 369, 83.4965091743);
  delay(92.7738990826);
  delay(61.849266055);
  tone(tonePin, 587, 273.683002294);
  delay(304.092224771);
  
  delay(5.15410550459);
  tone(tonePin, 587, 46.3869495413);
  delay(51.5410550459);
  delay(20.6164220183);
  tone(tonePin, 587, 46.3869495413);
  delay(51.5410550459);
  
  delay(30.9246330275);
  tone(tonePin, 587, 134.52215367);
  delay(149.469059633);
  delay(5.15410550459);
  tone(tonePin, 493, 273.683002294);
  delay(304.092224771);
  delay(5.15410550459);
  tone(tonePin, 493, 134.52215367);
  delay(149.469059633);
  delay(159.777270642);
  tone(tonePin, 659, 134.52215367);
  delay(149.469059633);
  delay(5.15410550459);
  tone(tonePin, 659, 134.52215367);
  delay(149.469059633);
  
  delay(5.15410550459);
  tone(tonePin, 659, 134.52215367);
  delay(149.469059633);
  delay(5.15410550459);
  tone(tonePin, 587, 134.52215367);
  delay(149.469059633);
  delay(5.15410550459);
  tone(tonePin, 659, 273.683002294);
  delay(304.092224771);
  
  delay(5.15410550459);
  tone(tonePin, 587, 134.52215367);
  delay(149.469059633);
  delay(159.777270642);
  tone(tonePin, 659, 134.52215367);
  delay(149.469059633);
  delay(5.15410550459);
  
  tone(tonePin, 659, 134.52215367);
  delay(149.469059633);
  delay(5.15410550459);
  tone(tonePin, 659, 134.52215367);
  delay(149.469059633);
  delay(5.15410550459);
  tone(tonePin, 587, 134.52215367);
  delay(149.469059633);
  delay(5.15410550459);
  
  tone(tonePin, 659, 273.683002294);
  delay(304.092224771);
  delay(5.15410550459);
  tone(tonePin, 587, 134.52215367);
  delay(149.469059633);
  delay(159.777270642);
  tone(tonePin, 587, 134.52215367);
  delay(149.469059633);
  delay(5.15410550459);
  
  tone(tonePin, 587, 46.3869495413);
  delay(51.5410550459);
  delay(20.6164220183);
  tone(tonePin, 587, 46.3869495413);
  delay(51.5410550459);
  delay(30.9246330275);
  tone(tonePin, 587, 134.52215367);
  delay(149.469059633);
  delay(5.15410550459);
  
  tone(tonePin, 587, 134.52215367);
  delay(149.469059633);
  delay(30.9246330275);
  tone(tonePin, 554, 125.244763761);
  delay(139.160848624);
  delay(56.6951605505);
  tone(tonePin, 554, 111.328678899);
  delay(123.69853211);
  delay(51.5410550459);
  
  tone(tonePin, 554, 115.967373853);
  delay(128.852637615);
  delay(61.849266055);
  tone(tonePin, 554, 125.244763761);
  delay(139.160848624);
  delay(87.619793578);
  
  tone(tonePin, 554, 106.689983945);
  delay(118.544426606);
  delay(87.619793578);
  tone(tonePin, 493, 153.076933486);
  delay(170.085481651);
  delay(46.3869495413);
  tone(tonePin, 587, 273.683002294);
  delay(304.092224771);
  
  delay(5.15410550459);
  tone(tonePin, 493, 134.52215367);
  delay(149.469059633);
  delay(5.15410550459);
  tone(tonePin, 369, 134.52215367);
  delay(149.469059633);
  delay(5.15410550459);
  tone(tonePin, 587, 134.52215367);
  delay(149.469059633);
  
  delay(159.777270642);
  tone(tonePin, 587, 41.7482545872);
  delay(46.3869495413);
  delay(30.9246330275);
  tone(tonePin, 587, 41.7482545872);
  delay(46.3869495413);
  delay(30.9246330275);
  tone(tonePin, 587, 134.52215367);
  delay(149.469059633);
  delay(5.15410550459);
  
  tone(tonePin, 493, 273.683002294);
  delay(304.092224771);
  delay(5.15410550459);
  tone(tonePin, 493, 134.52215367);
  delay(149.469059633);
  delay(159.777270642);
  
  tone(tonePin, 587, 134.52215367);
  delay(149.469059633);
  delay(5.15410550459);
  tone(tonePin, 587, 134.52215367);
  delay(149.469059633);
  delay(5.15410550459);
  
  tone(tonePin, 587, 134.52215367);
  delay(149.469059633);
  delay(5.15410550459);
  tone(tonePin, 587, 134.52215367);
  delay(149.469059633);
  delay(5.15410550459);
  tone(tonePin, 493, 273.683002294);
  delay(304.092224771);
  
  delay(5.15410550459);
  tone(tonePin, 493, 134.52215367);
  delay(149.469059633);
  delay(159.777270642);
  tone(tonePin, 587, 134.52215367);
  delay(149.469059633);
  
  delay(5.15410550459);
  tone(tonePin, 587, 134.52215367);
  delay(149.469059633);
  delay(5.15410550459);
  
  tone(tonePin, 587, 134.52215367);
  delay(149.469059633);
  delay(5.15410550459);
  tone(tonePin, 587, 134.52215367);
  delay(149.469059633);
  delay(5.15410550459);
  tone(tonePin, 493, 273.683002294);
  delay(304.092224771);
  
  delay(5.15410550459);
  tone(tonePin, 391, 134.52215367);
  delay(149.469059633);
  delay(5.15410550459);
  
  tone(tonePin, 391, 134.52215367);
  delay(149.469059633);
  delay(5.15410550459);
  tone(tonePin, 587, 273.683002294);
  delay(304.092224771);
  delay(5.15410550459);
  
  tone(tonePin, 587, 32.4708646789);
  delay(36.0787385321);
  delay(36.0787385321);
  tone(tonePin, 587, 32.4708646789);
  delay(36.0787385321);
  delay(46.3869495413);
  tone(tonePin, 587, 134.52215367);
  delay(149.469059633);
  delay(5.15410550459);
  
  tone(tonePin, 493, 273.683002294);
  delay(304.092224771);
  delay(5.15410550459);
  tone(tonePin, 493, 134.52215367);
  delay(149.469059633);
  delay(159.777270642);
  
  tone(tonePin, 659, 55.6643394495);
  delay(61.849266055);
  delay(25.7705275229);
  tone(tonePin, 659, 51.0256444954);
  delay(56.6951605505);
  delay(10.3082110092);
  
  tone(tonePin, 659, 46.3869495413);
  delay(51.5410550459);
  delay(25.7705275229);
  tone(tonePin, 659, 41.7482545872);
  delay(46.3869495413);
  delay(30.9246330275);
  
  tone(tonePin, 659, 134.52215367);
  delay(149.469059633);
  delay(5.15410550459);
  tone(tonePin, 587, 134.52215367);
  delay(149.469059633);
  delay(5.15410550459);
  tone(tonePin, 659, 273.683002294);
  delay(304.092224771);
  
  delay(5.15410550459);
  tone(tonePin, 587, 51.0256444954);
  delay(56.6951605505);
  delay(20.6164220183);
  
  tone(tonePin, 587, 51.0256444954);
  delay(56.6951605505);
  delay(20.6164220183);
  tone(tonePin, 659, 273.683002294);
  delay(304.092224771);
  delay(5.15410550459);
  tone(tonePin, 659, 134.52215367);
  delay(149.469059633);
  delay(5.15410550459);
  
  tone(tonePin, 659, 134.52215367);
  delay(149.469059633);
  delay(5.15410550459);
  tone(tonePin, 587, 134.52215367);
  delay(149.469059633);
  delay(5.15410550459);
  tone(tonePin, 659, 273.683002294);
  delay(304.092224771);
  
  delay(5.15410550459);
  tone(tonePin, 587, 134.52215367);
  delay(149.469059633);
  delay(159.777270642);
  tone(tonePin, 587, 134.52215367);
  delay(149.469059633);
  
  delay(5.15410550459);
  tone(tonePin, 587, 134.52215367);
  delay(149.469059633);
  delay(5.15410550459);
  tone(tonePin, 587, 134.52215367);
  delay(149.469059633);
  delay(5.15410550459);
  tone(tonePin, 587, 134.52215367);
  delay(149.469059633);
  delay(5.15410550459);
  tone(tonePin, 554, 264.405612385);
  delay(293.784013761);
  
  delay(15.4623165138);
  tone(tonePin, 554, 51.0256444954);
  delay(56.6951605505);
  delay(20.6164220183);
  tone(tonePin, 554, 51.0256444954);
  delay(56.6951605505);
  delay(20.6164220183);
  tone(tonePin, 554, 273.683002294);
  delay(304.092224771);
  
  delay(5.15410550459);
  tone(tonePin, 554, 134.52215367);
  delay(149.469059633);
  delay(5.15410550459);
  tone(tonePin, 554, 134.52215367);
  delay(149.469059633);
  delay(5.15410550459);
  tone(tonePin, 493, 134.52215367);
  delay(149.469059633);
  
  delay(5.15410550459);
  tone(tonePin, 587, 273.683002294);
  delay(304.092224771);
  delay(5.15410550459);
  tone(tonePin, 554, 129.883458716);
  delay(144.314954128);
  delay(10.3082110092);
  tone(tonePin, 369, 134.52215367);
  delay(149.469059633);
  
  delay(5.15410550459);
  tone(tonePin, 369, 273.683002294);
  delay(304.092224771);
  delay(5.15410550459);
  tone(tonePin, 369, 273.683002294);
  delay(304.092224771);

    }

}
    
    if(state =='V'){digitalWrite(buzzer, HIGH);}
    else if(state=='v'){   digitalWrite(buzzer, LOW);}
   // if the state is '1' the DC motor will go forward
   if ((state == 'F') && (chk==0)){chk = 1; forword();Serial.println("Go Forward!");}

   // if the state is '2' the motor will Reverse
   else if (state == 'B'){backword();Serial.println("Reverse!");}
    
   // if the state is '3' the motor will turn left
   else if (state == 'L'){turnLeft();Serial.println("Turn LEFT");}
    
   // if the state is '4' the motor will turn right
   else if (state == 'R'){turnRight();Serial.println("Turn RIGHT");}
    
   // if the state is '5' the motor will Stop
   else if (state == 'S') {Stop();Serial.println("STOP!");}    

timer = timer+1;

if(distanceFwd>200){distanceFwd=200;} 

if(timer>400){
 
 timer=0; 
}

delay(1); 
}

void forword(){
    digitalWrite(motor1Pin1, LOW);
    digitalWrite(motor1Pin2, HIGH); 
    digitalWrite(motor2Pin1, HIGH);
    digitalWrite(motor2Pin2, LOW);
}

void backword(){
    digitalWrite(motor1Pin1, HIGH);
    digitalWrite(motor1Pin2, LOW); 
    digitalWrite(motor2Pin1, LOW);
    digitalWrite(motor2Pin2, HIGH);
}

void turnRight(){
    digitalWrite(motor1Pin1, LOW);
    digitalWrite(motor1Pin2, HIGH); 
    digitalWrite(motor2Pin1, LOW);
    digitalWrite(motor2Pin2, HIGH);
}

void turnLeft(){
    digitalWrite(motor1Pin1, HIGH);
    digitalWrite(motor1Pin2, LOW); 
    digitalWrite(motor2Pin1, HIGH);
    digitalWrite(motor2Pin2, LOW);
}

void Stop(){
    digitalWrite(motor1Pin1, LOW);
    digitalWrite(motor1Pin2, LOW); 
    digitalWrite(motor2Pin1, LOW);
    digitalWrite(motor2Pin2, LOW);
}

long data()
{
  digitalWrite(trigpin,LOW);
  delayMicroseconds(2);
  digitalWrite(trigpin,HIGH);
  delayMicroseconds(10);
  duration=pulseIn (echopin,HIGH);
  return duration / 29 / 2; 
}

#include <Arduino.h>

int IN1 = 2;
int IN2 = 3;

int Pin1 = A0;
int Pin2 = A1;

float sensorvalue1 = 0;
float sensorvalue2 = 0;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);

  pinMode(IN1, OUTPUT);
  pinMode(IN2, OUTPUT);

  pinMode(Pin1, INPUT);
  pinMode(Pin2, INPUT);

  digitalWrite(IN1, HIGH);
  digitalWrite(IN2, HIGH);

  delay(500);


}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.print("Sensor 1, Moisture Level: ");
  sensorvalue1 = analogRead(Pin1);
  Serial.print(sensorvalue1);
  Serial.print('\n');

  if (sensorvalue1 > 400)
  {
    digitalWrite(IN1, LOW);
  }
  else 
  {
    digitalWrite(IN1, HIGH);
  }

  Serial.print("Sensor 2, Moisture Level: ");
  sensorvalue2 = analogRead(Pin2);
  Serial.print(sensorvalue2);
  Serial.print('\n');

  if (sensorvalue2 > 400)
  {
    digitalWrite(IN2, LOW);
  }
  else 
  {
    digitalWrite(IN2, HIGH);
  }

  delay(500);
}

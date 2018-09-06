#include <HCSR04.h> //HCSR04 Library is to be added 

int triggerPin = 13;// custom trigger pin
int echoPin = 12; // custom echo pin

UltraSonicDistanceSensor distanceSensor(triggerPin, echoPin);

void setup () {
    Serial.begin(9600);  // We initialize serial connection so that we could print values from sensor.
}

void loop () {
    // Every 1500 miliseconds, do a measurement using the sensor and print the distance in centimeters.
    double distance = distanceSensor.measureDistanceCm()
    Serial.println(distance);
    delay(1500);
}

int button = 5;
int led = 0;
int temp = 0;

void setup() {
  // put your setup code here, to run once:
  pinMode(button,INPUT);
  pinMode(led , OUTPUT);
  Serial.begin(115200);
}

void loop() {
  // put your main code here, to run repeatedly:
  temp = digitalRead(button);
     Serial.println(temp);
     if (temp == HIGH) {
        digitalWrite(led, HIGH);
        Serial.println("LED Turned ON");
        delay(1000);
       }
     else {
        digitalWrite(led, LOW);
        Serial.println("LED Turned OFF");
        delay(1000);
       }
}

int SoundSensor = 5;
int LED = 2;
boolean LEDStatus  = false;
void setup() {
  pinMode(SoundSensor, INPUT);
  Serial.begin(9600);
  pinMode(LED, OUTPUT);
  pinMode(LED_BUILTIN, OUTPUT);

}

void loop() {
  int SensorData = digitalRead(SoundSensor);
//  digitalWrite(LED_BUILTIN, LOW);
  if (SensorData == 1)
  {
      Serial.println("Data");
      
      if (LEDStatus == false)
      {
        LEDStatus =true;
        digitalWrite(LED, HIGH);
        digitalWrite(LED_BUILTIN, HIGH);
      }
      else if (LEDStatus == true)
      {
        LEDStatus = false;
        digitalWrite(LED, LOW);
        digitalWrite(LED_BUILTIN, LOW);
      }
  }

}

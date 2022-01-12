
// Declaring the required pins 
int SoundSensor = 5;
int LED = 2;
boolean LEDStatus  = false; // Counter ON/OFF logic flag

// Initial setup of the pins
void setup() {
  pinMode(SoundSensor, INPUT);
  Serial.begin(9600);
  pinMode(LED, OUTPUT);
  pinMode(LED_BUILTIN, OUTPUT);

}

// Loop of the program
void loop() {
  int SensorData = digitalRead(SoundSensor);

  if (SensorData == 1)
  {
      Serial.println("Data"); //To check whether data is been read by the sensor module
      
      if (LEDStatus == false)
      {
        LEDStatus =true;
        digitalWrite(LED, HIGH); // Turn LED ON
        digitalWrite(LED_BUILTIN, HIGH); // Status checking of the logic
      }
      else if (LEDStatus == true)
      {
        LEDStatus = false;
        digitalWrite(LED, LOW); // Turn LED OFF
        digitalWrite(LED_BUILTIN, LOW);// Status checking of the logic
      }
  }

}

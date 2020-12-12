


int x; // stores data from serial read
const int buzzer = 8; //  buzzer to arduino digital pin 8
unsigned long startMillis;  //some global variables available anywhere in the program
unsigned long currentMillis;
const unsigned long period = 10000;  //the value is a number of milliseconds

void setup() {
  
   Serial.begin(9600);
   pinMode(buzzer, OUTPUT); // Set buzzer - pin 8 as an output
   startMillis = millis();  //initial start time
}

void loop() {
  
  void serialFlush();
  if (Serial.available() > 0){ 
  x = Serial.read();
 
  if (x == "1");{
    
  Serial.println("Sound Alarm");
  for (int x = 0; x < 5; x++){
    
  tone(buzzer, 1000); // Send 1KHz sound signal...
  delay(1000);        // ...for 1 sec
  noTone(buzzer);     // Stop sound...
  delay(1000);        // ...for 1sec

    }
  }
 
  }
}

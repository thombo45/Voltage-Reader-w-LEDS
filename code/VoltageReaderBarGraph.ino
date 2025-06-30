//reading Voltage varibles
const int analogPin = A0;
const float referenceVoltage = 5.0;
const float voltageDividerRatio = 2.0;

//LED varibles
int LED1 = 2;
int LED2 = 3;
int LED3 = 4;
int LED4 = 5;





void setup() {
//Varibles to pins
  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
  pinMode(LED3, OUTPUT);
  pinMode(LED4, OUTPUT);

   //Serial.begin(9600);    To print voltage on monitor
 

}

void loop() {
  // put your main code here, to run repeatedly:
  int raw = analogRead(analogPin);
  float measuredVoltage = (raw / 1023.0) * referenceVoltage;
  float batteryVoltage = measuredVoltage * voltageDividerRatio;

  if(batteryVoltage > 4.45 ){
    digitalWrite(LED1, HIGH);
    digitalWrite(LED2, HIGH);
    digitalWrite(LED3, HIGH);
    digitalWrite(LED4, HIGH);
  } 
  else if(batteryVoltage > 3.9 && batteryVoltage < 4.45){
    digitalWrite(LED1, HIGH);
    digitalWrite(LED2, HIGH);
    digitalWrite(LED3, HIGH);
    
  }
  else if(batteryVoltage > 3.35 && batteryVoltage < 3.9){
    digitalWrite(LED1, HIGH);
    digitalWrite(LED2, HIGH);
  }
  else if(batteryVoltage > 2.9 && batteryVoltage < 3.35){
    digitalWrite(LED1, HIGH);
  }
  else {
    digitalWrite(LED1, HIGH);
    digitalWrite(LED2, HIGH);
    digitalWrite(LED3, HIGH);
    digitalWrite(LED4, HIGH);
    delay(200);
    digitalWrite(LED1, LOW);
    digitalWrite(LED2, LOW);
    digitalWrite(LED3, LOW);
    digitalWrite(LED4, LOW);
    delay(200);
  
  }

  //Serial.print("Battery Voltage: ");
  //Serial.print(batteryVoltage);         To print voltage on monitor
  //Serial.print(" V");
 
 //delay(1000);

}

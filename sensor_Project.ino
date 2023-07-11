void setup() {
Serial.begin(9600);
pinMode(0,OUTPUT);
pinMode(26,INPUT);
pinMode(27,INPUT);
pinMode(28,INPUT);
}

void loop() {
  int water1 = analogRead(26);
  int water2 = analogRead(27);
  int water3 = analogRead(28);

float water_avg= (water2+water3)/2;
    Serial.print("water1: ");
    Serial.print(water1);
    Serial.print("water2: ");
    Serial.print(water2);
    Serial.print("water3: ");
    Serial.print(water3);
    Serial.print("Average Water: ");
    Serial.print(water_avg);    

  if(water1<water_avg){
   Serial.println("Water found!");
   digitalWrite(0,1);
   delay(1000);
    }
    
  else {
    Serial.println("  ");    
    delay(500);
    }

  delay(1000);
}

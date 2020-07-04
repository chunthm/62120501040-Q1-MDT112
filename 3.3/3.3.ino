void setup(){
    Serial.begin(9600);
    pinMode(3, OUTPUT); pinMode(4, OUTPUT); pinMode(5, OUTPUT); 
    pinMode(6, OUTPUT); pinMode(7, OUTPUT); pinMode(9, OUTPUT); 
    pinMode(10, OUTPUT); pinMode(11, OUTPUT); pinMode(12, OUTPUT); 
    pinMode(13, OUTPUT); 
}
void loop(){
  int pin =0;
   for (pin =0; pin <= 13; pin++) {
       digitalWrite(pin, 1);
       delay(100);
       digitalWrite(pin, 0);
   }
}
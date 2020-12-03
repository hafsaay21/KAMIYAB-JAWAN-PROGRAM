
char x;
void setup() {
 pinMode(13, OUTPUT);
 Serial.begin(9600);
}

void loop() {
  if (Serial.available()){
    x=Serial.read();
    Serial.print(x);

    if(x='1'){
      digitalWrite(13,HIGH);
      delay(1000);}
    }
    if(x='2'){
      digitalWrite(13,LOW);
      delay(1000);
    
  }

}

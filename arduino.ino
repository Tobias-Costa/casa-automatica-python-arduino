//variaveis
int led1 = 2;


//ligando variaveis e porta serial
void setup() {
  pinMode(led1, OUTPUT);
  Serial.begin(9600);
}


//
void loop() {
  while (Serial.available()) {
    char command = Serial.read();
    
    switch (command) {
      case '1':
        digitalWrite(led1, HIGH);
        digitalWrite(led2, LOW);
        digitalWrite(led3, LOW);
        break;
      default:
        digitalWrite(led1, HIGH);
        digitalWrite(led2, HIGH);
        digitalWrite(led3, HIGH);
        break;

    }
  }
}
//variaveis
int led1 = 13;
int led2 = 10;
int led3 = 9;


//ligando variaveis e porta serial
void setup() {
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
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
      case '2':
        digitalWrite(led1, LOW);
        digitalWrite(led2, HIGH);
        digitalWrite(led3, LOW);
        break;
      case '3':
        digitalWrite(led1, LOW);
        digitalWrite(led2, LOW);
        digitalWrite(led3, HIGH);
        break;
      case '4':
        digitalWrite(led1, HIGH);
        digitalWrite(led2, HIGH);
        digitalWrite(led3, HIGH);
        break;
      // case '5':
      //   digitalWrite(led1, HIGH);
      //   digitalWrite(led2, HIGH);
      //   digitalWrite(led3, HIGH);
      //   delay(500);
      //   digitalWrite(led1, LOW);
      //   digitalWrite(led2, LOW);
      //   digitalWrite(led3, LOW);
      //   break;
      case '0':
        digitalWrite(led1, LOW);
        digitalWrite(led2, LOW);
        digitalWrite(led3, LOW);
        break;
    }
  }
}

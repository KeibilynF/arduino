void setup() {
  Serial.begin(9600);

  for (int i = 0; i <= 2; i++) {
    for (int j = 0; j <= 3; j++) {

      Serial.print(i);
      Serial.print(" x ");
      Serial.print(j);
      Serial.print(" = ");
      Serial.println(i * j);

    }
  }
}

void loop() {
}

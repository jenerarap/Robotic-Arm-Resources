// Potentiometer Tester
// Reads 4 potentiometers and prints their mapped values (0–180°) to Serial Monitor

int pot1, pot2, pot3, pot4;

void setup() {
  Serial.begin(9600);
  delay(500);
  Serial.println("=== POTENTIOMETER TESTER STARTED ===");
  Serial.println("Turn the potentiometers to see their mapped values (0 - 180):");
  Serial.println("-------------------------------------------------------------");
}

void loop() {
  pot1 = analogRead(A0);
  pot2 = analogRead(A1);
  pot3 = analogRead(A2);
  pot4 = analogRead(A3);

  // Map 0–1023 to 0–180 (servo angle range)
  pot1 = map(pot1, 0, 1023, 0, 180);
  pot2 = map(pot2, 0, 1023, 0, 180);
  pot3 = map(pot3, 0, 1023, 0, 180);
  pot4 = map(pot4, 0, 1023, 0, 180);

  // Print all values in one line
  Serial.print("Pot1: "); Serial.print(pot1);
  Serial.print(" | Pot2: "); Serial.print(pot2);
  Serial.print(" | Pot3: "); Serial.print(pot3);
  Serial.print(" | Pot4: "); Serial.println(pot4);

  delay(200); // small delay for readability
}

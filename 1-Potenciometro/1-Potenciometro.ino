/*
  René Rodríguez Martínez

  Ejemplo prueba potienciometro
*/

//declaramos el pin analogico A1 es una variable que viene por defecto en arduino
const int POT = A1;

void setup() {
  Serial.begin(9600);
}

void loop() {
  //leemos la potencia que tiene puesta en el potenciomtero
  int val = analogRead(POT);
  //lo imprimimos por pantalla en el terminal
  Serial.println(val);
  //esperamos dos segundos para que sea legible y no sea una catarata de datos
  delay(2000);
}

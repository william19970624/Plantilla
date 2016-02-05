/*************************************************************************
**                                                                      **
**                    LL3. El primer programa                           **
**        En aquest lliurament utilitzarem el programa "Blink"          **
**        que fa encendre o apagar un LED de l'Arduino cada 1 segon     ** 
**        El que fa es encendre un LED durant un segon,                 **
**        després s'apaga durant un segon, en repetides ocasions        **
**                                                                      **
*************************************************************************/

//******  Includes  ******************************************************


//******  Variables  *****************************************************


//******  Setup  *********************************************************
// La funció de setup s'executa un cop al prémer reinici o el tauler
void setup() {
  // Declara el pin digital 13 com a sortida
  pinMode(13, OUTPUT);
}


//******  Loop  **********************************************************

//El Loop s'estarà executant continuament 

void loop() {
  digitalWrite(13, HIGH);   // Encen el Led
  delay(1000);              // Esperra 1 segon (s'expressa en ms)
  digitalWrite(13, LOW);    // Apaga el Led
  delay(1000);              // Torna a esperar 1 segon (s'expressa en ms)
}

/****************************************************************
**                                                             **
**                            TÍTOL:                           **
**                         Hello world3                        **
**                                                             **
**   NOM: Abel Picó                           Data:06/02/17    **
****************************************************************/
//************************** INCLUDE ****************************


//************************* VARIABLES ***************************


//*************************** SETUP *****************************

void setup() {
  
  Serial.begin(9600);  // Inicia la llibreria serial a velocitat de 9600 bps
  Serial.println("Escull la opcio que vols escollir: "); //mostra per pantalla aquesta frase
  Serial.println("  1. Comprovar el numero de tarjeta de credit.");
  Serial.println("  2. Comprovar numero de compte bancari.");
  Serial.println("  3. Buscar un digit perdut de la targeta de credit.");

}


//*************************** LOOP ******************************

void loop() {
  

}


//************************ FUNCIONS *****************************

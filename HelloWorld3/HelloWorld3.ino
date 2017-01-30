/****************************************************************
**                                                             **
**                            TÍTOL:                           **
**                         Hello world3                        **
**                                                             **
**   NOM: Abel Picó                           Data:30/01/17    **
****************************************************************/
//************************** INCLUDE ****************************


//************************* VARIABLES ***************************

int x = x+ 1;
//*************************** SETUP *****************************

void setup() {
  
  Serial.begin(9600);  // Inicia la llibreria serial a velocitat de 9600 bps

}


//*************************** LOOP ******************************

void loop() {
  
  Serial.println("Hello world "), x;  //Escriu hello world cada segon en una linia nova
  delay(1000); //estableix el temps en 1s
}


//************************ FUNCIONS *****************************

/****************************************************************
**                                                             **
**                            TÍTOL:                           **
**                         Hello world2                        **
**                                                             **
**   NOM: Abel Picó                           Data:30/01/17    **
****************************************************************/
//************************** INCLUDE ****************************


//************************* VARIABLES ***************************


//*************************** SETUP *****************************

void setup() {
  
  Serial.begin(9600);  // Inicia la llibreria serial a velocitat de 9600 bps

}


//*************************** LOOP ******************************

void loop() {
  
  Serial.print("Hello world!");  //Escriu hello world cada segon
  delay(1000); //estableix el temps en 1s
}


//************************ FUNCIONS *****************************

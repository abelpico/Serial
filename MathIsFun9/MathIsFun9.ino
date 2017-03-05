/****************************************************************
**                                                             **
**                            TÍTOL:                           **
**           Posar un nom representatiu del programa           **
**                                                             **
**   NOM: Abel Picó                           Data:22/01/17    **
****************************************************************/
//************************** INCLUDE ****************************


//************************* VARIABLES ***************************

int a = 3;
int b = 2;
int d;


//*************************** SETUP *****************************

void setup() 
{
  Serial.begin(9600);

  Serial.println("Aqui esta la divisio: ");

  Serial.print("a = ");
  Serial.println(a);
  Serial.print("b = ");
  Serial.println(b);

  d = a / b;
 
  Serial.print("a / b = ");/*no donara decimals perquè la 
  variable no ha estat cridada com a decimal, amb el float*/
  Serial.println(d);

}


//*************************** LOOP ******************************

void loop() 
{


}


//************************ FUNCIONS *****************************

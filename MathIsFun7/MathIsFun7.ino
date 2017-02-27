/****************************************************************
**                                                             **
**                            TÍTOL:                           **
**                        Math is fun 7                        **
**                                                             **
**   NOM: Abel Picó                           Data:27/02/17    **
****************************************************************/
//************************** INCLUDE ****************************


//************************* VARIABLES ***************************

int test = 32767;

//*************************** SETUP *****************************

void setup()
{
  Serial.begin(9600);     //set up Serial library at 9600 bps
  Serial.print("Test value is: ");
  Serial.println(test);

  test = test + 1;
 
  Serial.print("Now it is ");
  Serial.println(test);

}
/*passa de 32767 a -32768 perquè en teoria ho guarda en binari real
de 16 bits i quan arriba al màxim, dóna la volta i comença a
comptar des de baix*/

//*************************** LOOP ******************************

void loop()
{

}


//************************ FUNCIONS *****************************

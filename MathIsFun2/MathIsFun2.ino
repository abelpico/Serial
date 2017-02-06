/****************************************************************
**                                                             **
**                            TÍTOL:                           **
**                        Math is Fun 2                        **
**                                                             **
**   NOM: Abel Picó                           Data:06/02/17    **
****************************************************************/
//************************** INCLUDE ****************************


//************************* VARIABLES ***************************

int a = 3;
int b = 7;
double h;

//*************************** SETUP *****************************

void setup() 
{

  Serial.begin(9600);
  Serial.println("Let's calculate a hipotenuse");
  Serial.print("a = ");
  Serial.println(a);
  Serial.print("b = ");
  Serial.println(b);
  Serial.print("h = ");
  h = sqrt(a*a+b*b);
  Serial.println(h,5);


}


//*************************** LOOP ******************************

void loop() {

}


//************************ FUNCIONS *****************************

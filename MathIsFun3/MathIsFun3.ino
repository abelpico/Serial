/****************************************************************
**                                                             **
**                            TÍTOL:                           **
**                        Math is fun 3                        **
**                                                             **
**   NOM: Abel Picó                           Data:13/02/17    **
****************************************************************/
//************************** INCLUDE ****************************


//************************* VARIABLES ***************************

int drive_gb = 5;
int drive_mb;

//*************************** SETUP *****************************

void setup() 
{
  Serial.begin(9600);     
  Serial.print("El teu disc dur es de ");
  Serial.print(drive_gb);
  Serial.println(" GB.");
  drive_mb = 1024 * drive_gb;
  Serial.print("Pot emmagatzemar ");
  Serial.print(drive_mb);
  Serial.println(" Megabytes!");

}


//*************************** LOOP ******************************

void loop() 
{


}


//************************ FUNCIONS *****************************

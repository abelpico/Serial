/****************************************************************
**                                                             **
**                            TÍTOL:                           **
**                        Math is fun 8                        **
**                                                             **
**   NOM: Abel Picó                           Data:27/02/17    **
****************************************************************/
//************************** INCLUDE ****************************


//************************* VARIABLES ***************************

int drive_gb = 100;
float drive_mb;
long drive_kb;
long real_drive_mb;
long real_drive_kb;

//*************************** SETUP *****************************

void setup() 
{
  Serial.begin(9600);
  
  Serial.print("El teu disc dur es de ");
  Serial.print(drive_gb);
  Serial.println(" Gb.");
  
  Serial.print("En teoria, pot guardar");
  drive_mb = drive_gb * 1024;
  Serial.print(drive_mb);
  Serial.print(" Megabytes, ");
  drive_kb = drive_mb * 1024;
  Serial.print(drive_kb);
  Serial.println(" Kilobytes.");
  
  Serial.print("Pero realment, nomes pot guardar");
  real_drive_mb = drive_gb * 1000;
  Serial.print(real_drive_mb);
  Serial.print(" Megabytes, ");
  real_drive_kb = drive_mb * 1000;
  Serial.print(real_drive_kb);
  Serial.println(" Kilobytes");
  
  Serial.print("Estas perdent");
  Serial.print(drive_kb - real_drive_kb);
  Serial.print(" Kilobytes");
  

}


//*************************** LOOP ******************************

void loop() 
{


}


//************************ FUNCIONS *****************************

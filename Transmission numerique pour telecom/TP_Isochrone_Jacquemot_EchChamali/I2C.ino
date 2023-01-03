#include <Wire.h> //La bibliothèque nous permettra de communiquer avec la RAM de l'arduino
#define I2C_SLAVE_ADDRESS A4

void setup()
{
 	Wire.begin(); // Le maître entre dans le bus I2C						
 	Serial.begin(9600); //Configuration de la vitesse de transmission
 	Serial.println(F("-------------------------------------I am the Master")); // On distingue le maître de l'esclave
 	delay(1000); 
}
void loop()
{
Wire.beginTransmission(I2C_SLAVE_ADDRESS); //On commence la communication avec l'esclave tant qu'il est là 
Wire.write("3.14"); //Donnée à transmettre
Wire.endTransmission(); // Arrêter la transmission
delay(1000); 

//De même pour les autres données 
Wire.beginTransmission(I2C_SLAVE_ADDRESS);  
Wire.write('e'); 
Wire.endTransmission();
delay(1000); 
Wire.beginTransmission(I2C_SLAVE_ADDRESS); 
Wire.write("Polytech-Nancy"); 
Wire.endTransmission(); 
delay(1000); 
}
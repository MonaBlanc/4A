#include <Wire.h> //La bibliothèque nous permettra de communiquer avec la RAM de l'arduino
#define I2C_SLAVE1_ADDRESS A4 

void setup()
{
  Wire.begin(I2C_SLAVE1_ADDRESS); //L'esclave rentre dans le bus à son adresse
  Serial.begin(9600); 
  Serial.println("-------------------------------------I am Slave"); //On distingue l'esclave du maître
  delay(1000);               
  Wire.onReceive(receiveEvent); //Lorsque l'on reçoit un 'start' du maître, on appelle notre fonction qui va lire le message
}

void loop()
{
  delay(100);
}

void receiveEvent(int howMany)
{
  String data = ""; //On créer la variable qui va stocker les chars que l'esclave reçoit
  while( Wire.available()){ 
    data += (char)Wire.read();
  }
      Serial.println(data); //On affiche les données
}
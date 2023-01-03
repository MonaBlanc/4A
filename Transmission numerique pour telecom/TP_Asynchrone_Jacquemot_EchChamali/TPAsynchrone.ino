void setup()
{
    // On règle à une vitesse de 9600 bits par seconde.
Serial.begin(9600, SERIAL_8O2); //règle la vitesse de transmission à 9600 bauds, avec 8 bits de données, parité paire et un bit stop.
}
void loop() {
    
    Serial.print('P'); //Mon symbole de 8 bits de données
    delay(100);
    Serial.print('O'); //Mon symbole de 8 bits de données
    delay(100);
    Serial.print('L'); //Mon symbole de 8 bits de données
    delay(100);
    Serial.print('Y'); //Mon symbole de 8 bits de données
    delay(100);
    Serial.print('T'); //Mon symbole de 8 bits de données
    delay(100);
    Serial.print('E'); //Mon symbole de 8 bits de données
    delay(100);
    Serial.print('C'); //Mon symbole de 8 bits de données
    delay(100);
    Serial.print('H'); //Mon symbole de 8 bits de données
    delay(100);
    Serial.print(' '); //Mon symbole de 8 bits de données
    delay(100);    
    Serial.print('N'); //Mon symbole de 8 bits de données
    delay(100);  
    Serial.print('A'); //Mon symbole de 8 bits de données
    delay(100);  
    Serial.print('N'); //Mon symbole de 8 bits de données
    delay(100);  
    Serial.print('C'); //Mon symbole de 8 bits de données
    delay(100);  
    Serial.print('Y'); //Mon symbole de 8 bits de données
    delay(100);      
}

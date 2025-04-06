#define pinLED 2
#define pinLum A0


void setup()
{
  pinMode(pinLED, OUTPUT); //Saída de informação 
  pinMode(pinLum, INPUT); // Entrada d informação 
}

void loop()
{
  if(analogRead(pinLum) > 600){
  	
    digitalWrite(pinLED, HIGH);
  }else{
  
    digitalWrite(pinLED, LOW);
  }
  
}
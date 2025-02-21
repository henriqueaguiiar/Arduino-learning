// C++ code
//
int led =4;
int button = 2;

void setup()
{
	pinMode(led,OUTPUT);
  	pinMode(button,INPUT);
}

void loop()
{ 
  if(digitalRead(button) == HIGH){
  	digitalWrite(led, HIGH);
    delay(1000);
    digitalWrite(led, LOW);
    delay(500);
    
  }else{
    digitalWrite(led, LOW);
  }  
}
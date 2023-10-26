#define sensoregas A1

int sensorefiamma = 10;

int sensorefiamma2 = 2;

int blugas = 6;

int rossofiamma = 7;

int giallofiamma = 3;

int relay2 = 8;

int relay1 = 9;

int relay3 = 11;

int buzzer = 4;

int gas = 0;

int fiamma = 0;

int fiamma2 = 0;

void setup()

{
 pinMode(sensoregas, INPUT); 
 pinMode(sensorefiamma, INPUT); 
 pinMode(sensorefiamma2, INPUT); 
 pinMode(blugas, OUTPUT); 
 pinMode(rossofiamma,OUTPUT); 
 pinMode(giallofiamma, OUTPUT); 
 pinMode(buzzer,OUTPUT); 
 pinMode(relay1, OUTPUT); 
 pinMode(relay2, OUTPUT); 
 pinMode(relay3,OUTPUT);
}

void loop(){

  gas = analogRead(sensoregas);

  fiamma = digitalRead(sensorefiamma);

  fiamma2 = digitalRead(sensorefiamma2);

  if (gas > 200){
  
    digitalWrite(blugas, HIGH);
  
    digitalWrite(relay1,HIGH); 
    tone(buzzer, 500, 600);
  
    delay(500);
  
  }else{

    digitalWrite(relay1,LOW);

    noTone(buzzer); 
    digitalWrite(blugas,LOW);

  }

  if(fiamma2 == HIGH){
  
    digitalWrite(rossofiamma,LOW); 
    digitalWrite(giallofiamma,HIGH); 
    digitalWrite(relay3, HIGH); 
    tone(buzzer, 500, 600);
  
    delay(500);
  
  }else{

    digitalWrite(rossofiamma,LOW); 
    digitalWrite(relay3,LOW); 
    digitalWrite(giallofiamma,LOW);

    noTone(buzzer);

   } 
   
   if(fiamma == HIGH){

    digitalWrite(giallofiamma,LOW); 
    digitalWrite(rossofiamma,HIGH); 
    digitalWrite(relay2,HIGH); 
    tone(buzzer, 500, 600);

    delay(500);

   } else{

    digitalWrite(relay2,LOW);

    noTone(buzzer);

    digitalWrite(rossofiamma,LOW);
    digitalWrite(giallofiamma,LOW);
  }
}

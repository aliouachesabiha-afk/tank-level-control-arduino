void setup() {
pinMode(1,INPUT);//capteur high
pinMode(2,INPUT);//capteur LOW
pinMode(3,INPUT);//DCY
pinMode(4,OUTPUT);//LED verte(VIDE)
pinMode(5,OUTPUT);//LED bleu (NORMALE)
pinMode(6,OUTPUT);//LED rouge (PLEIN)
pinMode(7,OUTPUT);//POMPE
pinMode(8,OUTPUT);//ELECTROVANNE
  
}

void loop() {
  digitalRead(1);
if(digitalRead(1)==0&&digitalRead(3)==1&&digitalRead(2)==1)
{digitalWrite(4,1);
delay(1000);
digitalWrite(5,0);
delay(1000);
digitalWrite(6,0);
delay(1000);
digitalWrite(7,1);
delay(4000);
digitalWrite(8,0);
delay(1000);}
else if(digitalRead(1)==1&&digitalRead(3)==0&&digitalRead(2)==0)
{digitalWrite(4,0);
delay(2000);
digitalWrite(5,0);
delay(1000);
digitalWrite(6,1);
delay(2000);
digitalWrite(7,0);
delay(1000);
digitalWrite(8,1);
delay(1000);}
else if(digitalRead(1)==0&&digitalRead(2)==0&&digitalRead(3)==1)
{digitalWrite(4,0);
delay(1000);
digitalWrite(5,1);
delay(2000);
digitalWrite(6,0);
delay(2000);
digitalWrite(7,1);
delay(2000);
digitalWrite(8,0);
delay(2000);}
}

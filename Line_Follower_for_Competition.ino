
//CODE Written by RAJDEEP BARUAH

int sen1,sen2,sen3,sen4,value;

void setup() {
  pinMode(2,OUTPUT);      //Motor Pins
  pinMode(3,OUTPUT);
  pinMode(4,OUTPUT);
  pinMode(5,OUTPUT);  

  pinMode(6,INPUT);
  pinMode(7,INPUT);
  pinMode(8,INPUT);
  pinMode(9,INPUT);
}

void loop() {
  sen1=digitalRead(6);
  sen2=digitalRead(7);
  sen3=digitalRead(8);
  sen4=digitalRead(9);

  if(sen1==0 && sen2==0 && sen3==0 && sen4==0)
  {
        forward();
  }
  else if(sen1==0 && sen2==1 && sen3==0 && sen4==0)
  {
        right();
  }
  else if(sen1==1 && sen2==0 && sen3==0 && sen4==0)
  {
        right();
  }
  else if(sen1==1 && sen2==1 && sen3==0 && sen4==0)
  {
    right();
  }
  else if(sen1==0 && sen2==0 && sen3==1 && sen4==0)
  {
    left();
  }
  else if(sen1==0 && sen2==0 && sen3==0 && sen4==1)
  {
    left();
  }
  else if(sen1==0 && sen2==0 && sen3==1 && sen4==1)
  {
    left();
  }

}

  void forward()
  {
    digitalWrite(2,HIGH);
    digitalWrite(3,LOW);
    digitalWrite(4,HIGH);
    digitalWrite(5,LOW);
  }
  void left()
  {
    digitalWrite(2,LOW);
    digitalWrite(3,LOW);
    digitalWrite(4,HIGH);
    digitalWrite(5,LOW);
  }



  void right()
  {
    digitalWrite(2,HIGH);
    digitalWrite(3,LOW);
    digitalWrite(4,LOW);
    digitalWrite(5,LOW);
  }
  

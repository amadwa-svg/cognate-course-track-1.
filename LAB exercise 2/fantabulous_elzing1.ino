int a = 2;
int b=3;
int c = 4;
int d = 5 ;
int e = 6;
int f = 7;
int g = 8;
int dot =9;
int forward = 10;
int backward= 11;
int counter ;

void setup() {
  
for (int i = 2; i<=9; i++)
pinMode(i,OUTPUT);

pinMode(forward,INPUT);
pinMode(backward,INPUT);}
void zero()
{
  digitalWrite(a,1);
  digitalWrite(b,1);
  digitalWrite(c,1);
  digitalWrite(d,1);
  digitalWrite(e,1);
  digitalWrite(f,1);
  digitalWrite(g,0);
  digitalWrite(dot,1);
  
}
void one()
{
  digitalWrite(a,0);
  digitalWrite(b,1);
  digitalWrite(c,1);
  digitalWrite(d,0);
  digitalWrite(e,0);
  digitalWrite(f,0);
  digitalWrite(g,0);
  digitalWrite(dot,1);
  
}
void two()
{
  digitalWrite(a,1);
  digitalWrite(b,1);
  digitalWrite(c,0);
  digitalWrite(d,1);
  digitalWrite(e,1);
  digitalWrite(f,0);
  digitalWrite(g,1);
  digitalWrite(dot,1);
  
}
void three()
{
  digitalWrite(a,1);
  digitalWrite(b,1);
  digitalWrite(c,1);
  digitalWrite(d,1);
  digitalWrite(e,0);
  digitalWrite(f,0);
  digitalWrite(g,1);
  digitalWrite(dot,1);
  
}
void four()
{
  digitalWrite(a,0);
  digitalWrite(b,1);
  digitalWrite(c,1);
  digitalWrite(d,0);
  digitalWrite(e,0);
  digitalWrite(f,1);
  digitalWrite(g,1);
  digitalWrite(dot,1);
  
}
void five()
{
  digitalWrite(a,1);
  digitalWrite(b,0);
  digitalWrite(c,1);
  digitalWrite(d,1);
  digitalWrite(e,0);
  digitalWrite(f,1);
  digitalWrite(g,1);
  digitalWrite(dot,1);
  
}
void six()
{
  digitalWrite(a,1);
  digitalWrite(b,0);
  digitalWrite(c,1);
  digitalWrite(d,1);
  digitalWrite(e,1);
  digitalWrite(f,1);
  digitalWrite(g,1);
  digitalWrite(dot,1);
  
}
void seven()
{
  digitalWrite(a,1);
  digitalWrite(b,1);
  digitalWrite(c,1);
  digitalWrite(d,0);
  digitalWrite(e,0);
  digitalWrite(f,0);
  digitalWrite(g,0);
  digitalWrite(dot,1);
  
}
void eight()
{
  digitalWrite(a,1);
  digitalWrite(b,1);
  digitalWrite(c,1);
  digitalWrite(d,1);
  digitalWrite(e,1);
  digitalWrite(f,1);
  digitalWrite(g,1);
  digitalWrite(dot,1);
  
}
void nine()
{
  digitalWrite(a,1);
  digitalWrite(b,1);
  digitalWrite(c,1);
  digitalWrite(d,1);
  digitalWrite(e,0);
  digitalWrite(f,1);
  digitalWrite(g,1);
  digitalWrite(dot,1);
  
}
void swic(int a)
{
  switch(a)
  {
    case 0:
    zero ();
    break;
case 1:
    one ();
    break;
    case 2:
    two();
    break;
    case 3:
    three();
    break;
    case 4:
    four();
    break;
    case 5:
    five();
    break;
    case 6:
    six();
    break;
   case 7:
    seven ();
    break;
    case 8:
    eight();
    break;
    case 9:
    nine();
    break;
    }
  }
void loop() {

  if(counter > 9){
    counter = 0;
  }

  if(counter < 0){
    counter = 9;
  }


  if(digitalRead(backward) == 1){
    counter++;
    delay(200);
  }

  
   if(digitalRead(forward) == 1){

    if(counter > 0){
      counter--;
    }

    delay(200);
  }

  swic(counter);
};
 
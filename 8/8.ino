const int led_1=10;
const int led_2=11;
const int led_3=12;
const int led_4=13;

const int incr_btn=7;
const int decr_btn=8;

int led_counter=0;


void setup()
{
  pinMode(led_1,OUTPUT);
  pinMode(led_2,OUTPUT);
  pinMode(led_3,OUTPUT);
  pinMode(led_4,OUTPUT);
  
  pinMode(incr_btn,INPUT);
  pinMode(decr_btn,INPUT);
  
  //Serial.begin(9600);
}

void loop()
{
  if(digitalRead(incr_btn)) // increment counter when PIN 7 is HIGH
  {
    led_counter++; 
    //Serial.println(led_counter);
  }
  if(digitalRead(decr_btn)) // decrement counter when PIN 8 is HIGH
  {
    led_counter--;
    //Serial.println(led_counter);
  }
  
  switch(led_counter)
  {
    
    case 0:
    digitalWrite(led_1,LOW);
    digitalWrite(led_2,LOW);
    digitalWrite(led_3,LOW);
    digitalWrite(led_4,LOW);
    break;
    
    case 1:
    digitalWrite(led_1,HIGH);
    digitalWrite(led_2,LOW);
    digitalWrite(led_3,LOW);
    digitalWrite(led_4,LOW);
    break;
    
    case 2:
    digitalWrite(led_1,HIGH);
    digitalWrite(led_2,HIGH);
    digitalWrite(led_3,LOW);
    digitalWrite(led_4,LOW);
    break;
    
    case 3:
    digitalWrite(led_1,HIGH);
    digitalWrite(led_2,HIGH);
    digitalWrite(led_3,HIGH);
    digitalWrite(led_4,LOW);
    break;
    
    case 4:
    digitalWrite(led_1,HIGH);
    digitalWrite(led_2,HIGH);
    digitalWrite(led_3,HIGH);
    digitalWrite(led_4,HIGH);
    break;
    
    default:
    digitalWrite(led_1,LOW);
    digitalWrite(led_2,HIGH);
    digitalWrite(led_3,HIGH);
    digitalWrite(led_4,LOW);
    break;
  }
  
  
  
  delay(100);
  
}
// C++ code
//
int led_pin[8]={11,10,9,8,7,6,5,4};
int i,j;
void setup()
{
  for (i=0;i<8;i++){
  	pinMode(led_pin[i],OUTPUT);
  }
}

void loop()
{
  i=0,j=8;
  while (i<8) {
    digitalWrite(led_pin[i],HIGH);
    delay(150);
    digitalWrite(led_pin[i],LOW);
    i++;
  }
  while (j>1) {
  	digitalWrite(led_pin[j-1],HIGH);
    delay(150);
    digitalWrite(led_pin[j-1],LOW);
    j--;
  }
}

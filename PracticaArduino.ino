// C++ code
//
int i;
void setup()
{
   Serial.begin(9600);
   Serial.println ("La tabla del 7");
   for(int i = 1; i<11; i++)
   {
    Serial.print("7 * ");
    Serial.print(i); 
    Serial.print(" = ");
    Serial.println(7*i);
   }
  

}

void loop()
{
  
}

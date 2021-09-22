//Programm is mighd diode 
//#define on 1
//#define off 0
void call()
{
  Serial.write("ATD+79137227848;");
  delay(1000);
  Serial.write("ATH0");
}
void Init_modem()
{
  Serial.write("AT+IPR=9600");
  delay(300);
  Serial.write("AT+CMGF=1");
  delay(300);
  Serial.write("AT+CSCS='GSM'");
  delay(300); 
}
const byte Sensor=13;
int Count,i, b=0;
void setup()
 {
   Serial.begin(9600);
   pinMode(Sensor,INPUT_PULLUP);
   pinMode(10,OUTPUT);
   pinMode(11,OUTPUT);
   digitalWrite(Sensor, HIGH);
   digitalWrite(10, LOW);
   digitalWrite(11, LOW);
 //  attachInterrupt(0, Breaks, LOW);
 }
 
void Breaks(byte Sensor){
     if (digitalRead(Sensor)==LOW and(b==0)){
       
                     digitalWrite(10, HIGH);
                     digitalWrite(11, HIGH);
                     delay(5000);
                     b=1;                    
                    //return i;
     }               
     if (digitalRead(Sensor)==LOW and(b==1)){
                        digitalWrite(10, LOW);
                        digitalWrite(11, LOW);
                        return b;
                     
}
}
void loop(){
 
Breaks(Sensor);
                              
}

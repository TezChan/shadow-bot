//Code to rotate both Front motors in fwd direction
#define LEnable 17
#define LFwd  18  
#define LRev  19
#define REnable 16
#define RRev  14
#define RFwd  15
void setup() 
  {
  pinMode(REnable, OUTPUT);
  pinMode(RFwd, OUTPUT); 
  pinMode(RRev, OUTPUT);
  pinMode(LEnable, OUTPUT);
  pinMode(LFwd, OUTPUT); 
  pinMode(LRev, OUTPUT);
  //Serial.begin(9600); 
  delay(3000);
    
  }
void loop()
{
    analogWrite(REnable,150);
    digitalWrite(RFwd,HIGH);          
    analogWrite(LEnable,150);
    digitalWrite(LFwd,HIGH);
}
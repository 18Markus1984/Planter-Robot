
int analogPin = A0; 

int maxVal = 653;
int minVal = 340;                    
int val = 0;  
int percent = 0;

void setup() {
  Serial.begin(9600);
  pinMode(6,OUTPUT);            
}
  
void loop() {
  digitalWrite(6,LOW);
  delay(200);
  val = analogRead(analogPin);  
  percent = map(val,maxVal,minVal,0,100);
  if(percent > 100) {
    Serial.println("100%");
  }
  else if(percent < 0) {
    Serial.print("0%");
  }
  else {
    Serial.print(percent);
    Serial.println("%");
  }
  digitalWrite(6,HIGH);         
  delay(200);
}

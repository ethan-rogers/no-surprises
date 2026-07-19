const int buzzerPin = 2;

float beat = 500;

int A = 9;
int G = 7;
int F = 5;
int Df = 1;
int C = 0;
int Bf = -2;




void setup() {
  pinMode(buzzerPin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // x3
  // A 
  // C 
  // F 
  // C 
  for (int i = 0; i < 3; i++){
    tone(buzzerPin, get_frequency(A));  
    delay(beat);              
    tone(buzzerPin, get_frequency(C));    
    delay(beat);            
    tone(buzzerPin, get_frequency(F)); 
    delay(beat);  
    tone(buzzerPin, get_frequency(C)); 
    delay(beat);  

  }

  tone(buzzerPin, get_frequency(Bf));  
  delay(beat);              
  tone(buzzerPin, get_frequency(Df));    
  delay(beat);            
  tone(buzzerPin, get_frequency(F)); 
  delay(beat);  
  tone(buzzerPin, get_frequency(G)); 
  delay(beat);  

}

float get_frequency(int note){
  return 261.63 * pow(float(2), float(note)/12.0);

}
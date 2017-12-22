int A = 13;
int B = 12;
int C = 11;
int D = 10;
int brightness = 0;

void setup(){
  pinMode(A, INPUT);
  pinMode(B, INPUT);
  pinMode(C, OUTPUT);
  pinMode(D, OUTPUT);

  digitalWrite(D, LOW);
  while (brightness < 260) {
    analogWrite(C, brightness);
    brightness = brightness + 5;
    delay(50);
  }
 
  delay(20);
  pinMode(C, INPUT);
  pinMode(D, INPUT);
  flashLED(D, A);
  flashLED(D, B);
  flashLED(D, C);
  flashLED(D, B);
  flashLED(D, A);
  flashLED(C, D);
  flashLED(C, B);
  flashLED(C, A);
  flashLED(B, D);
  flashLED(B, C);
  flashLED(B, A);
  flashLED(A, D);
  flashLED(A, C);
}

void loop(){
  
  flashLED(A, B);
  flashLED(A, C);
  flashLED(A, D);
  flashLED(B, A);
  flashLED(B, C);
  flashLED(B, D);
  flashLED(C, A);
  flashLED(C, B);
  flashLED(C, D);
  flashLED(D, A);
  flashLED(D, B);
  flashLED(D, C);
  
  
  flashLED(D, B);
  flashLED(D, A);
  flashLED(C, D);
  flashLED(C, B);
  flashLED(C, A);
  flashLED(B, D);
  flashLED(B, C);
  flashLED(B, A);
  flashLED(A, D);
  flashLED(A, C);
}


void flashLED(int hi, int lo) {
  pinMode(hi, OUTPUT);
  pinMode(lo, OUTPUT); 
  digitalWrite(hi, HIGH);
  digitalWrite(lo, LOW);
  delay(70);
  pinMode(hi, INPUT);
  pinMode(lo, INPUT);
}

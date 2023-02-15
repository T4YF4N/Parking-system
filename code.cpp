int trigger = 12;
int echo = 13;
int ledR = 8;
int ledO = 7;
int ledG = 6;
int buzzer = 5;

long duration = 0;
int cm = 0;
int cal = 0;


void setup() {
  Serial.begin(9600);
  pinMode(trigger, OUTPUT);
  pinMode(echo, INPUT);
  pinMode(ledR, OUTPUT);
  pinMode(ledO, OUTPUT);
  pinMode(ledG, OUTPUT);
  pinMode(buzzer, OUTPUT);
  digitalWrite(buzzer, LOW);
}

void loop() {
  digitalWrite(trigger, LOW);
  digitalWrite(trigger, HIGH);
  digitalWrite(trigger, LOW);

  duration = pulseIn(echo, HIGH);
  cm = duration*0.034/2;
  cal = duration*0.0133/2;

if (cm < 300 && cm > 150){ 
digitalWrite(ledG, HIGH);
tone (buzzer, 1200, 140);
} 
else { 
digitalWrite(ledG, LOW); 
}
  
if (cm < 150 && cm > 75){ 
digitalWrite(ledO, HIGH);
tone (buzzer, 1100, 175);
} 
else { 
digitalWrite(ledO, LOW); 
}
  
if (cm < 75 && cm > 20){ 
digitalWrite(ledR, HIGH);
tone (buzzer, 600, 240);
} 
else { 
digitalWrite(ledR, LOW); 
}

if (cm < 20 && cm > 0){ 
digitalWrite(ledR, HIGH);
tone (buzzer, 500, 800);
} 
else { 
digitalWrite(ledR, LOW); 
}
  

  if (cal < 100 ) {
    Serial.print("Cali: ");
    Serial.println(cal);
    Serial.print("Cm: ");
    Serial.println(cm);
  }
  delay(500);
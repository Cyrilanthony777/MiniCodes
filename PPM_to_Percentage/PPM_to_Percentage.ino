#define PPMpin 9

void setup() {
  Serial.begin(9600);
  pinMode(PPMpin,INPUT);

}

void loop() {
  int x;
  float y;
  x = pulseIn(PPMpin,HIGH,25000); // Reads PPM 
  y = (x/2000) * 100; // Formula to convert regular RC PPM to %
  Serial.print(y);
  Serial.println("%"); 
  
  

}

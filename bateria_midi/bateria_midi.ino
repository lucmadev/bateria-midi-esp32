

int piezo1 = 32;

int sence1 = 200;  //valor umbral


int pad1 ;


int mapeo1 ;


void setup() {
  Serial.begin(115200);

}

void loop() {
  

pad1 = analogRead(piezo1);
if(pad1 > sence1){
 

   mapeo1 = map(pad1,200, 500, 20, 127);
if (mapeo1 > 127)  {
  mapeo1 = 127; 
}

Serial.write(byte (0x90));
Serial.write(byte (38));
Serial.write(byte (mapeo1));
delay(1);

} 
}


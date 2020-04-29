#define C3  131
#define D3  147
#define E3  165
#define F3  175
#define G3  196
#define A3  220
#define B3  247
#define C4  262
#define D4  294
#define E4  330
#define F4  349
#define G4  392
#define A4  440
#define B4  494
#define C5  523
#define D5  587
#define E5  659
#define F5  698
#define G5  784
#define A5  880
#define B5  988 
#define WHOLE 1 //全分符
#define HALF 0.5 //半分符
#define QUARTER 0.25
#define EIGHTH 0.125
#define SIXTEENTH 0.0625
int tune[] = {C4,C4,G4,G4,A4,A4,G4,'.',F4,F4,E4,E4,D4,D4,C4,'.',G4,G4,F4,F4,E4,E4,D4,'.',G4,G4,F4,F4,E4,E4,D4,'.',C4,C4,G4,G4,A4,A4,G4,'.',F4,F4,E4,E4,D4,D4,C4};

void setup() {
   pinMode(4, OUTPUT);
}

void loop() {
  for (int x=0;tune[x]!=0; x++) {
      if(tune[x]=='.')
        delay(500);
      else{
        tone(4, tune[x]);
        delay(500); }
      noTone(4);
      delay(500);
       }
   delay(5000);

}

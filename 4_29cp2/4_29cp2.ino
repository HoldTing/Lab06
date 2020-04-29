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
#define C6 1047
#define D6 1175
#define WHOLE 1 //全分符
#define HALF 0.5 //半分符
#define QUARTER 0.25
#define EIGHTH 0.125
#define SIXTEENTH 0.0625
int tune[] = {C4,C4,G4,G4,A4,A4,G4,'.',F4,F4,E4,E4,D4,D4,C4,'.',G4,G4,F4,F4,E4,E4,D4,'.',G4,G4,F4,F4,E4,E4,D4,'.',C4,C4,G4,G4,A4,A4,G4,'.',F4,F4,E4,E4,D4,D4,C4};
#include <Keypad.h>
const byte ROWS = 4; // 4 Rows
const byte COLS = 4; // 4 Columns
// 定義 Keypad 的按鍵
char keys[ROWS][COLS] = {
{'7', '4', '1', '0'}, {'8','5','2', 'A'},
{'9', '6', '3', 'B'}, {'C', 'D', 'E', 'F'}
};
byte rowPins[ROWS] = {13, 12, 11, 10};
byte colPins[COLS] = {9, 8, 7, 6};

int duration = 500;

Keypad keypad =Keypad( makeKeymap(keys), rowPins,colPins, ROWS, COLS );
void setup() {
   pinMode(4, OUTPUT);
   Serial.begin(9600);
}

void loop() {
  char x = keypad.getKey();
  if(x!=NO_KEY){
      switch (x) {
     case '0':    
       tone(4, C4, duration);
       break;
     case '1':    
       tone(4, D4, duration);
       break;
     case '4':    
       tone(4, E4, duration);
       break;
     case '7':    
       tone(4, F4, duration);
       break;
     case 'A':    
       tone(4, G4, duration);
       break;
     case '2':    
       tone(4, A4, duration);
       break;
     case '5':    
       tone(4, B4, duration);
       break;   
     case '8':    
       tone(4, C5, duration);
       break;
     case 'B':    
       tone(4, D5, duration);
       break;
     case '3':    
       tone(4, E5, duration);
       break;
     case '6':    
       tone(4, F5, duration);
       break;
     case '9':    
       tone(4, G5, duration);
       break;
     case 'F':    
       tone(4, A5, duration);
       break;
     case 'E':    
       tone(4, B5, duration);
       break;   
     case 'D':    
       tone(4, C6, duration);
       break;
     case 'C':    
       tone(4, D6, duration);
       break;  
     default:
       delay(100);
     }
     Serial.println(x);
   }

}

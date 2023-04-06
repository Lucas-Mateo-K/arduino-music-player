
int notes[9][12] = {
  {16, 17, 18, 19, 21, 22, 23, 25, 26, 28, 29, 31},
  {33, 35, 37, 39, 41, 44, 46, 49, 52, 55, 58, 62},
  {65, 69, 73, 78, 82, 87, 93, 98, 104, 110, 117, 124},
  {131, 139, 147, 156, 165, 175, 185, 196, 208, 220, 233, 247},
  {262, 277, 294, 311, 330, 349, 370, 392, 415, 440, 466, 494},
  {523, 554, 587, 622, 659, 699, 740, 784, 831, 880, 932, 988},
  {1047, 1109, 1175, 1245, 1319, 1397, 1480, 1568, 1661, 1760, 1865, 1976},
  {2093, 2217, 2349, 2489, 2637, 2794, 2960, 3136, 3322, 3520, 3729, 3951},
  {4186, 4435, 4699, 4978, 5274, 5588, 5920, 6272, 6645, 7040, 7459, 7902}
};

float Whole = 1;
float Half = .5;
float Quarter = .25;
float Eighth = .125;
float Sixteenth = .0625;

float tsin[200];

float songA[3][52] = {
  {27,50,1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
  {Quarter + Eighth, Quarter + Eighth, Quarter, Eighth, Quarter + Eighth, Quarter, Eighth, Quarter, Eighth, Half + Quarter, Eighth, Eighth, Eighth, Eighth, Eighth, Eighth, Eighth, Eighth, Eighth, Eighth, Eighth, Eighth, Quarter, Eighth, Quarter, Eighth, Half},
  {notes[4][0], notes[4][0], notes[4][0], notes[4][2], notes[4][4], notes[4][4], notes[4][2], notes[4][4], notes[4][5], notes[4][7], notes[5][0], notes[5][0], notes[5][0], notes[4][7], notes[4][7], notes[4][7], notes[4][4], notes[4][4], notes[4][4], notes[4][0], notes[4][0], notes[4][0], notes[4][7], notes[4][5], notes[4][4], notes[4][2], notes[4][0]}
};

float songB[3][52] = {
  {16, 50, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
  {Quarter, Eighth, Eighth, Eighth, Eighth, Quarter, Eighth, Eighth, Eighth, Eighth, Quarter, Eighth, Eighth, Eighth, Eighth, Quarter, Eighth},
  {notes[4][11], notes[4][9], notes[4][11], notes[4][9], notes[4][11], notes[4][4], notes[4][4], notes[4][4], notes[4][4], notes[4][4], notes[4][11], notes[4][11], notes[4][11], notes[4][11], notes[4][11], notes[4][6], notes[4][6]}
};

float songC[3][52] = {
  {26, 90, 1, 1, 1, 1, 0, 1, 1, 1, 1, 0, 1, 1, 1, 1, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0},
  {Quarter, Quarter, Quarter, Quarter, Half, Half, Quarter, Quarter, Quarter, Quarter, Half, Half, Quarter, Quarter, Quarter, Quarter, Half, Half, Quarter, Quarter, Quarter, Quarter, Quarter, Quarter, Quarter, Quarter, Half},
  {notes[4][0], notes[4][4], notes[4][7], notes[4][9], notes[4][7], notes[4][4], notes[4][0], notes[4][2], notes[4][5], notes[4][7], notes[4][5], notes[4][2], notes[4][9], notes[4][11], notes[4][14], notes[4][12], notes[4][11], notes[4][9], notes[4][7], notes[4][5], notes[4][4], notes[4][2], notes[4][4], notes[4][5]}
};

float songD[3][52] = {
  {48,17.25,1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1 ,1 ,1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
  {Eighth, Eighth, Eighth, Eighth, Eighth, Eighth, Eighth, Eighth, Eighth, Eighth, Eighth, Eighth, Eighth, Eighth, Eighth, Eighth, Eighth, Eighth, Eighth, Eighth, Eighth, Eighth, Eighth, Eighth, Eighth, Eighth, Eighth, Eighth, Eighth, Eighth, Eighth, Eighth, Eighth, Eighth, Eighth, Eighth, Eighth, Eighth, Eighth, Eighth, Eighth, Eighth, Eighth, Eighth, Eighth, Eighth, Eighth, Eighth,},
  {notes[4][8], notes[5][1], notes[5][4], notes[4][8], notes[5][1], notes[5][4], notes[4][8], notes[5][1], notes[5][4], notes[4][8], notes[5][1], notes[5][4], notes[4][8], notes[5][1], notes[5][4], notes[4][8], notes[5][1], notes[5][4], notes[4][8], notes[5][1], notes[5][4], notes[4][8], notes[5][1], notes[5][4], notes[4][9], notes[5][1], notes[5][4], notes[4][9], notes[5][1], notes[5][4], notes[4][9], notes[5][2], notes[5][6], notes[4][9], notes[5][2], notes[5][6], notes[4][8], notes[5][0], notes[5][6], notes[4][8], notes[5][1], notes[5][4], notes[4][8], notes[5][1], notes[5][3], notes[4][6], notes[5][0], notes[5][3]}
};

float songE[3][52] = {
  {26,17.25,1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1 ,1 ,1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
  {Eighth, Eighth, Eighth, Eighth, Eighth, Eighth, Eighth, Eighth, Eighth, Eighth, Eighth, Eighth, Eighth, Eighth, Eighth, Eighth, Eighth, Eighth, Eighth, Eighth, Eighth, Eighth, Eighth, Eighth},
  {notes[4][4], notes[4][8], notes[5][1], notes[4][8], notes[5][1], notes[5][4], notes[4][8], notes[5][1], notes[5][4], notes[4][8], notes[5][1], notes[5][4], notes[4][8], notes[5][3], notes[5][6], notes[4][8], notes[5][3], notes[5][6], notes[4][8], notes[5][3], notes[5][6], notes[4][8], notes[5][3], notes[5][6]}
};

void setup(){
  Serial.begin(115200);

  //Load tsin with the 
  float sinCount = 0;
  int index = 0;
    while(sinCount < 2){
    tsin[index] = ((255/2) * (sin((((180 * sinCount) * 71) / 4068))) + (255/2));
    sinCount += 0.01;
    index ++;
  }

  pinMode(3,OUTPUT);
  playSong2(songA);
  delay(1000);
  playSong2(songB);
  delay(1000);
  playSong2(songC);
  delay(2000);
  playSong2(songD);
  playSong2(songE);
  //tone2(500,3000,1000);
}

void loop(){
}

/*
void playSong(float song[3][52]){
  int x = 0;
  while(x < song[0][0]){
    if(song[0][(x + 2)] > 0){
      tone(3, song[2][x], ((song[1][x] * (60000 / song[0][1])) - 25));
      delay((song[1][x] * (60000 / song[0][1])) - 5);
    }
    else{
      delay((song[1][x] * (60000 / song[0][1])) - 5);
    }
    x ++;
  }
}
*/

void playSong2(float song[3][52]){
  int x = 0;
  while(x < song[0][0]){
    if(song[0][(x + 2)] > 0){
      tone2(song[2][x], ((song[1][x] * (60000 / song[0][1])) - 5));
    }
    else{
      delay((song[1][x] * (60000 / song[0][1])) - 5);
    }
    x ++;
  }
}

void tone2(int note, int length){
  //MEGA register
  //TCCR3B = _BV(CS30);
  //UNO register
  //TCCR2B = _BV(CS20);
  float x = 1;
  //float x2 = 1;
  float period = 1000000 / note;
  //float period2 = 1000000 / note2;
  unsigned long noteStart = millis();
  unsigned long noteEnd = noteStart + length;
  while(noteEnd > millis()){
    noInterrupts();
    unsigned long timeMIC = micros();
    float y = ((255/2) * (sin((((180 * x) * 71) / 4068))) + (255/2));
    //float y2 = ((255/2) * (sin((((180 * x) * 71) / 4068))) + (255/2));
    //analogWrite(3,(y+y2) / 2);
    analogWrite(3,y);
    x += 260 / period;
    //x2 += 260 / period2;
    timeMIC = micros() - timeMIC;
    interrupts();
    delayMicroseconds(260 - timeMIC);
  }
}

void tone3(int note, int length){
  if(note <= notes[6][11]){
    //MEGA register
    TCCR3B = _BV(CS30);
    //UNO register
    //TCCR2B = _BV(CS20);
    int updRunTm = 200;
    float updChange = (2 * (updRunTm / (1000000 / note)));
    unsigned long noteEnd = millis() + length;
    while(noteEnd > millis()){
      unsigned long timeMIC = micros();
      noInterrupts();
      analogWrite(3,y);
      Interrupts();
      delayMicroseconds(updRunTm - (micros() - timeMIC));
    }
  }
}
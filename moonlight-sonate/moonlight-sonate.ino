
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

float songD[3][52] = {
  {48,17.25,1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1 ,1 ,1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
  {Eighth, Eighth, Eighth, Eighth, Eighth, Eighth, Eighth, Eighth, Eighth, Eighth, Eighth, Eighth, Eighth, Eighth, Eighth, Eighth, Eighth, Eighth, Eighth, Eighth, Eighth, Eighth, Eighth, Eighth, Eighth, Eighth, Eighth, Eighth, Eighth, Eighth, Eighth, Eighth, Eighth, Eighth, Eighth, Eighth, Eighth, Eighth, Eighth, Eighth, Eighth, Eighth, Eighth, Eighth, Eighth, Eighth, Eighth, Eighth},
  {notes[4][8], notes[5][1], notes[5][4], notes[4][8], notes[5][1], notes[5][4], notes[4][8], notes[5][1], notes[5][4], notes[4][8], notes[5][1], notes[5][4], notes[4][8], notes[5][1], notes[5][4], notes[4][8], notes[5][1], notes[5][4], notes[4][8], notes[5][1], notes[5][4], notes[4][8], notes[5][1], notes[5][4], notes[4][9], notes[5][1], notes[5][4], notes[4][9], notes[5][1], notes[5][4], notes[4][9], notes[5][2], notes[5][6], notes[4][9], notes[5][2], notes[5][6], notes[4][8], notes[5][0], notes[5][6], notes[4][8], notes[5][1], notes[5][4], notes[4][8], notes[5][1], notes[5][3], notes[4][6], notes[5][0], notes[5][3]}
};

float songE[3][52] = {
  {26,17.25,1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1 ,1 ,1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
  {Eighth, Eighth, Eighth, Eighth, Eighth, Eighth, Eighth, Eighth, Eighth, Eighth, Eighth, Eighth, Eighth, Eighth, Eighth, Eighth, Eighth, Eighth, Eighth, Eighth, Eighth, Eighth, Eighth, Eighth},
  {notes[4][4], notes[4][8], notes[5][1], notes[4][8], notes[5][1], notes[5][4], notes[4][8], notes[5][1], notes[5][4], notes[4][8], notes[5][1], notes[5][4], notes[4][8], notes[5][3], notes[5][6], notes[4][8], notes[5][3], notes[5][6], notes[4][8], notes[5][3], notes[5][6], notes[4][8], notes[5][3], notes[5][6]}
};

float songF[3][52] = {
  {48,17.5,1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1 ,1 ,1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
  {Eighth, Eighth, Eighth, Eighth, Eighth, Eighth, Eighth, Eighth, Eighth, Eighth, Eighth, Eighth, Eighth, Eighth, Eighth, Eighth, Eighth, Eighth, Eighth, Eighth, Eighth, Eighth, Eighth, Eighth, Eighth, Eighth, Eighth, Eighth, Eighth, Eighth, Eighth, Eighth, Eighth, Eighth, Eighth, Eighth, Eighth, Eighth, Eighth, Eighth, Eighth, Eighth, Eighth, Eighth, Eighth, Eighth, Eighth, Eighth},
  {notes[4][8], notes[5][1], notes[5][4], notes[4][8], notes[5][1], notes[5][4], notes[4][9], notes[5][1], notes[5][6], notes[4][9], notes[5][1], notes[5][6], notes[4][8], notes[4][11], notes[5][4], notes[4][8], notes[4][11], notes[5][4], notes[4][9], notes[4][11], notes[5][5],}
};

void setup(){
  pinMode(3,OUTPUT);
  //Load tsin with the 
  float sinCount = 0;
  int index = 0;
    while(sinCount < 2){
    tsin[index] = ((255/2) * (sin((((180 * sinCount) * 71) / 4068))) + (255/2));
    sinCount += 0.01;
    index ++;
  }
  playSong2(songD);
  playSong2(songE);
}

void loop(){
}

void playSong2(float song[3][52]){
  int x = 0;
  while(x < song[0][0]){
    if(song[0][(x + 2)] > 0){
      tone3(song[2][x], ((song[1][x] * (60000 / song[0][1])) - 5));
    }
    else{
      delay((song[1][x] * (60000 / song[0][1])) - 5);
    }
    x ++;
  }
}

void tone3(int note, int length){
  if(note <= notes[6][11]){
    //MEGA register
    TCCR3B = _BV(CS30);
    //UNO register
    //TCCR2B = _BV(CS20);
    //to increas pitch make tune negative
    float tune = -13.3;
    float updRunTm = 90;
    float updChange = (2 * (updRunTm / (1000000 / note)));
    float updVall = 0;
    unsigned long noteEnd = millis() + length;
    while(noteEnd > millis()){
      noInterrupts();
      unsigned long timeMIC = micros();
      analogWrite(3, tsin[int(100 * updVall)]);
      updVall += updChange;
      if(updVall >= 2){
        updVall -= 2;
      }
      delayMicroseconds(tune + updRunTm - (micros() - timeMIC));
      interrupts();
    }
  }
}
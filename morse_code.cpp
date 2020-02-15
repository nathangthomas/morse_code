int codeLight =13;                                        //pin 13 is output for LED designated codeLight
int readyLight = 12;                                      //pin 12 is output for LED designated readyLight
char input;                                               //save the input
void setup() {
  pinMode (codeLight,OUTPUT);
  Serial.begin(9600);
}

void loop() {
  if (Serial.available()) {
    input = Serial.read();                                //read the input
    if (input == 'a' || input == 'A') {cA();}
    if (input == 'b' || input == 'B') {cB();}
    if (input == 'c' || input == 'C') {cC();}
    if (input == 'd' || input == 'D') {cD();}
    if (input == 'e' || input == 'E') {cE();}
    if (input == 'f' || input == 'F') {cF();}
    if (input == 'g' || input == 'G') {cG();}
    if (input == 'h' || input == 'H') {cH();}
    if (input == 'i' || input == 'I') {cI();}
    if (input == 'j' || input == 'J') {cJ();}
    if (input == 'k' || input == 'K') {cK();}
    if (input == 'l' || input == 'L') {cL();}
    if (input == 'm' || input == 'M') {cM();}
    if (input == 'n' || input == 'N') {cN();}
    if (input == 'o' || input == 'O') {cO();}
    if (input == 'p' || input == 'P') {cP();}
    if (input == 'q' || input == 'Q') {cQ();}
    if (input == 'r' || input == 'R') {cR();}
    if (input == 's' || input == 'S') {cS();}
    if (input == 't' || input == 'T') {cT();}
    if (input == 'u' || input == 'U') {cU();}
    if (input == 'v' || input == 'V') {cV();}
    if (input == 'w' || input == 'W') {cW();}
    if (input == 'x' || input == 'X') {cX();}
    if (input == 'y' || input == 'Y') {cY();}
    if (input == 'z' || input == 'Z') {cZ();}
    if (input == '1') {c1();}
    if (input == '2') {c2();}
    if (input == '3') {c3();}
    if (input == '4') {c4();}
    if (input == '5') {c5();}
    if (input == '6') {c6();}
    if (input == '7') {c7();}
    if (input == '8') {c8();}
    if (input == '9') {c9();}
    if (input == '0') {c0();}
    if (input == ' ') {wordSpace();}
    Serial.println (input);
  } else {
    ready();
  }
}

void letterSpace() {delay(600);} //space between letters
void wordSpace() {delay(1200);} //space between words

void dot() {digitalWrite(codeLight,HIGH); delay(300); digitalWrite(codeLight,LOW); delay(300);}
void dash() {digitalWrite(codeLight,HIGH); delay(900); digitalWrite(codeLight,LOW); delay(300);} // needs to be 3 times the delay of dot

void ready() {digitalWrite(readyLight,HIGH); delay(1200); digitalWrite(readyLight,LOW); delay(1200);}

void cA() {dot();dash();letterSpace();}
void cB() {dash();dot();dot();dot();letterSpace();}
void cC() {dash();dot();dash();dot();letterSpace();}
void cD() {dash();dot();dot();letterSpace();}
void cE() {dot();letterSpace();}
void cF() {dot();dot();dash();dot();letterSpace();}
void cG() {dash();dash();dot();letterSpace();}
void cH() {dot();dot();dot();dot();letterSpace();}
void cI() {dot();dot();letterSpace();}
void cJ() {dot();dash();dash();dash();letterSpace();}
void cK() {dash();dot();dash();letterSpace();}
void cL() {dot();dash();dot();dot();letterSpace();}
void cM() {dash();dash();letterSpace();}
void cN() {dash();dot();letterSpace();}
void cO() {dash();dash();dash();letterSpace();}
void cP() {dot();dash();dash();dot();letterSpace();}
void cQ() {dash();dash();dot();dash();letterSpace();}
void cR() {dot();dash();dot();letterSpace();}
void cS() {dot();dot();dot();letterSpace();}
void cT() {dash();letterSpace();}
void cU() {dot();dot();dash();letterSpace();}
void cV() {dot();dot();dot();dash();letterSpace();}
void cW() {dot();dash();dash();letterSpace();}
void cX() {dash();dot();dot();dash();letterSpace();}
void cY() {dash();dot();dash();dash();letterSpace();}
void cZ() {dash();dash();dot();dot();letterSpace();}
void c1() {dot();dash();dash();dash();dash();letterSpace();}
void c2() {dot();dot();dash();dash();dash();letterSpace();}
void c3() {dot();dot();dot();dash();dash();letterSpace();}
void c4() {dot();dot();dot();dot();dash();letterSpace();}
void c5() {dot();dot();dot();dot();dot();letterSpace();}
void c6() {dash();dot();dot();dot();dot();letterSpace();}
void c7() {dash();dash();dot();dot();dot();letterSpace();}
void c8() {dash();dash();dash();dot();dot();letterSpace();}
void c9() {dash();dash();dash();dash();dot();letterSpace();}
void c0() {dash();dash();dash();dash();dash();letterSpace();}

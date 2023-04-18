// This is an example program to demonstrate analogWrite.
// It uses various values to turn on an LED with 5 levels of intensity.
//

// declare variables
int pin6 = 6;
int level1 = 8;
int level2 = 32;
int level3 = 64;
int level4 = 128;
int level5 = 255;

// function prototype
void turnLEDIntensity(int level);

void setup() {
  // put your setup code here, to run once:
  pinMode(pin6, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  turnLEDIntensity(level1);
  turnLEDIntensity(level2);
  turnLEDIntensity(level3);
  turnLEDIntensity(level4);
  turnLEDIntensity(level5);
  
}

// user functions

void turnLEDIntensity(int level) {
  analogWrite(pin6, level);
  delay(500);
}

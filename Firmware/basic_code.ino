const int ir1 = 14;
const int ir2 = 7;
const int ir3 = 6;
const int ir4 = 1;
const int ir5 = 0;
const int ir6 = 21;
const int ir7 = 20;
const int ir8 = 19;
const PWMA = 2;
const PWMB = 3;
const AIN1 = 22;
const BIN1 = 23;
const AIN2 = 5;
const BIN2 = 6;
const int frequencyPWM = 1000;
const int resolution = 8;
int speed = 150;

void setup()
{
  Serial.begin(115200);
  pinMode(ir1, INPUT);
  pinMode(ir1, INPUT);
  pinMode(ir1, INPUT);
  pinMode(ir1, INPUT);
  pinMode(ir1, INPUT);
  pinMode(ir1, INPUT);
  pinMode(ir1, INPUT);
  pinMode(ir1, INPUT);

  pinMode(AIN1, OUTPUT);
  pinMode(AIN2, OUTPUT);            
  pinMode(BIN1, OUTPUT);            
  pinMode(BIN2, OUTPUT);

  digitalWrite(AIN1, LOW);
  digitalWrite(AIN2, LOW);
  digitalWrite(BIN1, LOW);
  digitalWrite(BIN2, LOW);

  ledcAttach(PWMA, frequencyPWN, resolutionPWN);
  ledcAttach(PWMB, frequencyPWN, resolutionPWN);
  ledcWrite(PWMA, 0);
  ledcWrite(PWMB, 0);
  
  Serial.println("Ready!");
  delay(2000);
}

void loop() {
  int ir1 = digitalRead(ir1);
  int ir2 = digitalRead(ir2);
  int ir3 = digitalRead(ir3);
  int ir4 = digitalRead(ir4);
  int ir5 = digitalRead(ir5);
  int ir6 = digitalRead(ir6);
  int ir7 = digitalRead(ir7);
  int ir8 = digitalRead(ir8);

  Serial.print("Sensors Data: ")
  Serial.print(ir1);
  Serial.print(" ");
  Serial.print(ir2);
  Serial.print(" ");
  Serial.print(ir3);
  Serial.print(" ");
  Serial.print(ir4);
  Serial.print(" ");
  Serial.print(ir5);
  Serial.print(" ");
  Serial.print(ir6);
  Serial.print(" ");
  Serial.print(ir7);
  Serial.print(" ");
  Serial.print(ir8);
  Serial.print(" ");

  int leftTyreSpeed = speed;
  int rightTyreSpeed = speed;

  if(ir1 || ir2 || ir3) {
    leftTyreSpeed = speed/2;
    rightTyreSpeed = speed;
  }
  else if (ir6 || ir7 || ir8) {
    leftTyreSpeed = speed;
    rightTyreSpeed = speed/2;
  }
  else if (ir4||ir5) {
    leftTyreSpeed = speed;
    rightTyreSpeed = speed;
  }
  else {
    leftTyreSpeed = 0;
    rightTyreSpeed = 0;
  }

  setMotorSpeed(leftTyreSpeed, rightTyreSpeed);
  delay(50);
}

void setMotorSpeed(int leftTyreSpeed, int rightTyreSpeed) {
  if(leftTyreSpeed > 0)
  {
    digitalWrite(AIN1, HIGH);
    digitalWrite(AIN2, LOW);
  }
  else if (leftTyreSpeed < 0)
  {
    digitalWrite(AIN1, LOW);
    digitalWrite(AIN2, HIGH);
  }
  else
  {
    digitalWrite(AIN1, LOW);
    digitalWrite(AIN2, LOW);
  }
  
  ledcWrite(PWMA, abs(leftTyreSpeed));

  if(rightTyreSpeed > 0)
  {
    digitalWrite(BIN1, LOW);
    digitalWrite(BIN2, HIGH);
  }
  else if (rightTyreSpeed < 0)
  {
    digitalWrite(BIN1, HIGH);
    digitalWrite(BIN2, LOW);
  }
  else
  {
    digitalWrite(BIN1, LOW);
    digitalWrite(BIN2, LOW);
  }

  ledcWrite(PWMB, abs(rightTyreSpeed));
}
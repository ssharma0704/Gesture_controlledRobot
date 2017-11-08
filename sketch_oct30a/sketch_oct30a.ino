void setup()
{
  Serial.begin(9600);
  // Setup motors
  pinMode(2, OUTPUT); //Initializing the Digital Pin 2,3,4,5 as OUTPUT pins for the Motors
  pinMode(3, OUTPUT);//2,3,4,5 pins will be connected to L293D module
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  //taking input from accelerometer adxl_335
  pinMode(A0, INPUT); //x axis
  pinMode(A1, INPUT); // y axis

}

void loop()
{
  int  x = analogRead(A0); // reading values of x axis from A0
  int  y = analogRead(A1); //reading values of y axis from A1
  //Serial.print("X-Axis  ");
  //Serial.println("Y-Axis");
//  Serial.print(x);  //printing x values to caliberate the accelerometer
//  Serial.print("   ");
//  Serial.println(y); //printing y values to caliberate the accelerometer

  if (x <XXXX && y <XXXX ) // caliberating the values with hit and trial by tilting the accelerometer in the forward direction
  {
    Serial.println("Move Forward");
    moveforward();
  }

  else if (x <XXXX && y <XXXX ) //caliberating the values with hit and trial by tilting the accelerometer in the backward direction
  {
    Serial.println("Move Backward");
    movebackward();
  }

  else if (x <XXXX && y <XXXX) // caliberating the values with hit and trial by tilting the accelerometer in the left direction
  {
    Serial.println("Move Left");
    moveleft();
  }

  else if (x <XXXX && y <XXXX) // caliberating the values with hit and trial by tilting the accelerometer in the right direction
  {
    Serial.println("Move Right");
    moveright();
  }

  else
  {
    Serial.println("STOP");
    nomove(); // caliberating the values with hit and trial by holding normal to the ground
  }

} //end of void loop
void moveforward()
{
  digitalWrite(2, HIGH); // both motors in forward direction
  digitalWrite(3, LOW);
  digitalWrite(4, HIGH);
  digitalWrite(5, LOW);
}
void movebackward()
{
  digitalWrite(2, LOW); // both motors in backward direction
  digitalWrite(3, HIGH);
  digitalWrite(4, LOW);
  digitalWrite(5, HIGH);
}
void moveleft()
{
  digitalWrite(2, HIGH); //left motor in backward direction and right motor in forward direction
  digitalWrite(3, LOW);
  digitalWrite(4, LOW);
  digitalWrite(5, HIGH);
}
void moveright()
{
  digitalWrite(2, LOW); // left motor in forwqrd direction and right motor in backward direction
  digitalWrite(3, HIGH);
  digitalWrite(4, HIGH);
  digitalWrite(5, LOW);
}
void nomove()
{
  digitalWrite(2, LOW); // motors are still
  digitalWrite(3, LOW);
  digitalWrite(4, LOW);
  digitalWrite(5, LOW);
}

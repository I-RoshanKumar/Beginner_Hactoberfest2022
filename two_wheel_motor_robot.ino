// This Robot/car generally has two wheels with motors at the back and 1 castor wheel in front working with L298n motor driver
// This robot code is basic for non-encoder motors(means we are not counting steps) , just moving the car using delay   
//*****************************************************//
// IMPORTANT POINTS:
    // mot1 , mot1b are direction pins means if LOW and HIGH move motor left forward then HIGH and LOW move backward.  PS--According to circuit connections
    // mot2 , mot2b are direction pins means if LOW and HIGH move motor right forward then HIGH and LOW move backward.  PS--According to circuit connections
    //mot1_pwm is speed of left motor 
    // mot2_pwm is speed of right motor
    // You also need to check when the right turn aur circle path is completing, means in how many seconds. and set that time as delay.
    //It depends on motor rpm, battery voltage etc.
//******************************************************//


// put below pin numbers according to your cicuit
int mot1_pwm=5;   // left motor speedpwm pin number
int mot1=4;      //left motor direction 1
int mot1b=3;    //left motor direction 2

int mot2_pwm=6;    // right motor speedpwm pin number
int mot2=7;       //right motor direction 1
int mot2b=8;      //right  motor direction 2


void setup() {
  // putting all pins mode as output
  pinMode(mot1,OUTPUT);
  pinMode(mot1b,OUTPUT);
    pinMode(mot1_pwm,OUTPUT);
    
  pinMode(mot2_pwm,OUTPUT);
  pinMode(mot2,OUTPUT);
  pinMode(mot2b,OUTPUT);


// initialize motors pwm as zero to stop in initial
  digitalWrite(mot1,LOW);
  digitalWrite(mot1b,LOW);
  analogWrite(mot1_pwm,0);
                                                                             
  digitalWrite(mot2,LOW);
  digitalWrite(mot2b,LOW);
  analogWrite(mot2_pwm,0);
  

}

void loop() {
  // put your main code here, to run repeatedly:

    // there are many other ways also to make your bot turn left or right. Below is one of the way.
    
    // calling the above functions to move the bot
  
    move_forward();
    delay(6000);  // move forward for 6 seconds
  
    move_backward();
    delay(6000);  // move backward for 6 seconds
  
     stop_car();
    delay(2000); // stop the bot for 2 seconds
  
     left_turn();  //bot will rotate on left side on its position 
    delay(2000);    // this will starts rotating it for 2 seconds
    right_turn();  //bot will rotate on right side on its position
    delay(2000);
  
    circle_clockwise();
    delay(9000);  // moving clockwise in circular path for 9 seconds
    circle_anticlockwise();
    delay(9000);  // moving anticlockwise in circular path for 9 seconds
  
    stop_car();
    delay(2000); // stop the bot for 2 seconds


    // similarly we can write any path using above functions

}

// Functions for the movement of car/robot

int stop_car()
{
  digitalWrite(mot1,LOW);
  digitalWrite(mot1b,HIGH);
  analogWrite(mot1_pwm,0);
                                                                             
  digitalWrite(mot2,LOW);
  digitalWrite(mot2b,HIGH);
  analogWrite(mot2_pwm,0);
  
  }
int move_forward()
{
  digitalWrite(mot1,LOW);
  digitalWrite(mot1b,HIGH);
  analogWrite(mot1_pwm,250);
                                                                             
  digitalWrite(mot2,LOW);
  digitalWrite(mot2b,HIGH);
  analogWrite(mot2_pwm,250);
  
  }
int move_backward()
{
  digitalWrite(mot1,HIGH);
  digitalWrite(mot1b,LOW);
  analogWrite(mot1_pwm,250);
                                                                             
  digitalWrite(mot2,HIGH);
  digitalWrite(mot2b,LOW);
  analogWrite(mot2_pwm,250);
  
  }
 int circle_clockwise()
  {

  digitalWrite(mot1,LOW);
  digitalWrite(mot1b,HIGH);
  analogWrite(mot1_pwm,250);
                                                                             
  digitalWrite(mot2,LOW);
  digitalWrite(mot2b,HIGH);
  analogWrite(mot2_pwm,100);
  
    }

 int circle_anticlockwise()
  {

  digitalWrite(mot1,LOW);
  digitalWrite(mot1b,HIGH);
  analogWrite(mot1_pwm,100);
                                                                             
  digitalWrite(mot2,LOW);
  digitalWrite(mot2b,HIGH);
  analogWrite(mot2_pwm,250);
  
    }

int left_turn()
  {

  digitalWrite(mot1,LOW);
  digitalWrite(mot1b,HIGH);
  analogWrite(mot1_pwm,0);
                                                                             
  digitalWrite(mot2,LOW);
  digitalWrite(mot2b,HIGH);
  analogWrite(mot2_pwm,250);
  
    }
int right_turn()
 {

  digitalWrite(mot1,LOW);
  digitalWrite(mot1b,HIGH);
  analogWrite(mot1_pwm,250);
                                                                             
  digitalWrite(mot2,LOW);
  digitalWrite(mot2b,HIGH);
  analogWrite(mot2_pwm,0);
  
    }

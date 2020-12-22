#include <Servo.h>
Servo motor0;
Servo motor1;
Servo motor2;
Servo motor3;

void setup()
{
    Serial.begin(9600);
    Serial.println("OG!");
    motor0.attach(6,999,2001);
    for (int i = 0; i<1502;i++){
      motor0.writeMicroseconds(i);
    }
    for (int i = 0; i<499;i++){
      motor0.writeMicroseconds(1500-i);
    }
    motor0.writeMicroseconds(1000); 
    motor1.attach(9,999,2001);

    for (int i = 0; i<1502;i++){
      motor1.writeMicroseconds(i);
    }
    for (int i = 0; i<499;i++){
      motor1.writeMicroseconds(1500-i);
    }
    motor1.writeMicroseconds(1000);   
    motor2.attach(10,999,2001);

    for (int i = 0; i<1502;i++){
      motor2.writeMicroseconds(i);
    }
    for (int i = 0; i<499;i++){
      motor2.writeMicroseconds(1500-i);
    }
    motor2.writeMicroseconds(1000);  
    motor3.attach(11,999,2001);

    for (int i = 0; i<1502;i++){
      motor3.writeMicroseconds(i);
    }
    for (int i = 0; i<499;i++){
      motor3.writeMicroseconds(1500-i);
    }
    motor3.writeMicroseconds(1000);

}

void loop()
{
    for (int i = 1000; i<2000;i++){
        motor0.writeMicroseconds(i);
      }
    for (int i = 1000; i<2000;i++){
        motor1.writeMicroseconds(i);
      }
    for (int i = 1000; i<2000;i++){
        motor2.writeMicroseconds(i);
      }
    for (int i = 1000; i<2000;i++){
        motor3.writeMicroseconds(i);
      }

}

#pragma config(Sensor, in2,    leftLine,       sensorLineFollower)
#pragma config(Sensor, in3,    middleLine,     sensorLineFollower)
#pragma config(Sensor, in4,    rightLine,      sensorLineFollower)
#pragma config(Sensor, dgtl1,  startButton,    sensorTouch)
#pragma config(Motor,  port1,           motor1,        tmotorVex269_HBridge, openLoop)
#pragma config(Motor,  port2,           motor2,        tmotorVex269_MC29, openLoop, reversed)
#pragma config(Motor,  port10,          turnMotor,     tmotorVex393_HBridge, openLoop)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//

bool light1Activated = false;

task main()
{

bool buttonStop = false;



	while(1==1)
	{
		//start forward motors
		 if (SensorValue(startButton) == 1 && buttonStop == false)
		{
			wait(1);
			//
			while (SensorValue[leftLine] > 3000) 
			{
				startMotor(turnMotor, 127);
		  }
		  stopMotor(turnMotor);
		  while (SensorValue[middleLine] < 3000)
		  {
		 		startMotor(motor1);
		 		startMotor(motor2);
			}
			stopMotor(motor1);
			stopMotor(motor2); 
			while (SensorValue[rightLine] > 3000)
			{
				startMotor(turnMotor, -127);	
			}
			stopMotor(turnMotor);
			
		}

}
}

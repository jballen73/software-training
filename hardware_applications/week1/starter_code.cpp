#include <iostream>
#include <STSL/RJRobot.h>

using namespace std;

int main() {
    RJRobot robot;

    cout << "Robot is ready to roll!" << endl;

//    robot.SetMotor(MotorPort::A, 200);
//    robot.SetMotor(MotorPort::B, 200);
//    robot.Wait(1000ms);
//    robot.StopMotors();

    robot.SetMotor(MotorPort::A, 200);
    robot.SetMotor(MotorPort::B, 200);
    robot.Wait(2600ms);

    robot.SetMotor(MotorPort::A, -200);
    robot.Wait(2300ms);
    robot.SetMotor(MotorPort::A, 200);
    //robot.SetMotor(MotorPort::B, 200);
    robot.Wait(2400ms);
    robot.SetMotor(MotorPort::A, -200);
    robot.Wait(2300ms);
    robot.SetMotor(MotorPort::A, 200);
    //robot.SetMotor(MotorPort::B, 200);
    robot.Wait(2600ms);
    robot.SetMotor(MotorPort::A, -200);
    robot.Wait(2300ms);
    robot.SetMotor(MotorPort::A, 200);
    //robot.SetMotor(MotorPort::B, 200);
    robot.Wait(2400ms);
    robot.StopMotors();



    return 1;


}
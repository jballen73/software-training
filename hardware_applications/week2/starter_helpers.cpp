// This file intentionally left blank
#include "starter_helpers.h"
using namespace std;
void run_robot(RJRobot &robot, const std::string &commands) {
    size_t index = commands.find(" ");
    size_t index_prev = 0;
    while(index != string::npos) {
        string sub_cmd = commands.substr(index_prev, index - index_prev);
        execute_command(robot, sub_cmd);
        index_prev = index + 1;
        index = commands.find(" ", index_prev);
    }

}

void execute_command(RJRobot &robot, const std::string &command){
    if(command == "forward") {
        robot.SetMotor(MotorPort::A, 100);
        robot.SetMotor(MotorPort::B, 100);
        robot.Wait(250ms);
    }else if (command == "backward") {
        robot.SetMotor(MotorPort::A, -100);
        robot.SetMotor(MotorPort::B, -100);
        robot.Wait(250ms);
    }else if (command == "left") {
        robot.SetMotor(MotorPort::A, 100);
        robot.SetMotor(MotorPort::B, -100);
        robot.Wait(250ms);
    }else if (command == "right") {
        robot.SetMotor(MotorPort::A, -100);
        robot.SetMotor(MotorPort::B, 100);
        robot.Wait(250ms);
    }

}
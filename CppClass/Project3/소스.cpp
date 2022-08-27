#include <iostream>

using namespace std;

class Arm {
private:
    string _name;
public:
    Arm(string name)
        : _name(name) {}

    void info() {
        cout << _name << endl;
    }
};

class RocketArm : public Arm {
public:
    RocketArm()
        : Arm("RocketArm") {}
    void info() {
        cout << "RocketArm" << endl;
    }
};

class CannonArm : public Arm {

public:
    CannonArm()
        : Arm("CannonArm") {}

    void info() {
        cout << "CannonArm" << endl;
    }
};

class Robot {
private:
    Arm& _leftArm;
    Arm& _rightArm;

public:
    Robot(Arm& leftArm, Arm& rightArm)
        : _leftArm(leftArm), _rightArm(rightArm) {}

    void info() {
        cout << "LeftArm: ";
        _leftArm.info();
        cout << "RightArm: ";
        _rightArm.info();
        cout << endl;
    }
};

class RocketArmRobot : public Robot {

public:
    RocketArmRobot(RocketArm& leftArm, RocketArm& rightArm)
        : Robot(leftArm, rightArm) {}
};

class CannonArmRobot : public Robot {
public:
    CannonArmRobot(CannonArm& leftArm, CannonArm& rightArm)
        : Robot(leftArm, rightArm) {}

};

class LeftCannonArmRightRocketArmRobot : public Robot {
public:
    LeftCannonArmRightRocketArmRobot(CannonArm& leftArm, RocketArm& rightArm)
        : Robot(leftArm, rightArm) {}
};

int main() {
    CannonArm cannonArm;
    RocketArm rocketArm;

    RocketArmRobot rocketArmRobot(rocketArm, rocketArm);
    rocketArmRobot.info();

    CannonArmRobot cannonArmRobot(cannonArm, cannonArm);
    cannonArmRobot.info();

    LeftCannonArmRightRocketArmRobot lcrrRobot(cannonArm, rocketArm);
    lcrrRobot.info();


    return 0;
}
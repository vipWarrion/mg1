#pragma once
#include <glut.h>
#include <math.h>

class rightArmLoser
{
	int bias;
	int frame_id;
	void drawRightArmFrame0();
	void drawRightArmFrame12();
	void drawRightArmFrame13();
	void drawRightArmFrame14();
	void drawRightArmFrame16();
	void drawRightArmFrame17();
	void drawRightArmFrame18();
	void drawRightArmFrame19();
	void drawRightArmFrame20();
	void drawRightArmFrame21();
	void drawRightArmFrame28();
	void drawRightArmFrame40();
	void drawRightArmFrame42(int angle);
	void drawRightArmFrame56(int angle);
	void drawRightArmFrame61(int angle);
	void drawRightArmFrame62(int angle);
	void drawRightArmFrame63(int angle);
	void drawRightArmFrame64(int angle);
	void drawRightArmFrame69(int angle);
	void drawRightArmFrame71(int angle);
	void drawRightArmFrame163();
	void drawCircleArmFrame(int Radius, int startAngle, int endAngle, int step);
public:
	rightArmLoser(int bias, int frame_id);
	~rightArmLoser();
	void drawRightArm();
};


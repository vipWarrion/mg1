#pragma once
#include <glut.h>
#include <math.h>

class leftArmLoser
{
	int bias;
	int frame_id;
	void drawLeftArmFrame0();
	void drawLeftArmFrame12(int angle);
	void drawLeftArmFrame13();
	void drawLeftArmFrame16();
	void drawLeftArmFrame17();
	void drawLeftArmFrame18();
	void drawLeftArmFrame28();
	void drawLeftArmFrame56(int angle);
	void drawLeftArmFrame61(int angle);
	void drawLeftArmFrame62(int angle);
	void drawLeftArmFrame64(int angle);
	void drawLeftArmFrame65(int angle);
	void drawLeftArmFrame66(int angle);
	void drawLeftArmFrame68(int angle);
	void drawLeftArmFrame162();
	void drawLeftArmFrame164();

	void drawCircleArmFrame(int Radius, int startAngle, int endAngle, int step);
public:
	leftArmLoser(int bias, int frame_id);
	~leftArmLoser();
	void drawLeftArm();
};


#pragma once
#include <glut.h>
#include <math.h>

class winner
{
	int bias;
	void drawBody();
	void drawLegs();
	void drawHead();
	void drawRightArm();
	void drawLeftArm(int frame_id);
	void frame0();
	void frame134();
	void frame135();
	void frame138();
	void frame139();
	void frame140();
	void frame141();
	void frame142();
	void frame143();
	void frame145();
	void frame146();
	void frame147();
	void frame148();
	void frame149();
	void frame150();
	void frame154();
	void frame155();
public:
	winner();
	~winner();
	void draw(int bias, int frame_id);
};


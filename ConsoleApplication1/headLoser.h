#pragma once
#include <glut.h>
#include <math.h>

class headLoser
{
	int bias;
	int frame_id;
	void drawHeadFrame0(int angle);
	void drawHeadFrame167();
public:
	headLoser(int bias, int frame_id);
	~headLoser();
	void drawHead();
};


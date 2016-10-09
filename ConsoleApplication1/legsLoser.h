#pragma once
#include <glut.h>
#include <math.h>

class legsLoser
{
	int bias;
	int frame_id;
	void drawLegsFrame0();
	void drawLegsFrame1();
	void drawLegsFrame2();
	void drawLegsFrame28();
	void drawLegsFrame60();
	void drawLegsFrame61();
	void drawLegsFrame63();
	void drawLegsFrame64();
	void drawLegsFrame65();
	void drawLegsFrame66();
	void drawLegsFrame67();
	void drawLegsFrame68();
	void drawLegsFrame69();
	void drawLegsFrame70();

	void drawLegsFrame154();
	void drawLegsFrame160(int align);
	void drawLegsFrame161();
	void drawLegsFrame162();
	void drawLegsFrame163();
	void drawLegsFrame164();
	void drawLegsFrame166();
	void drawLegsFrame167();
public:
	legsLoser(int bias, int frame_id);
	~legsLoser();
	void drawLegs();
};


#pragma once
#include <glut.h>
#include <math.h>

class bodyLoser
{
	int bias;
	int frame_id;
	void drawBodyFrame0(int angle);
	void drawBodyFrame154(int align);
	void drawBodyFrame160(int align);
	void drawBodyFrame166(int align);
	void drawBodyFrame167();
public:
	void drawBody();
	bodyLoser(int bias, int frame_id);
	~bodyLoser();
};


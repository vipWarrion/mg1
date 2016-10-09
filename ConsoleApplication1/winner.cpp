#include "winner.h"


winner::winner()
{
}


winner::~winner()
{
}

void winner::draw(int bias, int frame_id)
{
	this->bias = bias;
	glPushMatrix();
	drawLegs();

	drawBody();
	drawHead();
	glPolygonMode(GL_FRONT_AND_BACK, GL_LINE);
	drawBody();
	drawHead();
	glPolygonMode(GL_FRONT_AND_BACK, GL_FILL);

	glLineWidth(4);
	drawRightArm();
	drawLeftArm(frame_id);
	glLineWidth(1);


	glPopMatrix();
}

void winner::drawBody()
{
	glPushMatrix();
	glTranslated(bias - 5, 210, 0);
	glBegin(GL_POLYGON);
	for (int i = 90; i <= 300; i += 10)
	{
		glVertex2i(sin(i * 3.14 / 180) * 18, cos(i * 3.14 / 180) * 18);
	}
	glVertex2i(sin(300 * 3.14 / 180) * 18 + 3, cos(300 * 3.14 / 180) * 18 + 10);
	glVertex2i(sin(300 * 3.14 / 180) * 18 + 3, cos(300 * 3.14 / 180) * 18 + 17);
	glVertex2i(sin(300 * 3.14 / 180) * 18 + 2, cos(300 * 3.14 / 180) * 18 + 25);
	glVertex2i(sin(300 * 3.14 / 180) * 18 + 20, cos(300 * 3.14 / 180) * 18 + 35);
	for (int i = 60; i <= 90; i += 10)
	{
		glVertex2i(sin(i * 3.14 / 180) * 90 - 71, cos(i * 3.14 / 180) * 90);
	}
	glEnd();
	glPopMatrix();
}

void winner::drawLegs()
{
	glPushMatrix();
	glLineWidth(4);
	glTranslated(bias, 150, 0);
	glPushMatrix();
	glBegin(GL_LINE_STRIP);
	glVertex2i(3, 0);
	glVertex2i(3, 5);
	glVertex2i(2, 10);
	glVertex2i(1, 15);
	glVertex2i(1, 20);
	glVertex2i(0, 30);
	glVertex2i(0, 45);
	glEnd();
	glPopMatrix();
	glPushMatrix();
	glTranslated(-12, 0, 0);
	glBegin(GL_LINE_STRIP);
	glVertex2i(5, 0);
	glVertex2i(3, 5);
	glVertex2i(2, 15);
	glVertex2i(2, 30);
	glVertex2i(3, 45);
	glEnd();
	glPopMatrix();
	glLineWidth(1);
	glPopMatrix();
}

void winner::drawHead()
{
	glPushMatrix();
	glTranslated(bias - 12, 261, 0);
	glBegin(GL_POLYGON);
	for (int i = 0; i < 360; i += 10)
	{
		glVertex2i(sin(i * 3.14 / 180) * 18, cos(i * 3.14 / 180) * 20);
	}
	glEnd();
	glPopMatrix();
}

void winner::drawRightArm()
{
	glPushMatrix();
	glTranslated(bias + 5, 187, 0);
	glBegin(GL_LINE_STRIP);
	glVertex2i(3, 0);
	glVertex2i(3, 5);
	glVertex2i(2, 10);
	glVertex2i(1, 20);
	glEnd();
	glPopMatrix();
}

void winner::drawLeftArm(int frame_id)
{
	glPushMatrix();
	switch (frame_id)
	{
	case 134:
		frame134();
		break;
	case 135:
		frame135();
		break;
	case 136:
		glTranslated(7, 3, 0);
		frame135();
		break;
	case 137:
		glTranslated(10, 3, 0);
		frame135();
		break;
	case 138:
		frame138();
		break;
	case 139:
		frame139();
		break;
	case 140:
		frame140();
		break;
	case 141:
		frame141();
		break;
	case 142:
		frame142();
		break;
	case 143:
	case 144:
		frame143();
		break;
	case 145:
	case 156:
	case 157:
	case 158:
	case 159:
	case 160:
	case 161:
	case 162:
	case 163:
	case 164:
	case 165:
	case 166:
	case 167:
		frame145();
		break;
	case 146:
		frame146();
		break;
	case 147:
		frame147();
		break;
	case 148:
		frame148();
		break;
	case 149:
		frame149();
		break;
	case 150:
	case 151:
	case 152:
	case 153:
		frame150();
		break;
	case 154:
		frame154();
		break;
	case 155:
		frame155();
		break;
	default:
		frame0();
		break;
	}
	glPopMatrix();
}

void winner::frame0()
{
	glPushMatrix();
	glTranslated(bias - 20, 187, 0);
	glBegin(GL_LINE_STRIP);
	glVertex2i(3, 0);
	glVertex2i(3, 5);
	glVertex2i(2, 10);
	glVertex2i(1, 20);
	glEnd();
	glPopMatrix();
}

void winner::frame134()
{
	glPushMatrix();
	glTranslated(bias - 28, 205, 0);
	glBegin(GL_LINE_STRIP);
	glVertex2i(3, 0);
	glVertex2i(3, 5);
	glVertex2i(2, 13);
	glVertex2i(12, 30);
	glEnd();
	glPopMatrix();
}

void winner::frame135()
{
	glPushMatrix();
	glTranslated(bias - 22, 210, 0);
	glBegin(GL_LINE_STRIP);
	glVertex2i(0, 0);
	glVertex2i(-5, 5);
	glVertex2i(-10, 15);
	glVertex2i(10, 27);
	glEnd();
	glPopMatrix();
}

void winner::frame138()
{
	glPushMatrix();
	glTranslated(bias - 30, 210, 0);
	glBegin(GL_LINE_STRIP);
	glVertex2i(10, -3);
	glVertex2i(0, 0);
	glVertex2i(9, 15);
	glVertex2i(13, 25);
	glEnd();
	glPopMatrix();
}

void winner::frame139()
{
	glPushMatrix();
	glTranslated(bias - 30, 210, 0);
	glBegin(GL_LINE_STRIP);
	glVertex2i(0, 0);
	glVertex2i(9, 15);
	glVertex2i(13, 25);
	glEnd();
	glPointSize(8);
	glBegin(GL_POINTS);
	glVertex3d(2, -2, 0);
	glEnd();
	glPointSize(1);
	glPopMatrix();
}

void winner::frame140()
{
	glPushMatrix();
	glTranslated(bias - 30, 210, 0);
	glBegin(GL_LINE_STRIP);
	glVertex3d(-8, 0, 0);
	glVertex2i(0, 0);
	glVertex2i(9, 15);
	glVertex2i(13, 25);
	glEnd();
	glPointSize(9);
	glBegin(GL_POINTS);
	glVertex3d(-8, 0, 0);
	glEnd();
	glPointSize(1);
	glPopMatrix();
}

void winner::frame141()
{
	glPushMatrix();
	glTranslated(bias - 30, 210, 0);
	glBegin(GL_LINE_STRIP);
	glVertex3d(-12, 0, 0);
	glVertex2i(0, 0);
	glVertex2i(9, 15);
	glVertex2i(13, 25);
	glEnd();
	glBegin(GL_LINE_STRIP);
	glVertex3d(-12, 4, 0);
	glVertex3d(-12, -4, 0);
	glEnd();
	glPointSize(7);
	glBegin(GL_POINTS);
	glVertex3d(-8, 0, 0);
	glEnd();
	glPointSize(1);
	glPopMatrix();
}

void winner::frame142()
{
	glPushMatrix();
	glTranslated(bias - 30, 210, 0);
	glBegin(GL_LINE_STRIP);
	glVertex3d(-12, 0, 0);
	glVertex2i(0, 0);
	glVertex2i(9, 15);
	glVertex2i(13, 25);
	glEnd();
	glBegin(GL_LINE_STRIP);
	glVertex3d(-12, 4, 0);
	glVertex3d(-12, -4, 0);
	glEnd();
	glPointSize(7);
	glBegin(GL_POINTS);
	glVertex3d(-8, 0, 0);
	glVertex3d(-5, 2, 0);
	glEnd();
	glPointSize(1);
	glPopMatrix();
}

void winner::frame143()
{
	glPushMatrix();
	glTranslated(bias - 30, 210, 0);
	glBegin(GL_LINE_STRIP);
	glVertex3d(-12, 0, 0);
	glVertex2i(0, 0);
	glVertex2i(9, 15);
	glVertex2i(13, 25);
	glEnd();
	glBegin(GL_LINE_STRIP);
	glVertex3d(-12, 4, 0);
	glVertex3d(-12, -4, 0);
	glEnd();
	glPointSize(7);
	glBegin(GL_POINTS);
	glVertex3d(-8, 0, 0);
	glVertex3d(-5, 2, 0);
	glEnd();
	glPointSize(1);
	glLineWidth(3);
	glBegin(GL_LINE_STRIP);
	glVertex3d(-5, 3, 0);
	glVertex3d(-8, 7, 0);
	glVertex3d(-12, 7, 0);
	glEnd();
	glPopMatrix();
}

void winner::frame145()
{
	glPushMatrix();
	glTranslated(bias - 30, 210, 0);
	glBegin(GL_LINE_STRIP);
	glVertex3d(-12, 0, 0);
	glVertex2i(0, 0);
	glVertex2i(9, 15);
	glVertex2i(13, 25);
	glEnd();
	glBegin(GL_LINE_STRIP);
	glVertex3d(-12, 4, 0);
	glVertex3d(-12, -4, 0);
	glEnd();
	glPointSize(7);
	glBegin(GL_POINTS);
	glVertex3d(-8, 0, 0);
	glVertex3d(-5, 2, 0);
	glEnd();
	glPointSize(1);
	glLineWidth(3);
	glBegin(GL_LINE_STRIP);
	glVertex3d(-5, 3, 0);
	glVertex3d(-8, 5, 0);
	glVertex3d(-12, 5, 0);
	glEnd();
	glPopMatrix();
}

void winner::frame146()
{
	frame145();
	glColor3f(0.2, 1.0, 1.0);
	glPushMatrix();
	glTranslated(bias - 30, 210, 0);
	glLineWidth(5);
	glBegin(GL_LINE_STRIP);
	glVertex3d(-14, 0, 0);
	glVertex3d(-200, 0, 0);
	glEnd();
	glPointSize(4);
	glBegin(GL_POINTS);
	glVertex3d(-22, 8, 0);
	glVertex3d(-18, -10, 0);
	glVertex3d(-35, -8, 0);
	glEnd();
	glPointSize(1);
	glPopMatrix();
	glColor3f(0.4, 0.4, 0.4);
}

void winner::frame147()
{
	frame145();
	glColor3f(0.2, 1.0, 1.0);
	glPushMatrix();
	glTranslated(bias - 30, 210, 0);
	glLineWidth(5);
	glBegin(GL_LINE_STRIP);
	glVertex3d(-14, 0, 0);
	glVertex3d(-400, 0, 0);
	glEnd();
	glPointSize(4);
	glBegin(GL_POINTS);
	glVertex3d(-30, 18, 0);
	glVertex3d(-26, -20, 0);
	glVertex3d(-50, -18, 0);
	glEnd();
	glPointSize(1);
	glPopMatrix();
	glColor3f(0.4, 0.4, 0.4);
}

void winner::frame148()
{
	frame145();
	glColor3f(0.2, 1.0, 1.0);
	glPushMatrix();
	glTranslated(bias - 30, 210, 0);
	glLineWidth(5);
	glBegin(GL_LINE_STRIP);
	glVertex3d(-14, 0, 0);
	glVertex3d(-550, 0, 0);
	glEnd();
	glPointSize(4);
	glBegin(GL_POINTS);
	glVertex3d(-30, -10, 0);
	glVertex3d(-26, -48, 0);
	glVertex3d(-50, -46, 0);
	glEnd();
	glPointSize(1);
	glPopMatrix();
	glColor3f(0.4, 0.4, 0.4);
}

void winner::frame149()
{
	frame145();
	glColor3f(0.2, 1.0, 1.0);
	glPushMatrix();
	glTranslated(bias - 30, 210, 0);
	glLineWidth(5);
	glBegin(GL_LINE_STRIP);
	glVertex3d(-14, 0, 0);
	glVertex3d(-550, 0, 0);
	glEnd();
	glPointSize(4);
	glBegin(GL_POINTS);
	glVertex3d(-40, -45, 0);
	glEnd();
	glPointSize(1);
	glPopMatrix();
	glColor3f(0.4, 0.4, 0.4);
}

void winner::frame150()
{
	frame145();
	glColor3f(0.2, 1.0, 1.0);
	glPushMatrix();
	glTranslated(bias - 30, 210, 0);
	glLineWidth(5);
	glBegin(GL_LINE_STRIP);
	glVertex3d(-14, 0, 0);
	glVertex3d(-550, 0, 0);
	glEnd();
	glPopMatrix();
	glColor3f(0.4, 0.4, 0.4);
}

void winner::frame154()
{
	frame145();
	glColor3f(0.2, 1.0, 1.0);
	glPushMatrix();
	glTranslated(bias - 30, 210, 0);
	glLineWidth(5);
	glBegin(GL_LINE_STRIP);
	glVertex3d(-14, 0, 0);
	glVertex3d(-400, 0, 0);
	glEnd();
	glPopMatrix();
	glColor3f(0.4, 0.4, 0.4);
}

void winner::frame155()
{
	frame145();
	glColor3f(0.2, 1.0, 1.0);
	glPushMatrix();
	glTranslated(bias - 30, 210, 0);
	glLineWidth(5);
	glBegin(GL_LINE_STRIP);
	glVertex3d(-14, 0, 0);
	glVertex3d(-200, 0, 0);
	glEnd();
	glPopMatrix();
	glColor3f(0.4, 0.4, 0.4);
}
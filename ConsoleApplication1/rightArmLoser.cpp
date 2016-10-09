#include "rightArmLoser.h"

rightArmLoser::rightArmLoser(int bias, int frame_id)
{
	this->bias = bias;
	this->frame_id = frame_id;
}

rightArmLoser::~rightArmLoser()
{
}

void rightArmLoser::drawRightArm()
{
	glPushMatrix();
	switch (frame_id)
	{
	case 0:
	case 4:
	case 8:
		drawRightArmFrame0();
		break;
	case 1:
	case 3:
	case 5:
	case 7:
	case 9:
	case 11:
		glTranslated(0, -7, 0);
		drawRightArmFrame0();
		break;
	case 2:
	case 6:
	case 10:
		glTranslated(0, -11, 0);
		drawRightArmFrame0();
		break;
	case 12:
		drawRightArmFrame12();
		break;
	case 13:
	case 15:
		drawRightArmFrame13();
		break;
	case 14:
		drawRightArmFrame14();
		break;
	case 16:
		drawRightArmFrame16();
		break;
	case 17:
		drawRightArmFrame17();
		break;
	case 18:
		glTranslated(0, -1, 0);
		drawRightArmFrame18();
		break;
	case 19:
		glTranslated(0, -1, 0);
		drawRightArmFrame19();
		break;
	case 20:
		glTranslated(0, -1, 0);
		drawRightArmFrame20();
		break;
	case 21:
		glTranslated(0, -1, 0);
		drawRightArmFrame21();
		break;
	case 22:
	case 23:
	case 24:
	case 25:
	case 26:
	case 27:
		drawRightArmFrame19();
		break;
	case 28:
		glTranslated(10, 0, 0);
		drawRightArmFrame28();
		break;
	case 29:
		glTranslated(20, 0, 0);
		drawRightArmFrame19();
		break;
	case 30:
		glTranslated(30, 0, 0);
		drawRightArmFrame28();
		break;
	case 31:
		glTranslated(40, 0, 0);
		drawRightArmFrame19();
		break;
	case 32:
		glTranslated(50, 0, 0);
		drawRightArmFrame28();
		break;
	case 33:
		glTranslated(60, 0, 0);
		drawRightArmFrame19();
		break;
	case 34:
		glTranslated(70, 0, 0);
		drawRightArmFrame28();
		break;
	case 35:
		glTranslated(80, 0, 0);
		drawRightArmFrame19();
		break;
	case 36:
	case 37:
	case 44:
	case 45:
		glTranslated(73, 5, 0);
		drawRightArmFrame14();
		break;
	case 38:
	case 39:
	case 46:
	case 47:
		glTranslated(77, 25, 0);
		drawRightArmFrame14();
		break;
	case 40:
	case 41:
	case 48:
	case 49:
		glTranslated(73, 5, 0);
		drawRightArmFrame40();
		break;
	case 42:
	case 43:
	case 50:
	case 51:
	case 52:
	case 59:
		glTranslated(77, 25, 0);
		drawRightArmFrame42(0);
		break;
	case 53:
		glTranslated(90, 20, 0);
		drawRightArmFrame42(0);
		break;
	case 54:
		glTranslated(94, 8, 0);
		drawRightArmFrame42(-20);
		break;
	case 55:
		glTranslated(84, 23, 0);
		drawRightArmFrame42(0);
		break;
	case 56:
		glTranslated(72, 0, 0);
		drawRightArmFrame56(-10);
		break;
	case 57:
		glTranslated(80, 0, 0);
		drawRightArmFrame56(0);
		break;
	case 58:
		glTranslated(80, 25, 0);
		drawRightArmFrame42(20);
		break;
	case 60:
		glTranslated(77, 25, 0);
		drawRightArmFrame42(10);
		break;
	case 61:
		glTranslated(80, 0, 0);
		drawRightArmFrame61(0);
		break;
	case 62:
		glTranslated(70, 4, 0);
		drawRightArmFrame62(0);
		break;
	case 63:
		glTranslated(70, 4, 0);
		drawRightArmFrame63(0);
		break;
	case 64:
		glTranslated(60, 8, 0);
		drawRightArmFrame64(0);
		break;
	case 65:
		glTranslated(62, 13, 0);
		drawRightArmFrame12();
		break;
	case 66:
		glTranslated(57, 19, 0);
		drawRightArmFrame12();
		break;
	case 68:
		glTranslated(28, 0, 0);
		drawRightArmFrame42(0);
		break;
	case 69:
		glTranslated(55, 15, 0);
		drawRightArmFrame69(0);
		break;
	case 70:
		glTranslated(55, 5, 0);
		drawRightArmFrame69(-10);
		break;
	case 71:
		glTranslated(70, 5, 0);
		drawRightArmFrame71(0);
		break;


	case 148:
		glTranslated(bias + 42, 266, 0);
		drawCircleArmFrame(50, 190, 240, 5);
		break;
	case 154:
		glTranslated(bias + 32, 266, 0);
		drawCircleArmFrame(50, 190, 240, 5);
		break;

	case 133:
	case 134:
	case 135:
	case 136:
	case 137:
	case 138:
	case 139:
	case 140:
	case 141:
	case 142:
	case 143:
	case 144:
	case 145:
	case 146:
	case 147:

	case 149:
	case 150:
	case 151:
	case 152:
	case 153:
	case 155:
	case 156:
	case 157:
	case 159:
		glTranslated(bias + 32, 268, 0);
		drawCircleArmFrame(50, 180, 240, 5);
		break;
	case 158:
	case 160:
		glTranslated(bias + 32, 268, 0);
		drawCircleArmFrame(50, 180, 240, 5);
		break;
	case 161:
		glTranslated(bias + 70, 265, 0);
		drawCircleArmFrame(50, 180, 240, 5);
		break;
	case 162:
		glTranslated(bias + 158, 242, 0);
		drawCircleArmFrame(100, 240, 270, 5);
		break;
	case 163:
		drawRightArmFrame163();
		break;
	case 164:
	case 165:
	case 166:
	case 167:
		break;

	default:
		drawRightArmFrame0();
		break;
	case 67:
	case 72:
		break;
	}
	glPopMatrix();
}

void rightArmLoser::drawRightArmFrame0()
{
	glTranslated(bias, 190, 0);
	glPushMatrix();
	glBegin(GL_LINE_STRIP);
	glVertex2i(35, 10);
	glVertex2i(30, 21);
	glVertex2i(25, 27);
	glVertex2i(15, 35);
	glVertex2i(0, 40);
	glEnd();
	glPopMatrix();
}

void rightArmLoser::drawRightArmFrame12()
{
	glTranslated(bias, 183, 0);
	glPushMatrix();
	glBegin(GL_LINE_STRIP);
	glVertex2i(12, 7);
	glVertex2i(18, 13);
	glVertex2i(23, 20);
	glVertex2i(15, 28);
	glVertex2i(0, 40);
	glEnd();
	glPopMatrix();
}

void rightArmLoser::drawRightArmFrame13()
{
	glTranslated(bias, 183, 0);
	glPushMatrix();
	glBegin(GL_LINE_STRIP);
	glVertex2i(1, 7);
	glVertex2i(8, 9);
	glVertex2i(13, 12);
	glVertex2i(15, 28);
	glVertex2i(0, 40);
	glEnd();
	glPopMatrix();
}

void rightArmLoser::drawRightArmFrame14()
{
	glTranslated(bias, 183, 0);
	glPushMatrix();
	glBegin(GL_LINE_STRIP);
	glVertex2i(1, 7);
	glVertex2i(5, 9);
	glVertex2i(8, 12);
	glVertex2i(11, 28);
	glVertex2i(0, 40);
	glEnd();
	glPopMatrix();
}

void rightArmLoser::drawRightArmFrame16()
{
	glTranslated(bias, 183, 0);
	glPushMatrix();
	glBegin(GL_LINE_STRIP);
	glVertex2i(32, 10);
	glVertex2i(24, 13);
	glVertex2i(20, 16);
	glVertex2i(15, 20);
	glVertex2i(0, 40);
	glEnd();
	glPointSize(8);
	glBegin(GL_POINTS);
	glVertex2i(32, 10);
	glEnd();
	glPointSize(1);
	glPopMatrix();
}

void rightArmLoser::drawRightArmFrame17()
{
	glTranslated(bias, 183, 0);
	glPushMatrix();
	glBegin(GL_LINE_STRIP);
	glVertex2i(35, 13);
	glVertex2i(24, 17);
	glVertex2i(20, 20);
	glVertex2i(15, 25);
	glVertex2i(0, 40);
	glEnd();
	glBegin(GL_LINE_STRIP);
	glVertex2i(40, 17);
	glVertex2i(32, 11);
	glEnd();
	glPointSize(8);
	glBegin(GL_POINTS);
	glVertex2i(40, 17);
	glEnd();
	glPointSize(1);
	glPopMatrix();
}

void rightArmLoser::drawRightArmFrame18()
{
	glTranslated(bias, 183, 0);
	glPushMatrix();
	glBegin(GL_LINE_STRIP);
	glVertex2i(40, 21);
	glVertex2i(33, 21);
	glVertex2i(25, 22);
	glVertex2i(15, 25);
	glVertex2i(0, 40);
	glEnd();
	glPopMatrix();
}

void rightArmLoser::drawRightArmFrame19()
{
	glTranslated(bias, 183, 0);
	glPushMatrix();
	glBegin(GL_LINE_STRIP);
	glVertex2i(40, 21);
	glVertex2i(33, 21);
	glVertex2i(25, 22);
	glVertex2i(15, 25);
	glVertex2i(0, 40);
	glEnd();
	glPointSize(6);
	glBegin(GL_POINTS);
	glVertex2i(45, 24);
	glEnd();
	glPointSize(1);
	glPopMatrix();
}

void rightArmLoser::drawRightArmFrame20()
{
	glTranslated(bias, 183, 0);
	glPushMatrix();
	glBegin(GL_LINE_STRIP);
	glVertex2i(40, 21);
	glVertex2i(33, 21);
	glVertex2i(25, 22);
	glVertex2i(15, 25);
	glVertex2i(0, 40);
	glEnd();
	glLineWidth(2);
	glBegin(GL_LINE_STRIP);
	glVertex2i(45, 30);
	glVertex2i(42, 24);
	glEnd();
	glLineWidth(4);
	glPopMatrix();
}

void rightArmLoser::drawRightArmFrame21()
{
	glTranslated(bias, 183, 0);
	glPushMatrix();
	glBegin(GL_LINE_STRIP);
	glVertex2i(40, 21);
	glVertex2i(33, 21);
	glVertex2i(25, 22);
	glVertex2i(15, 25);
	glVertex2i(0, 40);
	glEnd();
	glLineWidth(2);
	glBegin(GL_LINE_STRIP);
	glVertex2i(48, 28);
	glVertex2i(42, 24);
	glEnd();
	glLineWidth(4);
	glPopMatrix();
}

void rightArmLoser::drawRightArmFrame28()
{
	glTranslated(bias, 183, 0);
	glPushMatrix();
	glBegin(GL_LINE_STRIP);
	glVertex2i(50, 34);
	glVertex2i(40, 33);
	glVertex2i(25, 33);
	glVertex2i(20, 32);
	glVertex2i(15, 31);
	glEnd();
	glPopMatrix();
}

void rightArmLoser::drawRightArmFrame40()
{
	glTranslated(bias, 183, 0);
	glPushMatrix();
	glBegin(GL_LINE_STRIP);
	glVertex2i(40, 8);
	glVertex2i(30, 17);
	glVertex2i(20, 26);
	glVertex2i(10, 35);
	glVertex2i(5, 42);
	glEnd();
	glPopMatrix();
}

void rightArmLoser::drawRightArmFrame42(int angle)
{
	glTranslated(bias, 183, 0);
	glRotatef(angle, 0.0f, 0.0f, 1.0f);
	glPushMatrix();
	glBegin(GL_LINE_STRIP);
	glVertex2i(39, 32);
	glVertex2i(37, 27);
	glVertex2i(32, 22);
	glVertex2i(30, 20);
	glVertex2i(28, 18);
	glVertex2i(25, 17);
	glVertex2i(23, 16);
	glVertex2i(15, 17);
	glVertex2i(5, 19);
	glEnd();
	glPopMatrix();
}

void rightArmLoser::drawRightArmFrame56(int angle)
{
	glTranslated(bias, 183, 0);
	glRotatef(angle, 0.0f, 0.0f, 1.0f);
	glPushMatrix();
	glBegin(GL_LINE_STRIP);
	glVertex2i(3, 45);
	glVertex2i(15, 60);
	glVertex2i(18, 66);
	glVertex2i(25, 90);
	glEnd();
	glPopMatrix();
}

void rightArmLoser::drawRightArmFrame61(int angle)
{
	glTranslated(bias, 183, 0);
	glRotatef(angle, 0.0f, 0.0f, 1.0f);
	glPushMatrix();
	glBegin(GL_LINE_STRIP);
	glVertex2i(13, 40);
	glVertex2i(30, 30);
	glVertex2i(40, 43);
	glVertex2i(39, 47);
	glEnd();
	glPopMatrix();
}

void rightArmLoser::drawRightArmFrame62(int angle)
{
	glTranslated(bias, 183, 0);
	glRotatef(angle, 0.0f, 0.0f, 1.0f);
	glPushMatrix();
	glBegin(GL_LINE_STRIP);
	glVertex2i(8, 40);
	glVertex2i(30, 30);
	glVertex2i(20, 45);
	glEnd();
	glPopMatrix();
}

void rightArmLoser::drawRightArmFrame63(int angle)
{
	glTranslated(bias, 183, 0);
	glRotatef(angle, 0.0f, 0.0f, 1.0f);
	glPushMatrix();
	glBegin(GL_LINE_STRIP);
	glVertex2i(5, 40);
	glVertex2i(30, 35);
	glVertex2i(15, 29);
	glEnd();
	glPopMatrix();
}

void rightArmLoser::drawRightArmFrame64(int angle)
{
	glTranslated(bias, 183, 0);
	glRotatef(angle, 0.0f, 0.0f, 1.0f);
	glPushMatrix();
	glBegin(GL_LINE_STRIP);
	glVertex2i(5, 40);
	glVertex2i(25, 25);
	glVertex2i(22, 23);
	glVertex2i(10, 21);
	glEnd();
	glPopMatrix();
}

void rightArmLoser::drawRightArmFrame69(int angle)
{
	glTranslated(bias, 183, 0);
	glRotatef(angle, 0.0f, 0.0f, 1.0f);
	glPushMatrix();
	glBegin(GL_LINE_STRIP);
	glVertex2i(-25, 50);
	glVertex2i(-24, 29);
	glVertex2i(-22, 23);
	glVertex2i(-5, 21);
	glEnd();
	glPopMatrix();
}

void rightArmLoser::drawRightArmFrame71(int angle)
{
	glTranslated(bias, 183, 0);
	glRotatef(angle, 0.0f, 0.0f, 1.0f);
	glPushMatrix();
	glBegin(GL_LINE_STRIP);
	glVertex2i(0, 50);
	glVertex2i(20, 38);
	glVertex2i(25, 33);
	glVertex2i(0, 31);
	glEnd();
	glLineWidth(2);
	glBegin(GL_LINE_STRIP);
	glVertex2i(-30, 30);
	glVertex2i(-38, 26);
	glEnd();
	glBegin(GL_LINE_STRIP);
	glVertex2i(-30, 10);
	glVertex2i(-38, 6);
	glEnd();
	glBegin(GL_LINE_STRIP);
	glVertex2i(-30, -10);
	glVertex2i(-38, -6);
	glEnd();
	glLineWidth(3);
	glPopMatrix();
}

void rightArmLoser::drawRightArmFrame163() {
	glTranslated(bias + 78, 177, 0);
	glPushMatrix();
	glBegin(GL_LINE_STRIP);
	glVertex2i(-20, -15);
	glVertex2i(-18, -5);
	glVertex2i(-15, 11);
	glVertex2i(-10, 20);
	glVertex2i(0, 40);
	glEnd();
	glPopMatrix();
}



void rightArmLoser::drawCircleArmFrame(int radius, int startAngle, int endAngle, int step) {
	glPushMatrix();
	glBegin(GL_LINE_STRIP);
	for (int i = startAngle; i <= endAngle; i += step)
	{
		glVertex2i(sin(i * 3.14 / 180) * radius, cos(i * 3.14 / 180) * radius);
	}
	glEnd();
	glPopMatrix();
}
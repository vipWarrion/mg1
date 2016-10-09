#include "leftArmLoser.h"

leftArmLoser::leftArmLoser(int bias, int frame_id)
{
	this->bias = bias;
	this->frame_id = frame_id;
}

leftArmLoser::~leftArmLoser()
{
}

void leftArmLoser::drawLeftArm()
{
	glPushMatrix();
	switch (frame_id)
	{
	case 0:
	case 4:
	case 8:
		drawLeftArmFrame0();
		break;
	case 1:
	case 3:
	case 5:
	case 7:
	case 9:
	case 11:
		glTranslated(0, -7, 0);
		drawLeftArmFrame0();
		break;
	case 2:
	case 6:
	case 10:
		glTranslated(0, -11, 0);
		drawLeftArmFrame0();
		break;
	case 12:
		drawLeftArmFrame12(0);
		break;
	case 13:
	case 14:
	case 15:
		drawLeftArmFrame13();
		break;
	case 16:
		drawLeftArmFrame16();
		break;
	case 17:
		drawLeftArmFrame17();
		break;
	case 18:
	case 19:
	case 20:
	case 21:
		glTranslated(0, -1, 0);
		drawLeftArmFrame18();
		break;
	case 22:
	case 23:
	case 24:
	case 25:
	case 26:
	case 27:
		drawLeftArmFrame18();
		break;
	case 28:
		glTranslated(10, 0, 0);
		drawLeftArmFrame28();
		break;
	case 29:
		glTranslated(20, 0, 0);
		drawLeftArmFrame18();
		break;
	case 30:
		glTranslated(30, 0, 0);
		drawLeftArmFrame28();
		break;
	case 31:
		glTranslated(40, 0, 0);
		drawLeftArmFrame18();
		break;
	case 32:
		glTranslated(50, 0, 0);
		drawLeftArmFrame28();
		break;
	case 33:
		glTranslated(60, 0, 0);
		drawLeftArmFrame18();
		break;
	case 34:
		glTranslated(70, 0, 0);
		drawLeftArmFrame28();
		break;
	case 35:
		glTranslated(80, 0, 0);
		drawLeftArmFrame18();
		break;
	case 36:
	case 37:
	case 40:
	case 41:
	case 44:
	case 45:
	case 48:
	case 49:
		glTranslated(72, 0, 0);
		drawLeftArmFrame18();
		break;
	case 38:
	case 39:
	case 42:
	case 43:
	case 46:
	case 47:
	case 50:
	case 51:
	case 52:
		glTranslated(76, 0, 0);
		drawLeftArmFrame12(0);
		break;
	case 53:
		glTranslated(83, 0, 0);
		drawLeftArmFrame12(0);
		break;
	case 54:
		glTranslated(90, 0, 0);
		drawLeftArmFrame28();
		break;
	case 55:
		glTranslated(79, 0, 0);
		drawLeftArmFrame16();
		break;
	case 56:
		glTranslated(80, 0, 0);
		drawLeftArmFrame56(0);
		break;
	case 57:
		glTranslated(88, 0, 0);
		drawLeftArmFrame56(10);
		break;
	case 58:
		glTranslated(105, 68, 0);
		drawLeftArmFrame56(190);
		break;
	case 59:
		glTranslated(76, 4, 0);
		drawLeftArmFrame12(0);
		break;
	case 60:
		glTranslated(90, -8, 0);
		drawLeftArmFrame12(20);
		break;
	case 61:
		glTranslated(92, 0, 0);
		drawLeftArmFrame61(0);
		break;
	case 62:
		glTranslated(80, 2, 0);
		drawLeftArmFrame62(0);
		break;
	case 63:
		glTranslated(100, -9, 0);
		drawLeftArmFrame62(30);
		break;
	case 64:
		glTranslated(70, 0, 0);
		drawLeftArmFrame64(0);
		break;
	case 65:
		glTranslated(70, 0, 0);
		drawLeftArmFrame65(0);
		break;
	case 66:
	case 67:
		glTranslated(70, 0, 0);
		drawLeftArmFrame66(0);
		break;
	case 68:
		glTranslated(70, 0, 0);
		drawLeftArmFrame68(0);
		break;
	case 69:
	case 70:
		glTranslated(100, 140, 0);
		drawLeftArmFrame68(190);
		break;
	case 71:
		glTranslated(60, 36, 0);
		drawLeftArmFrame12(-30);
		break;


	case 148:
		glTranslated(bias - 15, 280, 0);
		drawCircleArmFrame(40, 180, 270, 5);
		break;
	case 154:
		glTranslated(bias - 25, 280, 0);
		drawCircleArmFrame(40, 180, 270, 5);
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
	case 158:
	case 159:
	case 160:
		glTranslated(bias - 30, 280, 0);
		drawCircleArmFrame(40, 180, 270, 5);
		break;
	case 161:
		glTranslated(bias + 10, 290, 0);
		drawCircleArmFrame(40, 180, 270, 5);
		break;
	case 162:
		drawLeftArmFrame162();
		break;
	case 163:
		glTranslated(-25, 45, 0);
	case 164:
		drawLeftArmFrame164();
		break;
	case 165:
	case 166:
	case 167:
		break;


	default:
		drawLeftArmFrame0();
		break;
	}
	glPopMatrix();
}

void leftArmLoser::drawLeftArmFrame0()
{
	glPushMatrix();
	glTranslated(bias - 50, 190, 0);
	glBegin(GL_LINE_STRIP);
	glVertex2i(0, 17);
	glVertex2i(6, 26);
	glVertex2i(14, 33);
	glVertex2i(25, 38);
	glVertex2i(38, 44);
	glEnd();
	glPopMatrix();
}

void leftArmLoser::drawLeftArmFrame12(int angle)
{
	glPushMatrix();
	glTranslated(bias - 50, 183, 0);
	glRotatef(angle, 0.0f, 0.0f, 1.0f);
	glBegin(GL_LINE_STRIP);
	glVertex2i(14, 13);
	glVertex2i(8, 26);
	glVertex2i(14, 33);
	glVertex2i(25, 38);
	glVertex2i(38, 44);
	glEnd();
	glPopMatrix();
}

void leftArmLoser::drawLeftArmFrame13()
{
	glPushMatrix();
	glTranslated(bias - 50, 183, 0);
	glBegin(GL_LINE_STRIP);
	glVertex2i(23, 13);
	glVertex2i(15, 16);
	glVertex2i(11, 35);
	glVertex2i(30, 41);
	glVertex2i(38, 45);
	glEnd();
	glPopMatrix();
}

void leftArmLoser::drawLeftArmFrame16()
{
	glPushMatrix();
	glTranslated(bias - 50, 183, 0);
	glBegin(GL_LINE_STRIP);
	glVertex2i(11, 13);
	glVertex2i(12, 16);
	glVertex2i(14, 20);
	glVertex2i(20, 34);
	glVertex2i(34, 42);
	glEnd();
	glPopMatrix();
}

void leftArmLoser::drawLeftArmFrame17()
{
	glPushMatrix();
	glTranslated(bias - 50, 183, 0);
	glBegin(GL_LINE_STRIP);
	glVertex2i(0, 26);
	glVertex2i(5, 29);
	glVertex2i(10, 32);
	glVertex2i(19, 37);
	glVertex2i(34, 42);
	glEnd();
	glPopMatrix();
}

void leftArmLoser::drawLeftArmFrame18()
{
	glPushMatrix();
	glTranslated(bias - 50, 183, 0);
	glBegin(GL_LINE_STRIP);
	glVertex2i(-3, 49);
	glVertex2i(5, 40);
	glVertex2i(10, 36);
	glVertex2i(19, 37);
	glVertex2i(34, 42);
	glEnd();
	glPopMatrix();
}

void leftArmLoser::drawLeftArmFrame28()
{
	glPushMatrix();
	glTranslated(bias - 50, 183, 0);
	glBegin(GL_LINE_STRIP);
	glVertex2i(0, 42);
	glVertex2i(5, 40);
	glVertex2i(20, 39);
	glVertex2i(39, 40);
	glVertex2i(54, 42);
	glEnd();
	glPopMatrix();
}

void leftArmLoser::drawLeftArmFrame56(int angle)
{
	glPushMatrix();
	glTranslated(bias - 50, 183, 0);
	glRotatef(angle, 0.0f, 0.0f, 1.0f);
	glBegin(GL_LINE_STRIP);
	glVertex2i(-3, 21);
	glVertex2i(5, 25);
	glVertex2i(13, 29);
	glVertex2i(20, 36);
	glVertex2i(29, 45);
	glEnd();
	glPopMatrix();
}

void leftArmLoser::drawLeftArmFrame61(int angle)
{
	glPushMatrix();
	glTranslated(bias - 50, 183, 0);
	glRotatef(angle, 0.0f, 0.0f, 1.0f);
	glBegin(GL_LINE_STRIP);
	glVertex2i(18, 30);
	glVertex2i(0, 33);
	glVertex2i(15, 40);
	glVertex2i(29, 45);
	glEnd();
	glPopMatrix();
}

void leftArmLoser::drawLeftArmFrame62(int angle)
{
	glPushMatrix();
	glTranslated(bias - 50, 183, 0);
	glRotatef(angle, 0.0f, 0.0f, 1.0f);
	glBegin(GL_LINE_STRIP);
	glVertex2i(18, 48);
	glVertex2i(0, 33);
	glVertex2i(15, 40);
	glVertex2i(29, 45);
	glEnd();
	glPopMatrix();
}

void leftArmLoser::drawLeftArmFrame64(int angle)
{
	glPushMatrix();
	glTranslated(bias - 50, 183, 0);
	glRotatef(angle, 0.0f, 0.0f, 1.0f);
	glBegin(GL_LINE_STRIP);
	glVertex2i(13, 55);
	glVertex2i(-5, 44);
	glVertex2i(26, 45);
	glEnd();
	glPopMatrix();
}

void leftArmLoser::drawLeftArmFrame65(int angle)
{
	glPushMatrix();
	glTranslated(bias - 50, 183, 0);
	glRotatef(angle, 0.0f, 0.0f, 1.0f);
	glBegin(GL_LINE_STRIP);
	glVertex2i(13, 69);
	glVertex2i(4, 47);
	glVertex2i(28, 45);
	glEnd();
	glPopMatrix();
}

void leftArmLoser::drawLeftArmFrame66(int angle)
{
	glPushMatrix();
	glTranslated(bias - 50, 183, 0);
	glRotatef(angle, 0.0f, 0.0f, 1.0f);
	glBegin(GL_LINE_STRIP);
	glVertex2i(10, 72);
	glVertex2i(5, 57);
	glVertex2i(4, 47);
	glVertex2i(16, 43);
	glVertex2i(28, 45);
	glEnd();
	glPopMatrix();
}

void leftArmLoser::drawLeftArmFrame68(int angle)
{
	glPushMatrix();
	glTranslated(bias - 50, 183, 0);
	glRotatef(angle, 0.0f, 0.0f, 1.0f);
	glBegin(GL_LINE_STRIP);
	glVertex2i(12, 92);
	glVertex2i(9, 77);
	glVertex2i(7, 67);
	glVertex2i(16, 53);
	glVertex2i(28, 45);
	glEnd();
	glPopMatrix();
}


void leftArmLoser::drawLeftArmFrame162() {
	glPushMatrix();
	glTranslated(bias + 40, 285, 0);
	glBegin(GL_LINE_STRIP);
	for (int i = 180; i <= 280; i += 10)
	{
		glVertex2i(sin(i * 3.14 / 180) * 30, cos(i * 3.14 / 180) * 30);
	}
	glEnd();
	glPopMatrix();
}

void leftArmLoser::drawLeftArmFrame164() {
	glPushMatrix();
	glTranslated(bias + 20, 190, 0);
	glBegin(GL_LINE_STRIP);
	glVertex2i(10, 27);
	glVertex2i(15, 21);
	glVertex2i(35, 11);
	glVertex2i(50, 9);
	glVertex2i(70, 8);
	glEnd();
	glPopMatrix();
}



void leftArmLoser::drawCircleArmFrame(int radius, int startAngle, int endAngle, int step) {
	glPushMatrix();
	glBegin(GL_LINE_STRIP);
	for (int i = startAngle; i <= endAngle; i += step)
	{
		glVertex2i(sin(i * 3.14 / 180) * radius, cos(i * 3.14 / 180) * radius);
	}
	glEnd();
	glPopMatrix();
}
#include "bodyLoser.h"

bodyLoser::bodyLoser(int bias, int frame_id)
{
	this->bias = bias;
	this->frame_id = frame_id;
}

bodyLoser::~bodyLoser()
{
}

void bodyLoser::drawBody()
{
	glPushMatrix();
	switch (frame_id)
	{
	case 0:
	case 4:
	case 8:
		drawBodyFrame0(0);
		break;
	case 1:
	case 3:
	case 5:
	case 7:
	case 9:
	case 11:
	case 12:
	case 13:
	case 14:
	case 15:
	case 16:
	case 17:
	case 22:
	case 23:
	case 24:
	case 25:
	case 26:
	case 27:
		glTranslated(0, -7, 0);
		drawBodyFrame0(0);
		break;
	case 28:
		glTranslated(10, -7, 0);
		drawBodyFrame0(-20);
		break;
	case 29:
		glTranslated(20, -7, 0);
		drawBodyFrame0(0);
		break;
	case 30:
		glTranslated(30, -7, 0);
		drawBodyFrame0(-20);
		break;
	case 31:
		glTranslated(40, -7, 0);
		drawBodyFrame0(0);
		break;
	case 32:
		glTranslated(50, -7, 0);
		drawBodyFrame0(-20);
		break;
	case 33:
		glTranslated(60, -7, 0);
		drawBodyFrame0(0);
		break;
	case 34:
		glTranslated(70, -7, 0);
		drawBodyFrame0(-20);
		break;
	case 35:
		glTranslated(80, -7, 0);
		drawBodyFrame0(0);
		break;
	case 36:
	case 37:
	case 40:
	case 41:
	case 44:
	case 45:
	case 48:
	case 49:
		glTranslated(80, -7, 0);
		drawBodyFrame0(15);
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
	case 56:
	case 58:
	case 59:
		glTranslated(80, -7, 0);
		drawBodyFrame0(10);
		break;
	case 53:
		glTranslated(80, -7, 0);
		drawBodyFrame0(-10);
		break;
	case 54:
		glTranslated(80, -7, 0);
		drawBodyFrame0(-35);
		break;
	case 55:
		glTranslated(80, -7, 0);
		drawBodyFrame0(0);
		break;
	case 57:
	case 62:
		glTranslated(80, -3, 0);
		drawBodyFrame0(10);
		break;
	case 60:
		glTranslated(80, -9, 0);
		drawBodyFrame0(10);
		break;
	case 61:
		glTranslated(85, -9, 0);
		drawBodyFrame0(0);
		break;
	case 63:
		glTranslated(82, -7, 0);
		drawBodyFrame0(25);
		break;
	case 64:
		glTranslated(75, -4, 0);
		drawBodyFrame0(25);
		break;
	case 65:
	case 66:
	case 67:
	case 68:
	case 69:
	case 70:
		glTranslated(70, -4, 0);
		drawBodyFrame0(10);
		break;
	case 71:
		glTranslated(75, 1, 0);
		drawBodyFrame0(10);
		break;
	case 72:
		glTranslated(75, 4, 0);
		drawBodyFrame0(10);
		break;
	case 18:
	case 19:
	case 20:
	case 21:
		glTranslated(0, -8, 0);
		drawBodyFrame0(0);
		break;
	case 2:
	case 6:
	case 10:
		glTranslated(0, -11, 0);
		drawBodyFrame0(0);
		break;


	case 132:
		glTranslated(-8, -20, 0);
		drawBodyFrame160(3);
		break;
	case 148:
		glTranslated(0, 0, 0);
		drawBodyFrame154(180);
		break;
	case 154:
		glTranslated(0, -24, 0);
		drawBodyFrame154(0);
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
		glTranslated(-8, -22, 0);
		drawBodyFrame160(3);
		break;
	case 158:
	case 160:
		glTranslated(-10, -20, 0);
		drawBodyFrame160(0);
		break;
	case 161:
		glTranslated(-10, -27, 0);
		drawBodyFrame166(70);
		break;
	case 162:
		glTranslated(0, -20, 0);
		drawBodyFrame166(60);
		break;
	case 163:
		glTranslated(0, -20, 0);
		drawBodyFrame166(45);
		break;
	case 164:
		glTranslated(0, -30, 0);
		drawBodyFrame166(25);
		break;
	case 165:
		glTranslated(0, 4, 0);
		drawBodyFrame167();
		break;
	case 166:
		drawBodyFrame166(0);
		break;
	case 167:
		drawBodyFrame167();
		break;

	default:
		drawBodyFrame0(0);
		break;
	}
	glPopMatrix();
}

void bodyLoser::drawBodyFrame0(int angle)
{
	glPushMatrix();
	glTranslated(bias - 10, 198, 0);
	glRotatef(angle, 0.0f, 0.0f, 1.0f);
	glBegin(GL_POLYGON);
	int TRIG_ARG = 50;
	int MULL = 18;
	for (int i = 60; i <= 270; i += 10)
	{
		glVertex2i(sin(i * 3.14 / 180) * 18, cos(i * 3.14 / 180) * 18);
	}
	glVertex2i(sin(TRIG_ARG * 3.14 / 180) * MULL + 1, cos(TRIG_ARG * 3.14 / 180) * MULL + 3);
	glVertex2i(sin(TRIG_ARG * 3.14 / 180) * MULL + 3, cos(TRIG_ARG * 3.14 / 180) * MULL + 11);
	glVertex2i(sin(TRIG_ARG * 3.14 / 180) * MULL + 6, cos(TRIG_ARG * 3.14 / 180) * MULL + 20);
	glVertex2i(sin(TRIG_ARG * 3.14 / 180) * MULL + 8, cos(TRIG_ARG * 3.14 / 180) * MULL + 29);
	glVertex2i(sin(TRIG_ARG * 3.14 / 180) * MULL - 15, cos(TRIG_ARG * 3.14 / 180) * MULL + 35);
	for (int i = 268; i <= 315; i += 10)
	{
		glVertex2i(sin(i * 3.14 / 180) * 70 + 52, cos(i * 3.14 / 180) * 70);
	}
	glEnd();
	glPopMatrix();
}

void bodyLoser::drawBodyFrame154(int align) {
	glPushMatrix();
	glTranslated(bias - 10, 228, 0);
	glRotatef(align, 0.0f, 0.0f, 1.0f);
	glBegin(GL_POLYGON);
	int TRIG_ARG = 50;
	int MULL = 18;
	for (int i = 90; i <= 270; i += 10)
	{
		glVertex2i(sin(i * 3.14 / 180) * 18, cos(i * 3.14 / 180) * 18);
	}
	glVertex2i(-16, 5);
	glVertex2i(-14, 10);
	glVertex2i(-13, 15);
	glVertex2i(-14, 20);
	glVertex2i(-15, 25);

	for (int i = 270; i <= 450; i += 10)
	{
		glVertex2i(sin(i * 3.14 / 180) * 18, cos(i * 3.14 / 180) * 18 + 30);
	}
	glVertex2i(18, 25);
	glVertex2i(19, 20);
	glVertex2i(19, 15);
	glVertex2i(19, 10);
	glVertex2i(18, 5);
	glEnd();
	glPopMatrix();
}

void bodyLoser::drawBodyFrame160(int align) {
	glPushMatrix();
	glTranslated(bias - 10, 228, 0);
	glRotatef(align, 0.0f, 0.0f, 1.0f);
	glBegin(GL_POLYGON);
	int TRIG_ARG = 50;
	int MULL = 18;
	for (int i = 90; i <= 270; i += 10)
	{
		glVertex2i(sin(i * 3.14 / 180) * 18, cos(i * 3.14 / 180) * 18);
	}
	glVertex2i(-18, 5);
	glVertex2i(-17, 15);
	glVertex2i(-16, 25);
	glVertex2i(-14, 35);
	glVertex2i(-12, 40);
	glVertex2i(-11, 45);
	glVertex2i(13, 45);
	glVertex2i(14, 40);
	glVertex2i(14, 35);
	glVertex2i(16, 25);
	glVertex2i(16, 15);
	glVertex2i(17, 5);
	glEnd();
	glPopMatrix();
}

void bodyLoser::drawBodyFrame166(int align) {
	glPushMatrix();
	glTranslated(bias - 10, 169, 0);
	glRotatef(align, 0.0f, 0.0f, 1.0f);
	glBegin(GL_POLYGON);
	for (int i = 180; i <= 360; i += 10)
	{
		glVertex2i(sin(i * 3.14 / 180) * 17 + 70, cos(i * 3.14 / 180) * 17);
	}

	glVertex2i(80, 17);
	glVertex2i(90, 17);
	glVertex2i(100, 16);
	glVertex2i(110, 15);
	glVertex2i(120, 14);

	glVertex2i(120, -10);
	glVertex2i(115, -14);
	glVertex2i(110, -16);
	glVertex2i(100, -16);
	glVertex2i(80, -17);
	glVertex2i(70, -16);
	glEnd();
	glPopMatrix();
}

void bodyLoser::drawBodyFrame167()
{
	glPushMatrix();
	glTranslated(bias - 10, 160, 0);
	glBegin(GL_POLYGON);
	for (int i = 150; i <= 360; i += 10)
	{
		glVertex2i(sin(i * 3.14 / 180) * 18 + 70, cos(i * 3.14 / 180) * 18);
	}

	glVertex2i(80, 18);
	glVertex2i(90, 18);
	glVertex2i(100, 17);
	glVertex2i(110, 16);
	glVertex2i(120, 15);
	glVertex2i(120, -10);
	glEnd();
	glPopMatrix();
}
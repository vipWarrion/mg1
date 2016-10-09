#include "legsLoser.h"

legsLoser::legsLoser(int bias, int frame_id)
{
	this->bias = bias;
	this->frame_id = frame_id;
}


legsLoser::~legsLoser()
{
}


void legsLoser::drawLegs()
{
	glPushMatrix();
	switch (frame_id)
	{
	case 0:
	case 4:
	case 8:
		drawLegsFrame0();
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
	case 18:
	case 19:
	case 20:
	case 21:
	case 22:
	case 23:
	case 24:
	case 25:
	case 26:
	case 27:
		drawLegsFrame1();
		break;
	case 28:
		glTranslated(10, 0, 0);
		drawLegsFrame28();
		break;
	case 29:
		glTranslated(20, 0, 0);
		drawLegsFrame1();
		break;
	case 30:
		glTranslated(30, 0, 0);
		drawLegsFrame28();
		break;
	case 31:
		glTranslated(40, 0, 0);
		drawLegsFrame1();
		break;
	case 32:
		glTranslated(50, 0, 0);
		drawLegsFrame28();
		break;
	case 33:
		glTranslated(60, 0, 0);
		drawLegsFrame1();
		break;
	case 34:
		glTranslated(70, 0, 0);
		drawLegsFrame28();
		break;
	case 35:
	case 36:
	case 37:
	case 38:
	case 39:
	case 40:
	case 41:
	case 42:
	case 43:
	case 44:
	case 45:
	case 46:
	case 47:
	case 48:
	case 49:
	case 50:
	case 51:
	case 52:
	case 53:
	case 54:
	case 55:
		glTranslated(80, 0, 0);
		drawLegsFrame1();
		break;
	case 56:
	case 58:
	case 59:
		glTranslated(80, 0, 0);
		drawLegsFrame1();
		break;
	case 57:
	case 62:
		glTranslated(80, 0, 0);
		drawLegsFrame0();
		break;
	case 60:
		glTranslated(80, 0, 0);
		drawLegsFrame60();
		break;
	case 61:
		glTranslated(85, 0, 0);
		drawLegsFrame61();
		break;
	case 63:
		glTranslated(85, 0, 0);
		drawLegsFrame63();
		break;
	case 64:
		glTranslated(80, 0, 0);
		drawLegsFrame64();
		break;
	case 65:
		glTranslated(75, 0, 0);
		drawLegsFrame65();
		break;
	case 66:
		glTranslated(75, 0, 0);
		drawLegsFrame66();
		break;
	case 67:
		glTranslated(75, 0, 0);
		drawLegsFrame67();
		break;
	case 68:
		glTranslated(75, 0, 0);
		drawLegsFrame68();
		break;
	case 69:
		glTranslated(75, 0, 0);
		drawLegsFrame69();
		break;
	case 70:
		glTranslated(75, 0, 0);
		drawLegsFrame70();
		break;
	case 71:
		glTranslated(80, 0, 0);
		drawLegsFrame68();
		break;
	case 2:
	case 6:
	case 10:
		drawLegsFrame2();
		break;

	case 148:
	case 154:
		glTranslated(10, -5, 0);
		drawLegsFrame154();
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
		glTranslated(10, -5, 0);
		drawLegsFrame160(3);
		break;
	case 158:
	case 160:
		drawLegsFrame160(0);
		break;
	case 161:
		drawLegsFrame161();
		break;
	case 162:
		drawLegsFrame162();
		break;
	case 163:
		drawLegsFrame163();
		break;
	case 164:
		drawLegsFrame164();
		break;
	case 165:
		glTranslated(0, -5, 0);
		drawLegsFrame166();
		break;
	case 166:
		drawLegsFrame166();
		break;
	case 167:
		drawLegsFrame167();
		break;

	default:
		drawLegsFrame0();
		break;
	}
	glPopMatrix();
}

void legsLoser::drawLegsFrame0()
{
	glPushMatrix();

	glLineWidth(4);
	glTranslated(bias, 150, 0);
	glPushMatrix();
	glBegin(GL_LINE_STRIP);
	glVertex2i(20, 0);
	glVertex2i(19, 5);
	glVertex2i(18, 10);
	glVertex2i(17, 15);
	glVertex2i(14, 20);
	glVertex2i(9, 30);
	glVertex2i(0, 40);
	glEnd();
	glPopMatrix();

	glPushMatrix();
	glTranslated(-40, 0, 0);
	glBegin(GL_LINE_STRIP);
	glVertex2i(0, 0);
	glVertex2i(2, 5);
	glVertex2i(4, 15);
	glVertex2i(11, 30);
	glVertex2i(20, 40);
	glEnd();
	glPopMatrix();
	glLineWidth(1);

	glPopMatrix();
}

void legsLoser::drawLegsFrame1()
{
	glPushMatrix();

	glLineWidth(4);
	glTranslated(bias, 150, 0);
	glPushMatrix();
	glBegin(GL_LINE_STRIP);
	glVertex2i(20, 0);
	glVertex2i(20, 6);
	glVertex2i(19, 10);
	glVertex2i(19, 15);
	glVertex2i(14, 20);
	glVertex2i(9, 27);
	glVertex2i(0, 35);
	glEnd();
	glPopMatrix();

	glPushMatrix();
	glTranslated(-40, 0, 0);
	glBegin(GL_LINE_STRIP);
	glVertex2i(1, 0);
	glVertex2i(2, 5);
	glVertex2i(2, 15);
	glVertex2i(11, 27);
	glVertex2i(20, 35);
	glEnd();
	glPopMatrix();
	glLineWidth(1);

	glPopMatrix();
}

void legsLoser::drawLegsFrame2()
{
	glPushMatrix();

	glLineWidth(4);
	glTranslated(bias, 150, 0);
	glPushMatrix();
	glBegin(GL_LINE_STRIP);
	glVertex2i(20, 0);
	glVertex2i(20, 6);
	glVertex2i(19, 10);
	glVertex2i(19, 15);
	glVertex2i(14, 20);
	glVertex2i(9, 25);
	glVertex2i(0, 30);
	glEnd();
	glPopMatrix();

	glPushMatrix();
	glTranslated(-40, 0, 0);
	glBegin(GL_LINE_STRIP);
	glVertex2i(1, 0);
	glVertex2i(2, 5);
	glVertex2i(2, 15);
	glVertex2i(11, 25);
	glVertex2i(20, 30);
	glEnd();
	glPopMatrix();
	glLineWidth(1);

	glPopMatrix();
}

void legsLoser::drawLegsFrame28()
{
	glPushMatrix();

	glLineWidth(4);
	glTranslated(bias, 150, 0);
	glPushMatrix();
	glBegin(GL_LINE_STRIP);
	glVertex2i(20, 0);
	glVertex2i(20, 6);
	glVertex2i(19, 10);
	glVertex2i(19, 15);
	glVertex2i(14, 20);
	glVertex2i(10, 24);
	glVertex2i(0, 33);
	glEnd();
	glPopMatrix();

	glPushMatrix();
	glTranslated(-40, 0, 0);
	glBegin(GL_LINE_STRIP);
	glVertex2i(-10, 0);
	glVertex2i(-5, 5);
	glVertex2i(2, 15);
	glVertex2i(11, 25);
	glVertex2i(20, 30);
	glEnd();
	glPopMatrix();
	glLineWidth(1);

	glPopMatrix();
}

void legsLoser::drawLegsFrame60()
{
	glPushMatrix();

	glLineWidth(4);
	glTranslated(bias, 150, 0);
	glPushMatrix();
	glBegin(GL_LINE_STRIP);
	glVertex2i(20, 0);
	glVertex2i(20, 6);
	glVertex2i(20, 16);
	glVertex2i(18, 23);
	glVertex2i(14, 25);
	glVertex2i(9, 29);
	glVertex2i(0, 35);
	glEnd();
	glPopMatrix();

	glPushMatrix();
	glTranslated(-40, 0, 0);
	glBegin(GL_LINE_STRIP);
	glVertex2i(1, 0);
	glVertex2i(2, 5);
	glVertex2i(2, 15);
	glVertex2i(11, 27);
	glVertex2i(20, 35);
	glEnd();
	glPopMatrix();
	glLineWidth(1);

	glPopMatrix();
}

void legsLoser::drawLegsFrame61()
{
	glPushMatrix();

	glLineWidth(4);
	glTranslated(bias, 150, 0);
	glPushMatrix();
	glBegin(GL_LINE_STRIP);
	glVertex2i(20, 0);
	glVertex2i(20, 6);
	glVertex2i(20, 16);
	glVertex2i(18, 23);
	glVertex2i(14, 25);
	glVertex2i(9, 29);
	glVertex2i(0, 35);
	glEnd();
	glPopMatrix();

	glPushMatrix();
	glTranslated(-40, 0, 0);
	glBegin(GL_LINE_STRIP);
	glVertex2i(-6, 0);
	glVertex2i(-4, 5);
	glVertex2i(2, 15);
	glVertex2i(11, 27);
	glVertex2i(20, 35);
	glEnd();
	glPopMatrix();
	glLineWidth(1);

	glPopMatrix();
}

void legsLoser::drawLegsFrame63()
{
	glPushMatrix();

	glLineWidth(4);
	glTranslated(bias, 150, 0);
	glPushMatrix();
	glBegin(GL_LINE_STRIP);
	glVertex2i(32, 5);
	glVertex2i(26, 14);
	glVertex2i(23, 17);
	glVertex2i(18, 23);
	glVertex2i(10, 32);
	glVertex2i(0, 40);
	glEnd();
	glPopMatrix();

	glPushMatrix();
	glTranslated(-40, 0, 0);
	glBegin(GL_LINE_STRIP);
	glVertex2i(0, 0);
	glVertex2i(2, 5);
	glVertex2i(4, 15);
	glVertex2i(11, 30);
	glVertex2i(20, 40);
	glEnd();
	glPopMatrix();
	glLineWidth(1);

	glPopMatrix();
}

void legsLoser::drawLegsFrame64()
{
	glPushMatrix();

	glLineWidth(4);
	glTranslated(bias, 150, 0);
	glPushMatrix();
	glBegin(GL_LINE_STRIP);
	glVertex2i(22, 5);
	glVertex2i(20, 14);
	glVertex2i(19, 17);
	glVertex2i(18, 26);
	glVertex2i(10, 32);
	glVertex2i(0, 40);
	glEnd();
	glPopMatrix();

	glPushMatrix();
	glTranslated(-40, 0, 0);
	glBegin(GL_LINE_STRIP);
	glVertex2i(0, 0);
	glVertex2i(2, 5);
	glVertex2i(4, 15);
	glVertex2i(11, 30);
	glVertex2i(20, 40);
	glEnd();
	glPopMatrix();
	glLineWidth(1);

	glPopMatrix();
}

void legsLoser::drawLegsFrame65()
{
	glPushMatrix();

	glLineWidth(4);
	glTranslated(bias, 150, 0);
	glPushMatrix();
	glBegin(GL_LINE_STRIP);
	glVertex2i(22, 17);
	glVertex2i(20, 34);
	glVertex2i(19, 43);
	glVertex2i(18, 45);
	glVertex2i(10, 43);
	glVertex2i(0, 40);
	glEnd();
	glPopMatrix();

	glPushMatrix();
	glTranslated(-40, 0, 0);
	glBegin(GL_LINE_STRIP);
	glVertex2i(0, 0);
	glVertex2i(2, 5);
	glVertex2i(6, 15);
	glVertex2i(11, 30);
	glVertex2i(20, 40);
	glEnd();
	glPopMatrix();
	glLineWidth(1);

	glPopMatrix();
}

void legsLoser::drawLegsFrame66()
{
	glPushMatrix();

	glLineWidth(4);
	glTranslated(bias, 150, 0);
	glPushMatrix();
	glBegin(GL_LINE_STRIP);
	glVertex2i(22, 23);
	glVertex2i(20, 38);
	glVertex2i(19, 46);
	glVertex2i(18, 50);
	glVertex2i(10, 45);
	glVertex2i(0, 40);
	glEnd();
	glPopMatrix();

	glPushMatrix();
	glTranslated(-40, 0, 0);
	glBegin(GL_LINE_STRIP);
	glVertex2i(6, 0);
	glVertex2i(8, 5);
	glVertex2i(14, 15);
	glVertex2i(12, 30);
	glVertex2i(13, 40);
	glEnd();
	glPopMatrix();
	glLineWidth(1);

	glPopMatrix();
}

void legsLoser::drawLegsFrame67()
{
	glPushMatrix();

	glLineWidth(4);
	glTranslated(bias, 150, 0);
	glPushMatrix();
	glBegin(GL_LINE_STRIP);
	glVertex2i(6, 23);
	glVertex2i(4, 38);
	glVertex2i(2, 48);
	glEnd();
	glPopMatrix();

	glPushMatrix();
	glTranslated(-40, 0, 0);
	glBegin(GL_LINE_STRIP);
	glVertex2i(7, 0);
	glVertex2i(8, 5);
	glVertex2i(9, 15);
	glVertex2i(11, 30);
	glVertex2i(12, 40);
	glEnd();
	glPopMatrix();
	glLineWidth(1);

	glPopMatrix();
}

void legsLoser::drawLegsFrame68()
{
	glPushMatrix();

	glLineWidth(4);
	glTranslated(bias, 150, 0);
	glPushMatrix();
	glBegin(GL_LINE_STRIP);
	glVertex2i(4, 23);
	glVertex2i(3, 38);
	glVertex2i(1, 48);
	glEnd();
	glPopMatrix();

	glPushMatrix();
	glTranslated(-40, 0, 0);
	glBegin(GL_LINE_STRIP);
	glVertex2i(9, 0);
	glVertex2i(8, 5);
	glVertex2i(6, 15);
	glVertex2i(10, 30);
	glVertex2i(12, 40);
	glEnd();
	glPopMatrix();
	glLineWidth(1);

	glPopMatrix();
}

void legsLoser::drawLegsFrame69()
{
	glPushMatrix();

	glLineWidth(4);
	glTranslated(bias, 150, 0);
	glPushMatrix();
	glBegin(GL_LINE_STRIP);
	glVertex2i(-15, 15);
	glVertex2i(-28, 38);
	glVertex2i(-30, 48);
	glEnd();
	glPopMatrix();

	glPushMatrix();
	glTranslated(-40, 0, 0);
	glBegin(GL_LINE_STRIP);
	glVertex2i(9, 0);
	glVertex2i(5, 5);
	glVertex2i(0, 15);
	glVertex2i(7, 30);
	glVertex2i(12, 40);
	glEnd();
	glPopMatrix();
	glLineWidth(1);

	glPopMatrix();
}

void legsLoser::drawLegsFrame70()
{
	glPushMatrix();

	glLineWidth(4);
	glTranslated(bias, 150, 0);
	glPushMatrix();
	glBegin(GL_LINE_STRIP);
	glVertex2i(-25, 15);
	glVertex2i(-35, 35);
	glVertex2i(-40, 50);
	glVertex2i(-40, 50);
	glVertex2i(-30, 46);
	glEnd();
	glPopMatrix();

	glPushMatrix();
	glTranslated(-40, 0, 0);
	glBegin(GL_LINE_STRIP);
	glVertex2i(9, 0);
	glVertex2i(5, 5);
	glVertex2i(0, 15);
	glVertex2i(7, 30);
	glVertex2i(12, 40);
	glEnd();
	glPopMatrix();
	glLineWidth(1);

	glPopMatrix();
}


void legsLoser::drawLegsFrame154() {
	glPushMatrix();
	glLineWidth(4);
	glTranslated(bias - 50, 170, 0);
	glBegin(GL_LINE_STRIP);
	glVertex2i(20, 29);
	glVertex2i(22, 20);
	glVertex2i(24, 11);
	glVertex2i(23, 0);
	glVertex2i(22, -8);
	glVertex2i(21, -15);
	glVertex2i(20, -21);
	glEnd();
	glBegin(GL_LINE_STRIP);
	glVertex2i(35, 30);
	glVertex2i(55, 40);
	glVertex2i(57, 38);
	glVertex2i(55, 38);
	glVertex2i(53, 16);
	glVertex2i(51, 0);
	glEnd();

	glLineWidth(1);
	glPopMatrix();
}

void legsLoser::drawLegsFrame160(int align) {
	glPushMatrix();
	glLineWidth(4);
	glRotatef(align, 0.0f, 0.0f, 1.0f);
	glTranslated(bias - 50, 170, 0);
	glBegin(GL_LINE_STRIP);
	glVertex2i(20, 29);
	glVertex2i(22, 20);
	glVertex2i(24, 11);
	glVertex2i(23, 0);
	glVertex2i(22, -8);
	glVertex2i(21, -15);
	glVertex2i(20, -21);
	glEnd();
	glBegin(GL_LINE_STRIP);
	glVertex2i(40, 30);
	glVertex2i(60, 40);
	glVertex2i(62, 38);
	glVertex2i(60, 38);
	glVertex2i(58, 16);
	glVertex2i(55, 0);
	glEnd();

	glLineWidth(1);
	glPopMatrix();
}

void legsLoser::drawLegsFrame161() {
	glPushMatrix();
	glLineWidth(4);
	glTranslated(bias - 50, 170, 0);
	glBegin(GL_LINE_STRIP);
	glVertex2i(42, 29);
	glVertex2i(39, 20);
	glVertex2i(35, 11);
	glVertex2i(30, 0);
	glVertex2i(26, -8);
	glVertex2i(23, -15);
	glVertex2i(20, -21);
	glEnd();
	glBegin(GL_LINE_STRIP);
	glVertex2i(59, 24);
	glVertex2i(69, 15);
	glVertex2i(70, 10);
	glVertex2i(69, 9);
	glVertex2i(45, 0);
	glEnd();

	glLineWidth(1);
	glPopMatrix();
}

void legsLoser::drawLegsFrame162() {
	glPushMatrix();
	glLineWidth(4);
	glTranslated(bias - 30, 170, 0);
	glBegin(GL_LINE_STRIP);
	glVertex2i(42, 29);
	glVertex2i(37, 20);
	glVertex2i(33, 11);
	glVertex2i(28, 0);
	glVertex2i(20, -8);
	glVertex2i(11, -15);
	glVertex2i(6, -21);
	glEnd();
	glBegin(GL_LINE_STRIP);
	glVertex2i(59, 24);
	glVertex2i(60, 9);
	glVertex2i(61, 0);
	glVertex2i(60, -1);
	glVertex2i(33, -15);
	glEnd();

	glLineWidth(1);
	glPopMatrix();
}

void legsLoser::drawLegsFrame163() {
	glPushMatrix();
	glLineWidth(4);
	glTranslated(bias - 17, 170, 0);
	glBegin(GL_LINE_STRIP);
	glVertex2i(59, 14);
	glVertex2i(54, 9);
	glVertex2i(48, 0);
	glVertex2i(44, -8);
	glVertex2i(33, -15);
	glVertex2i(25, -19);
	glVertex2i(20, -21);
	glEnd();
	glBegin(GL_LINE_STRIP);
	glVertex2i(42, 29);
	glVertex2i(37, 20);
	glVertex2i(33, 11);
	glVertex2i(28, 0);
	glVertex2i(20, -8);
	glVertex2i(11, -15);
	glVertex2i(6, -21);
	glEnd();
	glLineWidth(1);
	glPopMatrix();
}

void legsLoser::drawLegsFrame164() {
	glPushMatrix();
	glLineWidth(4);
	glTranslated(bias - 10, 167, 0);
	glBegin(GL_LINE_STRIP);
	glVertex2i(59, 14);
	glVertex2i(50, 10);
	glVertex2i(40, 2);
	glVertex2i(30, -5);
	glVertex2i(20, -11);
	glVertex2i(10, -15);
	glVertex2i(1, -17);
	glEnd();
	glBegin(GL_LINE_STRIP);
	glVertex2i(56, -13);
	glVertex2i(50, -14);
	glVertex2i(43, -15);
	glVertex2i(35, -11);
	glVertex2i(30, -8);
	glVertex2i(25, -4);
	glVertex2i(20, 0);
	glEnd();
	glLineWidth(1);
	glPopMatrix();
}

void legsLoser::drawLegsFrame166() {
	glPushMatrix();
	glLineWidth(4);
	glTranslated(bias - 10, 167, 0);
	glBegin(GL_LINE_STRIP);
	glVertex2i(59, 14);
	glVertex2i(50, 10);
	glVertex2i(40, 2);
	glVertex2i(30, -5);
	glVertex2i(20, -11);
	glVertex2i(10, -15);
	glVertex2i(1, -17);
	glEnd();
	glBegin(GL_LINE_STRIP);
	glVertex2i(56, -7);
	glVertex2i(50, -10);
	glVertex2i(40, -13);
	glVertex2i(30, -15);
	glVertex2i(20, -16);
	glVertex2i(10, -16);
	glVertex2i(1, -17);
	glEnd();
	glLineWidth(1);
	glPopMatrix();
}

void legsLoser::drawLegsFrame167() {
	glPushMatrix();
	glLineWidth(4);
	glTranslated(bias - 10, 160, 0);
	glBegin(GL_LINE_STRIP);
	glVertex2i(59, 13);
	glVertex2i(50, 10);
	glVertex2i(40, 2);
	glVertex2i(30, -5);
	glVertex2i(20, -8);
	glVertex2i(10, -10);
	glVertex2i(0, -10);
	glEnd();
	glLineWidth(1);
	glPopMatrix();
}
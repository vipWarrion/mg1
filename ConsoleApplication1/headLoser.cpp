#include "headLoser.h"



headLoser::headLoser(int bias, int frame_id)
{
	this->bias = bias;
	this->frame_id = frame_id;
}


headLoser::~headLoser()
{
}

void headLoser::drawHead()
{
	glPushMatrix();
	switch (frame_id)
	{
	case 0:
	case 4:
	case 8:
		drawHeadFrame0(0);
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
		drawHeadFrame0(0);
		break;
	case 28:
		glTranslated(28, -9, 0);
		drawHeadFrame0(0);
		break;
	case 18:
	case 19:
	case 20:
	case 21:
		glTranslated(0, -8, 0);
		drawHeadFrame0(0);
		break;
	case 2:
	case 6:
	case 10:
		glTranslated(0, -11, 0);
		drawHeadFrame0(0);
		break;
	case 29:
		glTranslated(20, -7, 0);
		drawHeadFrame0(0);
		break;
	case 30:
		glTranslated(48, -9, 0);
		drawHeadFrame0(0);
		break;
	case 31:
		glTranslated(40, -7, 0);
		drawHeadFrame0(0);
		break;
	case 32:
		glTranslated(68, -9, 0);
		drawHeadFrame0(0);
		break;
	case 33:
		glTranslated(60, -7, 0);
		drawHeadFrame0(0);
		break;
	case 34:
		glTranslated(88, -9, 0);
		drawHeadFrame0(0);
		break;
	case 35:
		glTranslated(80, -7, 0);
		drawHeadFrame0(0);
		break;
	case 36:
	case 37:
	case 40:
	case 41:
	case 44:
	case 45:
	case 48:
	case 49:
		glTranslated(66, 0, 0);
		drawHeadFrame0(0);
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
		glTranslated(69, 0, 0);
		drawHeadFrame0(0);
		break;
	case 53:
		glTranslated(89, -3, 0);
		drawHeadFrame0(0);
		break;
	case 54:
		glTranslated(110, -17, 0);
		drawHeadFrame0(-30);
		break;
	case 55:
		glTranslated(77, 0, 0);
		drawHeadFrame0(0);
		break;
	case 56:
	case 58:
	case 59:
	case 62:
		glTranslated(70, 1, 0);
		drawHeadFrame0(0);
		break;
	case 57:
		glTranslated(72, 4, 0);
		drawHeadFrame0(0);
		break;
	case 60:
		glTranslated(70, -1, 0);
		drawHeadFrame0(0);
		break;
	case 61:
		glTranslated(82, -2, 0);
		drawHeadFrame0(0);
		break;
	case 63:
		glTranslated(58, 0, 0);
		drawHeadFrame0(10);
		break;
	case 64:
		glTranslated(51, 4, 0);
		drawHeadFrame0(5);
		break;
	case 65:
	case 66:
	case 67:
	case 68:
	case 69:
	case 70:
		glTranslated(59, 6, 0);
		drawHeadFrame0(0);
		break;
	case 71:
		glTranslated(64, 11, 0);
		drawHeadFrame0(0);
		break;
	case 72:
		glTranslated(64, 14, 0);
		drawHeadFrame0(0);
		break;

	case 148:
		glTranslated(-10, 5, 0);
		drawHeadFrame0(0);
		break;
	case 154:
		glTranslated(-19, 10, 0);
		drawHeadFrame0(0);
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

	case 158:
	case 160:
		glTranslated(-22, 10, 0);
		drawHeadFrame0(0);
		break;
	case 161:
		glTranslated(20, 17, 0);
		drawHeadFrame0(0);
		break;
	case 162:
		glTranslated(52, 17, 0);
		drawHeadFrame0(0);
		break;
	case 163:
		glTranslated(79, -2, 0);
		drawHeadFrame0(0);
		break;
	case 164:
		glTranslated(105, -48, 0);
		drawHeadFrame0(0);
		break;
	case 165:
	case 166:
		glTranslated(118, -81, 0);
		drawHeadFrame0(0);
		break;
	case 167:
		glTranslated(118, -87, 0);
		drawHeadFrame0(0);
		break;

	default:
		drawHeadFrame0(0);
		break;
	}
	glPopMatrix();
}

void headLoser::drawHeadFrame0(int angle)
{
	glPushMatrix();
	glTranslated(bias + 4, 249, 0);
	glRotatef(angle, 0.0f, 0.0f, 1.0f);
	glBegin(GL_POLYGON);
	for (int i = 0; i < 360; i += 10)
	{
		glVertex2i(sin(i * 3.14 / 180) * 18, cos(i * 3.14 / 180) * 20);
	}
	glEnd();
	glPopMatrix();
}
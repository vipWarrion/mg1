#include "loser.h"

loser::loser()
{
}

loser::~loser()
{
}

void loser::draw(int bias, int frame_id)
{
	headLoser  *head = new headLoser(bias, frame_id);
	bodyLoser  *body = new bodyLoser(bias, frame_id);
	legsLoser  *legs = new legsLoser(bias, frame_id);
	rightArmLoser  *rightArm = new rightArmLoser(bias, frame_id);
	leftArmLoser  *leftArm = new leftArmLoser(bias, frame_id);
	this->bias = bias;
	this->frame_id = frame_id;

	glPushMatrix();
	legs->drawLegs();

	body->drawBody();
	head->drawHead();
	glPolygonMode(GL_FRONT_AND_BACK, GL_LINE);
	body->drawBody();
	head->drawHead();
	glPolygonMode(GL_FRONT_AND_BACK, GL_FILL);


	glPushMatrix();
	glLineWidth(4);
	rightArm->drawRightArm();
	leftArm->drawLeftArm();

	glLineWidth(1);
	glPopMatrix();
	drawSword();
	glPopMatrix();
}

void loser::drawSword() {
	glPushMatrix();
	switch (frame_id)
	{
	case 18:
	case 19:
	case 20:
	case 21:
	case 22:
		drawSwordFrame(200, 203, 80, 0);
		break;
	case 23:
		drawSwordFrame(200, 203, 80, 1);
		glColor3f(1, 0.2, 0.2);
		glPushMatrix();
		glPointSize(5);
		glBegin(GL_POINTS);
		glVertex2i(235, 220);
		glVertex2i(235, 200);
		glVertex2i(228, 195);
		glEnd();
		glPointSize(1);
		glPopMatrix();
		glColor3f(0.4, 0.4, 0.4);
		break;
	case 24:
		drawSwordFrame(200, 203, 80, 2);
		glColor3f(1, 0.2, 0.2);
		glPushMatrix();
		glPointSize(5);
		glBegin(GL_POINTS);
		glVertex2i(230, 230);
		glVertex2i(240, 190);
		glVertex2i(220, 185);
		glEnd();
		glPointSize(1);
		glPopMatrix();
		glColor3f(0.4, 0.4, 0.4);
		break;
	case 25:
		drawSwordFrame(200, 203, 80, 3);
		glColor3f(1, 0.2, 0.2);
		glPushMatrix();
		glPointSize(4);
		glBegin(GL_POINTS);
		glVertex2i(220, 175);
		glEnd();
		glPointSize(1);
		glPopMatrix();
		glColor3f(0.4, 0.4, 0.4);
		break;
	case 26:
		drawSwordFrame(200, 203, 80, 3);
		glColor3f(1, 0.2, 0.2);
		glPushMatrix();
		glPointSize(4);
		glBegin(GL_POINTS);
		glVertex2i(220, 155);
		glEnd();
		glPointSize(1);
		glPopMatrix();
		glColor3f(0.4, 0.4, 0.4);
		break;
	case 27:
		drawSwordFrame(200, 203, 80, 3);
		break;
	case 28:
		glTranslated(10, 0, 0);
		drawSwordFrame(207, 217, 95, 3);
		break;
	case 29:
		glTranslated(20, 0, 0);
		drawSwordFrame(200, 203, 80, 3);
		break;
	case 30:
		glTranslated(30, 0, 0);
		drawSwordFrame(207, 217, 85, 3);
		break;
	case 31:
		glTranslated(40, 0, 0);
		drawSwordFrame(200, 203, 80, 3);
		break;
	case 32:
		glTranslated(50, 0, 0);
		drawSwordFrame(207, 217, 95, 3);
		break;
	case 33:
		glTranslated(60, 0, 0);
		drawSwordFrame(200, 203, 80, 3);
		break;
	case 34:
		glTranslated(70, 0, 0);
		drawSwordFrame(207, 217, 85, 3);
		break;
	case 35:
		glTranslated(80, 0, 0);
		drawSwordFrame(200, 203, 80, 3);
		break;
	case 36:
	case 44:
		glTranslated(80, 0, 0);
		drawSwordFrame(148, 175, 195, 3);
		drawAnimationSword1(155, 178, 150, 195);
		break;
	case 37:
	case 45:
		glTranslated(80, 0, 0);
		drawSwordFrame(148, 175, 195, 3);
		break;
	case 38:
	case 46:
		drawSwordFrame(232, 250, -35, 3);
		drawAnimationSword1(231, 250, -90, -35);
		break;
	case 39:
	case 47:
		drawSwordFrame(232, 250, -35, 3);
		break;
	case 40:
	case 48:
		glTranslated(80, 0, 0);
		drawSwordFrame(192, 197, 135, 3);
		drawAnimationSword1(195, 197, 100, 135);
		break;
	case 41:
	case 49:
		glTranslated(80, 0, 0);
		drawSwordFrame(192, 197, 135, 3);
		break;
	case 42:
	case 50:
		drawSwordFrame(275, 238, 25, 3);
		drawAnimationSword1(280, 235, 22, 57);
		break;
	case 43:
	case 51:
	case 52:
		drawSwordFrame(275, 238, 25, 3);
		break;
	case 53:
		drawSwordFrame(289, 235, 20, 3);
		break;
	case 54:
		drawSwordFrame(300, 206, 60, 3);
		break;
	case 55:
		drawSwordFrame(282, 238, 75, 3);
		break;
	case 56:
		drawSwordFrame(270, 270, 105, 3);
		break;
	case 57:
		drawSwordFrame(270, 340, 130, 3);
		break;
	case 58:
		drawSwordFrame(275, 390, 170, 3);
		break;
	case 59:
		drawSwordFrame(290, 440, 195, 3);
		break;
	case 60:
		drawSwordFrame(290, 460, 240, 3);
		break;
	case 61:
		drawSwordFrame(295, 470, 270, 3);
		break;
	case 62:
		drawSwordFrame(300, 473, 315, 3);
		break;
	case 63:
		drawSwordFrame(307, 475, 345, 3);
		break;
	case 64:
		drawSwordFrame(310, 475, 15, 3);
		break;
	case 65:
		drawSwordFrame(310, 477, 55, 3);
		break;
	case 66:
		drawSwordFrame(310, 480, 90, 3);
		break;
	case 67:
		drawSwordFrame(315, 480, 130, 3);
		break;
	case 68:
		drawSwordFrame(315, 478, 170, 3);
		break;
	case 69:
		drawSwordFrame(305, 475, 195, 3);
		break;
	case 70:
		drawSwordFrame(310, 470, 240, 3);
		break;
	case 71:
		drawSwordFrame(315, 460, 270, 3);
		break;
	case 72:
		drawSwordFrame(315, 440, 315, 3);
		break;
	case 73:
		drawSwordFrame(310, 420, 345, 3);
		break;
	case 74:
		drawSwordFrame(305, 380, 15, 3);
		break;
	case 75:
		drawSwordFrame(305, 300, 55, 3);
		break;
	case 76:
		drawSwordFrame(315, 220, 90, 3);
		break;

	case 148:
		drawSwordFrame(95, 280, 86, 3);
		drawEffectSwordFrame148();
		break;

	case 154:
		drawEffectSwordFrame154();
		drawSwordFrame(80, 280, 80, 3);
		break;
	case 155:
		drawEffectSwordFrame155();
		drawSwordFrame(80, 280, 84, 3);
		break;
	case 156:
		drawEffectSwordFrame156();
		drawSwordFrame(80, 280, 84, 3);
		break;
	case 152:
		drawSwordFrame(80, 280, 84, 3);
		drawEffectSwordFrame152();
		break;
	case 151:
		drawSwordFrame(80, 280, 84, 3);
		drawEffectSwordFrame151();
		break;
	case 150:
		drawSwordFrame(80, 280, 84, 3);
		drawEffectSwordFrame150();
		break;
	case 149:
		drawSwordFrame(80, 280, 84, 3);
		drawEffectSwordFrame149();
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



	case 153:
	case 157:
	case 159:
		drawSwordFrame(80, 280, 84, 3);
		break;
	case 158:
	case 160:
		drawSwordFrame(80, 280, 80, 3);
		break;
	case 161:
		drawSwordFrame(120, 285, 80, 3);
		break;
	case 162:
		drawSwordFrame(160, 285, 70, 3);
		break;
	case 163:
		drawSwordFrame(160, 260, 50, 3);
		break;
	case 164:
		drawSwordFrame(175, 210, 35, 3);
		break;
	case 165:
		drawSwordFrame(190, 150, 20, 3);
		break;
	case 166:
		drawSwordFrame(167, 155, 68, 3);
		break;
	case 167:
		drawSwordFrame(165, 155, 93, 3);
		break;
	default:
		break;
	}
	glPopMatrix();
}

void loser::drawSwordFrame(int x, int y, int angle, int lenght) {
	glPushMatrix();
	glLineWidth(6);
	glTranslated(x, y, 0);
	glBegin(GL_LINE_STRIP);
	glVertex2i(0, 0);
	glVertex2i(sin(angle * 3.14 / 180) * SIZE_SWORD, cos(angle * 3.14 / 180) * SIZE_SWORD);
	glEnd();
	glLineWidth(3);
	glBegin(GL_LINE_STRIP);
	glVertex2i(sin((angle + 20) * 3.14 / 180) * SIZE_SWORD * 1.1, cos((angle + 20) * 3.14 / 180) * SIZE_SWORD * 1.1);
	glVertex2i(sin((angle - 20) * 3.14 / 180) * SIZE_SWORD * 1.1, cos((angle - 20) * 3.14 / 180) * SIZE_SWORD * 1.1);
	glEnd();
	glColor3f(0.99, 0.4, 0.4);
	glLineWidth(4);
	glBegin(GL_LINE_STRIP);
	glVertex2i(sin(angle * 3.14 / 180) * SIZE_SWORD * 1.1, cos(angle * 3.14 / 180) * SIZE_SWORD * 1.1);
	glVertex2i(sin(angle * 3.14 / 180) * SIZE_SWORD * (1 + lenght), cos(angle * 3.14 / 180) * SIZE_SWORD * (1 + lenght));
	glEnd();
	glColor3f(0.4, 0.4, 0.4);
	glPopMatrix();
}

void loser::drawAnimationSword1(int x, int y, int angleSword, int animationAngle) {
	int startAngle, endAngle;
	float lenght;
	if (animationAngle > angleSword) {
		startAngle = angleSword + 3;
		endAngle = animationAngle;
	}
	else {
		startAngle = animationAngle;
		endAngle = angleSword - 3;
	}
	glPushMatrix();
	glColor3f(0.99, 0.4, 0.4);
	glLineWidth(2);
	glTranslated(x, y, 0);
	lenght = 1.3;
	while (lenght < 4) {
		glBegin(GL_LINE_STRIP);
		for (int i = startAngle; i <= endAngle; i += 5)
		{
			glVertex2i(sin(i * 3.14 / 180) * SIZE_SWORD * lenght, cos(i * 3.14 / 180) * SIZE_SWORD * lenght);
		}
		glEnd();
		lenght += 0.2;
	}
	glColor3f(0.4, 0.4, 0.4);
	glLineWidth(1);
	glPopMatrix();
}

void loser::drawEffectSwordFrame156() {
	glPushMatrix();
	glLineWidth(5);
	glTranslated(185, 160, 0);
	glBegin(GL_LINE_STRIP);
	glVertex2i(0, 0);
	glVertex2i(3, 3);
	glEnd();
	glColor3f(0.4, 0.4, 0.4);
	glPopMatrix();
}

void loser::drawEffectSwordFrame155() {
	glPushMatrix();
	glLineWidth(5);
	glTranslated(185, 160, 0);
	glBegin(GL_LINE_STRIP);
	glVertex2i(-5, 20);
	glVertex2i(-8, 23);
	glEnd();
	glBegin(GL_LINE_STRIP);
	glVertex2i(5, 10);
	glVertex2i(8, 13);
	glEnd();
	glColor3f(0.4, 0.4, 0.4);
	glPopMatrix();

}

void loser::drawEffectSwordFrame154() {
	glPushMatrix();
	glLineWidth(5);
	glTranslated(183, 170, 0);
	glBegin(GL_LINE_STRIP);
	glVertex2i(-5, 20);
	glVertex2i(-8, 23);
	glEnd();
	glBegin(GL_LINE_STRIP);
	glVertex2i(5, 10);
	glVertex2i(8, 13);
	glEnd();
	glColor3f(0.4, 0.4, 0.4);
	glPopMatrix();

}

void loser::drawEffectSwordFrame152() {
	glPushMatrix();
	glLineWidth(5);
	glTranslated(85, 160, 0);
	glBegin(GL_LINE_STRIP);
	glVertex2i(0, 0);
	glVertex2i(3, 3);
	glEnd();
	glColor3f(0.4, 0.4, 0.4);
	glPopMatrix();

}

void loser::drawEffectSwordFrame151() {
	glPushMatrix();
	glLineWidth(5);
	glTranslated(85, 160, 0);
	glBegin(GL_LINE_STRIP);
	glVertex2i(10, 20);
	glVertex2i(13, 23);
	glEnd();
	glBegin(GL_LINE_STRIP);
	glVertex2i(120, 0);
	glVertex2i(123, 3);
	glEnd();
	glColor3f(0.4, 0.4, 0.4);
	glPopMatrix();

}

void loser::drawEffectSwordFrame150() {
	glPushMatrix();
	glLineWidth(5);
	glTranslated(85, 160, 0);
	glBegin(GL_LINE_STRIP);
	glVertex2i(20, 10);
	glVertex2i(23, 13);
	glEnd();
	glBegin(GL_LINE_STRIP);
	glVertex2i(110, 30);
	glVertex2i(113, 33);
	glEnd();
	glColor3f(0.4, 0.4, 0.4);
	glPopMatrix();

}

void loser::drawEffectSwordFrame149() {
	glPushMatrix();
	glLineWidth(5);
	glTranslated(85, 160, 0);
	glBegin(GL_LINE_STRIP);
	glVertex2i(30, 20);
	glVertex2i(33, 23);
	glEnd();
	glBegin(GL_LINE_STRIP);
	glVertex2i(105, 40);
	glVertex2i(108, 43);
	glEnd();
	glBegin(GL_LINE_STRIP);
	glVertex2i(30, 55);
	glVertex2i(38, 58);
	glEnd();
	glColor3f(0.4, 0.4, 0.4);
	glPopMatrix();

}

void loser::drawEffectSwordFrame148() {
	glPushMatrix();
	glLineWidth(5);
	glTranslated(85, 160, 0);
	glBegin(GL_LINE_STRIP);
	glVertex2i(35, 25);
	glVertex2i(38, 28);
	glEnd();
	glBegin(GL_LINE_STRIP);
	glVertex2i(100, 45);
	glVertex2i(103, 48);
	glEnd();
	glBegin(GL_LINE_STRIP);
	glVertex2i(37, 60);
	glVertex2i(40, 63);
	glEnd();
	glColor3f(0.4, 0.4, 0.4);
	glPopMatrix();

}
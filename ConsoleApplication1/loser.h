#pragma once
#include "headLoser.h"
#include "bodyLoser.h"
#include "legsLoser.h"
#include "rightArmLoser.h"
#include "leftArmLoser.h"

#define SIZE_SWORD 20

class loser
{
	int bias;
	int frame_id;


	void drawSword();
	void drawSwordFrame(int x, int y, int angle, int lenght = 0);
	void drawAnimationSword1(int x, int y, int angleSword, int startAngle);
	void drawEffectSwordFrame156();
	void drawEffectSwordFrame155();
	void drawEffectSwordFrame154();
	void drawEffectSwordFrame152();
	void drawEffectSwordFrame151();
	void drawEffectSwordFrame150();
	void drawEffectSwordFrame149();
	void drawEffectSwordFrame148();
public:
	loser();
	~loser();
	void draw(int bias, int frame_id);
};


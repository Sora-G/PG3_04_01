#include "StageScene.h"

void StageScene::Initialize() {
	posX = 640;
	posY = 360;
	spd = 4;
	rad = 10;
}

void StageScene::Update(char* keys, char* preKeys) {

	//スペースキーを押した瞬間
	if (keys[DIK_SPACE] && preKeys[DIK_SPACE] == false) {
		//シーンをCLEARに変える
		sceneNo = Scene::CLEAR;
	}

	if (keys[DIK_W])
	{
		posY -= spd;
	}
	if (keys[DIK_S])
	{
		posY += spd;
	}
	if (keys[DIK_A])
	{
		posX -= spd;
	}
	if (keys[DIK_D])
	{
		posX += spd;
	}
}

void StageScene::Draw() {
	Novice::ScreenPrintf(0, 0, "Stage Scene");
	Novice::ScreenPrintf(0, 30, "Push Space");
	Novice::DrawEllipse(posX, posY, rad, rad, 0.0f, WHITE, kFillModeSolid);
}

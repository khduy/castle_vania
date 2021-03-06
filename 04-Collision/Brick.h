﻿#ifndef __BRICK_H__
#define __BRICK_H__


#include "GameObject.h" 
#include "TextureManager.h"

#define BRICK_MODEL_2 2 // Gạch màn 2, 32px
#define BRICK_MODEL_TRANSPARENT 4 // Gạch trong suốt
#define BRICK_MODEL_3_3_32 5 // Gạch loại 3, 3 ô nhỏ - 32px 
#define BRICK_MODEL_3_4_32 6 // Gạch loại 3, đủ 4 ô nhỏ - 32px 

class Brick : public GameObject
{
protected:
	int width;
	int height;
	int model;

public:
	Brick(float X, float Y, int W, int H, int Model);
	virtual void Render(Camera* camera);
	virtual void GetBoundingBox(float& l, float& t, float& r, float& b);
	int GetModel();
};


#endif
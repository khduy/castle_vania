﻿#include "TextureManager.h"

TextureManager* TextureManager::__Instance = NULL;

TextureManager* TextureManager::GetInstance()
{
	if (__Instance == NULL)
		return __Instance = new TextureManager();
	return __Instance;
}

TextureManager::TextureManager()
{
	LoadResource();
}


TextureManager::~TextureManager()
{
	SAFE_DELETE(__Instance);
}

void TextureManager::AddTexture(TAG oType, Texture* texture)
{
	_ArrTextures[oType] = texture;
}

Texture* TextureManager::GetTexture(TAG oType)
{
	return _ArrTextures[oType];
}

void TextureManager::LoadResource()
{
	// Info Board

	// Player
	AddTexture(TAG::SIMON, new Texture("Resources/simon.png", 8, 3, 24));
	AddTexture(TAG::SIMON_TRANS, new Texture("Resources/simon_trans.png", 8, 3, 24));
	AddTexture(TAG::SIMON_DEADTH, new Texture("Resources/simondeath.png"));

	/// Scene Intro
	/// 
	/// 
	//----------------------------------------------------------------------------------------------------------------------------------------------//

	/// Map 1
	/// 
	/// 
	// Map
	AddTexture(TAG::MAP1, new Texture("Resources/map/tileset_map1.png", 8, 4, 32));

	// Game object ground
	AddTexture(TAG::TRANSPARENT_BRICK, new Texture("Resources/ground/brick_transparent.png"));
	AddTexture(TAG::TEX_BRICK_MAP_2, new Texture("Resources/ground/2-2.png"));
	AddTexture(TAG::TORCH, new Texture("Resources/ground/0.png", 2, 1, 2));

	// Game items
	AddTexture(TAG::ITEMDAGGER, new Texture("Resources/item/4.png"));
	AddTexture(TAG::LARGEHEART, new Texture("Resources/item/1.png"));
	AddTexture(TAG::UPGRADEMORNINGSTAR, new Texture("Resources/item/3.png"));
	//AddTexture(objectType::BONUS, new Texture("Resources/item/2.png", 3, 1, 3));

	// Weapon
	AddTexture(TAG::DAGGER, new Texture("Resources/weapon/1.png"));
	AddTexture(TAG::MORNINGSTAR, new Texture("Resources/weapon/morningstar.png", 4, 3, 12));

	// Effect
	/*AddTexture(objectType::FIRE, new Texture("Resources/other/1.png", 4, 1, 4));
	AddTexture(objectType::HIT, new Texture("Resources/other/0.png", 2, 1, 2));
	AddTexture(objectType::EFFECT_MONEY_700, new Texture("Resources/other/effect700.png", 2, 1, 2));
	AddTexture(objectType::EFFECT_MONEY_100, new Texture("Resources/other/effect100.png", 2, 1, 2));
	AddTexture(objectType::EFFECT_MONEY_1000, new Texture("Resources/other/effect1000.png", 2, 1, 2));
	AddTexture(objectType::EFFECT_MONEY_400, new Texture("Resources/other/effect400.png", 2, 1, 2));*/
	//----------------------------------------------------------------------------------------------------------------------------------------------//

	/// Map 2
	/// 
	/// 
	//----------------------------------------------------------------------------------------------------------------------------------------------//

	// Others
	AddTexture(TAG::BBOX, new Texture("Resources/bbox.png"));
}
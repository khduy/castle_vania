#ifndef __ITEMDAGGER_H__
#define __ITEMDAGGER_H__

#include "Item.h"
#include "TextureManager.h"

#define ITEMDAGGER_TIMEDISPLAYMAX 3000
#define ITEMDAGGER_GRAVITY 0.25f
#define ITEMDAGGER_TIMEWAITMAX 300

class ItemDagger : public Item
{
public:
	ItemDagger(float X = 0, float Y = 0);
	~ItemDagger();
};

#endif
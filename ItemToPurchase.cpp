#include "ItemToPurchase.h"
#include <iostream>

void ItemToPurchase::SetName(string name)
{
	itemName = name;
}

const string ItemToPurchase::GetName()
{
	return itemName;
}

void ItemToPurchase::SetPrice(int price)
{
	itemPrice = price;
}

const int ItemToPurchase::GetPrice()
{
	return itemPrice;
}

void ItemToPurchase::SetQuantity(int quantity)
{
	itemQuantity = quantity;
}

const int ItemToPurchase::GetQuantity()
{
	return itemQuantity;
}


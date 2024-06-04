#pragma once
#include <string>

using namespace std;

//class declaration
class ItemToPurchase {
	public:
		//default constructor with initial values for private members
		ItemToPurchase() {
			itemName = "none";
			itemPrice = 0;
			itemQuantity = 0;
		}
		//method for setting name with name string as param
		void SetName(string name);
		//method for getting name - const since it should never change
		const string GetName();
		//method for setting price with price int as param
		void SetPrice(int price);
		//method for getting price - const since it should never change
		const int GetPrice();
		//method for setting quantity with quantity int as param
		void SetQuantity(int quantity);
		//method for getting quantity - const since it should never change
		const int GetQuantity();
	private:
		//string var for item name
		string itemName;
		//int var for item price
		int itemPrice;
		//int var for iitem quantity
		int itemQuantity;
};

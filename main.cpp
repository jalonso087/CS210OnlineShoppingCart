#include "ItemToPurchase.h"
#include <iostream>

/////////////////////////////////////////////////////////////////////////////////////////////
// functions below were created to avoid code redundancy when prompting for multiple items //
// if expecting > 2 items, these functions should be implemented using loops within main   //
/////////////////////////////////////////////////////////////////////////////////////////////
const string PromptItemName(int itemNum)
{
	string tempStr;

	//prompt user, get input, use object method for setting name as tempStr input
	cout << "Item " << itemNum << endl << "Enter the item name:" << endl;
	getline(cin, tempStr);

	return tempStr;
}

const int PromptItemPrice()
{
	int tempPrice;

	//prompt user, get input, use object method for setting price as tempPrice input
	cout << "Enter the item price:" << endl;
	cin >> tempPrice;

	return tempPrice;
}

const int PromptItemQuantity()
{
	int tempQty;

	//prompt user, get input, use object method for setting quantity as tempQty input
	cout << "Enter the item quantity:" << endl;
	cin >> tempQty;
	cout << endl;

	return tempQty;
}

//function for calculating item totals taking ItemToPurchase ref as param for modularity and possible future implementations
void CalcItemTotals(ItemToPurchase& item1, ItemToPurchase& item2)
{
	cout << "TOTAL COST" << endl;
	cout << item1.GetName() << " " << item1.GetQuantity() << " @ $" << item1.GetPrice() << " = " << "$" << item1.GetQuantity() * item1.GetPrice() << endl;
	cout << item2.GetName() << " " << item2.GetQuantity() << " @ $" << item2.GetPrice() << " = " << "$" << item2.GetQuantity() * item2.GetPrice() << endl;
	cout << endl;
	cout << "Total: $" << (item1.GetQuantity() * item1.GetPrice()) + (item2.GetQuantity() * item2.GetPrice()) << endl;
}

/////////////////////
///	begin main	  ///	
/////////////////////

int main()
{
	//creating item object 1 with default constructor
	ItemToPurchase item1;
	//creating item object 2 with default constructor
	ItemToPurchase item2;
	
	item1.SetName(PromptItemName(1));
	
	item1.SetPrice(PromptItemPrice());

	item1.SetQuantity(PromptItemQuantity());

	cin.ignore();

	item2.SetName(PromptItemName(2));

	item2.SetPrice(PromptItemPrice());

	item2.SetQuantity(PromptItemQuantity());

	//(3) add the cost of the two items together
	CalcItemTotals(item1, item2);

	return 0;
}
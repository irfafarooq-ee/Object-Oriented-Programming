#include <iostream>
#include "Item.h"
#include "HardwareItem.h"
#include "SoftwareItem.h"

void main()
{
	Item* it = new Item;
	HardwareItem h1;
	SoftwareItem* s = new SoftwareItem;
	it->getData();
	it->DisplayData();
	h1.getData();
	h1.DisplayData();
	s->getData();
	s->DisplayData();
	delete it;
}

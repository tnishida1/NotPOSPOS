#ifndef _REGISTERCONTROLLER_H_
#define _REGISTERCONTROLLER_H_
#include "cashierView.h"
#include "StoreInventory.h"
#include "order.h"

class registerController
{
private:
  cashierView screen;
public:
  registerController(StoreInventory *, order *);
};

#endif
#ifndef __Homework5Trial__budgetapplication__
#define __Homework5Trial__budgetapplication__

#include <stdio.h>
#include "menu.h"
#include "budget.h"


class BudgetApplication
{
public:
 
 BudgetApplication();
 bool is_running();
 void prompt_loop();
 
private:
 
 Budget budget;
 Menu menu;
 void process_menu_selection;
 
};

#endif

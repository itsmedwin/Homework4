#ifndef __Homework5Trial__menu__
#define __Homework5Trial__menu__

#include <stdio.h>

class Menu
{
public:
 
 enum MenuOption{ EXIT_PROGRAM, SHOW_BUDGET, ADD_TO_ACCOUNT, SPEND_FROM_ACCOUNT};
 Menu();
 void show_menu();
 int prompt_for_selection;
 int last_selection;

private:
 int user_selection;
 
};
#endif /* defined(__Homework5Trial__menu__) */

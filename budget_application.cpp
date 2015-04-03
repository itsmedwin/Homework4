//
//  budgetapplication.cpp
//  Homework5Trial
//
//  Created by Edwin Betancourt on 3/31/15.
//  Copyright (c) 2015 Edwin Betancourt. All rights reserved.
//

#include "menu.h"
#include "budget_application.h"
#include "budget.h"

BudgetApplication::BudgetApplication()
{
 budget.show_budget();
 
 }
 
 bool BudgetApplication::is_running()
 {
  return menu.last_selection != Menu::EXIT_PROGRAM;
 };

void BudgetApplication::prompt_loop()
{
 int user_response = -1;
 
 while(user_response != Menu::EXIT_PROGRAM)
{
 show_budget(budget);
 show_menu();
 
 user_response = process_menu_selection();
 process_menu_selection( budget, user_response);
}
};

void BudgetApplication::process_menu_selection()
{
 switch(user_response)
 {
  case EXIT_PROGRAM:
   break;
  case SHOW_BUDGET:
   cout << "\n";
   break;
  case ADD_TO_ACCOUNT:
   prompt_account_transaction( budget, user_response);
   break;
  case SPEND_FROM_ACCOUNT:
   prompt_account_transaction( budget, user_response);
   break;
  default:
   cout << "Invalid input!" << "\n";
   break;
   }
 
   };

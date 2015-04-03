#include "menu.h"
#include "budget.h"
#include "budget_application.h"
#include <iostream>

using namespace std;

Menu::Menu()
{
 
}
/*
 what does it mean to have 
 show_menu vs show_menu()
 */

void Menu::show_menu()
{
 cout << Menu::SHOW_BUDGET << ". View Budget." << "\n"
 << Menu::ADD_TO_ACCOUNT << ". Add to Account." << "\n"
 << Menu::SPEND_FROM_ACCOUNT << ". Spend from Acount." << "\n"
 << Menu::EXIT_PROGRAM << ". Exit" << "\n";
}

int Menu::prompt_for_selection()
{
 int user_response;
 cout << "Enter your selection: ";
 cin >> user_response;
  
 return user_response;
 }


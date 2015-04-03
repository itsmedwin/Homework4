//
//  budget.cpp
//  Homework5Trial
//
//  Created by Edwin Betancourt on 3/31/15.
//  Copyright (c) 2015 Edwin Betancourt. All rights reserved.
//

#include "budget_application.h"
#include "budget.h"
#include "menu.h"
#include "account.h"
#include <iostream>
#include <fstream>

using namespace std;

void show_budget();
Budget budget;

Budget::Budget()
{
 
}

void init_budget( Budget & budget)
{
 //assigning given file a variable
 string filename = "budget_file";
 int account_count = 0;
 
 ifstream file;
 file.open(filename.c_str());
 
 //error handling
 if (file.fail())
 {
  cout << "File " + filename + " Failed to open." << "\n";
  return;
 }
 //gathering data from given file
 getline(file, budget.user_name);
 getline(file, budget.title);
 file >> account_count;
 
 //storing info in an account vector
 for (int i = 0; i < account_count; i++)
 {
  Account next_account;
  file >> next_account.id >> next_account.title >> next_account.balance;
  budget.accounts.push_back(next_account);
 }
 // closes file.
 file.close();
}


void Budget::show_budget()
{
 cout << "-------" + budget.user_name + " | " + budget.title + "--------" << "\n";
 cout << budget.accounts.size() << " Accounts:" << "\n";
 
 for (int i = 0; i< budget.accounts.size(); i++)
 {
  cout << budget.accounts[i].id << " " << budget.accounts[i].title << " "
  << fixed << setprecision(2)<< budget.accounts[i].balance << "\n";
 }
}
 
void Budget::account_transaction(<#int#>, <#double#>)
 {
  budget.account[account_id].balance += amount;
  return amount;
 
 }

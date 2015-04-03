#ifndef __Homework5Trial__budget__
#define __Homework5Trial__budget__

#include "budget_application.h"
#include <stdio.h>
#include <string>
#include <vector>

using namespace std;

class Budget
{
 
public:
 
 
 string user_name, title;
 vector <Account> accounts;
 vector<Envelope> envelopes;
 
 Budget();
 void show_budget();
 void account_transaction(int, double);
 
 
};


#endif /* defined(__Homework5Trial__budget__) */

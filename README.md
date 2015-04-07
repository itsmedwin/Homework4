# Homework4

Not too sure how to work with github just yet so I hope I uploaded the code properly, I wasnt sure how to upload it thorugh the terminal but I will look up a tutorial. But Im having the following problems with my code:

In my budget_application.cpp:

(line 30) Im tring to call show_menu() but it gives me an error.
I tried using scope resolution( Menu::show_menu() ) but it would not call the function. show_budget doesnt give me an error so Im not sure whats wrong.

(line 38) Im trying to run the process_menu_selection function. It gives me an error, stating 'redefinition of...as diferent kind of symbol', this makes me think I declared it as something other than the void type. What I tried to do to fix it was to include the header file where the function was declared first atop the .cpp file (ive made mitakes like that before and it worked) but this one just didnt seem to work. Its already declared as a void. Not to sure what else could be wrong with it.

(line 42) Im trying to run a switch statement calling the user_response variable to call the appropriate function respective to the users input. The error tells informs me that the identifier has not been declared although i passed it by value where it was declared.

(line 52 and 55) Within the switch statement im trying to call the account transaction function and passing the user_response. I tried to solving it by using scope resolution but it still does not work.



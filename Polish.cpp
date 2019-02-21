/**
* Tiffany Tran and Khadeja Khalid
* CIS 22C, Lab 3
*/

#include "Stack.h"
#include <iostream>
#include <sstream>
#include <cstdlib>
#include <cctype>
#include <string>
#include <typeinfo>

using namespace std;

int main(){

	Stack<int> s;
	Stack<int> S;
	Stack<string> o;
	string input;
	int b, a;                           // numbers to be operated on (a+b, a*b, a/b, a-b)
	bool undefined, quit = false;


	cout << "Welcome!";

	while(!quit)						// loop while the user doesn't want to quit
	{
		cout << "\n\nPlease enter an equation in Polish Notation or \"q\" to quit: ";
		getline(cin, input);

		if(input=="Q" || input=="q")
		{
			quit = true;
			break;
		}

		/******************************Sort the operations and the numbers*******************************/

		//int i = 0;			          // to check if input is an int
		string str;						  // to check if input is a string
		stringstream ss(input);

        while(ss >> str)
        {
			if(isdigit(str[0]))           // atoi to convert char to int (from c-string (array of chars))
			{
				s.push(atoi(str.c_str()));
			}
			else
			{
				//if(str == "+" || str == "-" || str == "*" || str == "/")
				o.push(str);
			}
		}



		// Reverse values of s into S
        int temp;
        while(!s.isEmpty())
        {
            temp = s.peek();
            s.pop();
            S.push(temp);
        }


        /******************* Work on operations execute appropriate command ****************************************/
        while(!o.isEmpty())
        {
                str = o.peek();
                o.pop();

                switch(str[0])
                {
                    case '+':
						a = S.peek(); //Set the top value of the number stack as a
						S.pop();      //Take it out
						b = S.peek(); //Set the top value of the number stack as b
						S.pop();      //Take it out
						S.push(a+b);  //Push onto the stack a+b
						break;

                    case '-':
						a = S.peek();
						S.pop();
						b = S.peek();
						S.pop();
						S.push(a-b);
						break;

                    case '*':
						a = S.peek();
						S.pop();
						b = S.peek();
						S.pop();
						S.push(a*b);
						break;

                    case '/':
						a = S.peek();
						S.pop();
						b = S.peek();
						S.pop();
                        if(b == 0)
                            undefined = true;
                        else
                            S.push(a/b);
                }
        }

        if(undefined)
            cout << "undefined" << endl;
        else{
            cout << "The answer is: " << S.peek() << endl;
            S.pop();
        }
    }

	cout << "\nGoodbye!\n";

	return 0;
}

/*
Welcome!

Please enter an equation in Polish Notation or "q" to quit: * 3 + 4 5
The answer is: 35


Please enter an equation in Polish Notation or "q" to quit: - * - 9 2 3 4
The answer is: 17


Please enter an equation in Polish Notation or "q" to quit: / * + 5 3 4 7
The answer is: 4


Please enter an equation in Polish Notation or "q" to quit: + 13 14
The answer is: 27


Please enter an equation in Polish Notation or "q" to quit: Q

Goodbye!
 */

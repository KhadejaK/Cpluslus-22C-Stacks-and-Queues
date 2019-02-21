/**
* Tiffany Tran and Khadeja Khalid
* CIS 22C, Lab 3
*/
/*
#include "Stack.h"
#include <iostream>

using namespace std;

int main()
{
	Stack<int> iS; 		//Containing Numbers
	Stack<int> iS2; 	//Empty int stack
	Stack<string> sS; 	//Containing letters

	cout << "*****Testing Push*****\n"
		 << "Top of the stack is on the left, bottom on right \n\n";

	cout << "Should print 1: ";
	iS.push(1);
	iS.printStack();

	cout << "Should print a: ";
	sS.push("a");
	sS.printStack();

	cout << "Should print b a: ";
	sS.push("b");
	sS.printStack();

	cout << "Should print c b a : ";
	sS.push("c");
	sS.printStack();

	cout << endl;


	cout << "*****Testing peek*****" << endl;
	cout << "Should print 1: ";
	cout << iS.peek() << endl;
	cout << "Should print c: ";
	cout << sS.peek() << endl;

	cout << endl;


	cout << "*****Testing getSize*****" << endl;
	cout << "Should print 1: ";
	cout << iS.getSize() << endl;
	cout << "Should print 3: ";
	cout << sS.getSize() << endl;

	cout << endl;


	cout << "*****Testing Pop*****" << endl;
	cout << "Should print nothing: ";
	iS.pop();
	iS.printStack();

	cout << "Should print b a: ";
	sS.pop();
	sS.printStack();

	cout << endl;


	cout << "*****Testing operator==*****" << endl;
	cout << "Should be equal: ";
	if(iS==iS2)
	      cout << "Lists are equal!\n"; //Should print this
	else
	      cout << "Lists are unequal!\n";

	cout << "Should be unequal: ";
	iS.push(1); 	//Adding value to Stack
	if(iS==iS2)
	      cout << "Lists are equal!\n";
	else
	      cout << "Lists are unequal!\n"; //Should print this

	cout << endl;


	cout << "*****Testing copy constructor*****" << endl;
	sS.push("c");
	sS.push("d");
	Stack<string> sScopy(sS);
	cout << "original: ";
	sS.printStack();
	cout << "copy: ";
	sScopy.printStack();

	cout << "After popping original: \n";
	sS.pop();
	cout << "original: ";
	sS.printStack();
	cout << "copy: ";
	sScopy.printStack();

	return 0;
}
*/
/*
*****Testing Push*****
Top of the stack is on the left, bottom on right

Should print 1: 1
Should print a: a
Should print b a: b a
Should print c b a : c b a

*****Testing peek*****
Should print 1: 1
Should print c: c

*****Testing getSize*****
Should print 1: 1
Should print 3: 3

*****Testing Pop*****
Should print nothing:
Should print b a: b a

*****Testing operator==*****
Should be equal: Lists are equal!
Should be unequal: Lists are unequal!

*****Testing copy constructor*****
original: d c b a
copy: d c b a
After popping original:
original: c b a
copy: d c b a

 */

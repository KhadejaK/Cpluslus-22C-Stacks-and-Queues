/**
* Tiffany Tran and Khadeja Khalid
* CIS 22C, Lab 3
*/
/*
#include <iostream>
#include "Queue.h"

using namespace std;

int main()
{
	Queue<int> iQ;    //Containing Numbers
	Queue<int> iQ2;   //Empty int
	Queue<string> sQ; //Containing letters

	cout << "*****Testing enqueue*****" << endl;
	cout << "Should print 1: ";
	iQ.enqueue(1);
	iQ.printQueue();
	cout << "Should print a: ";
	sQ.enqueue("a");
	sQ.printQueue();

	cout << endl;

	cout << "*****Testing getFront*****" << endl;
	cout << "Should print 1: ";
	cout << iQ.getFront() << endl;
	cout << "Should print a: ";
	cout << sQ.getFront() << endl;

	cout << endl;

	cout << "*****Testing getSize*****" << endl;
	cout << "Should print 1: ";
	cout << iQ.getSize() << endl;
	cout << "Should print 1: ";
	cout << sQ.getSize() << endl;

	cout << endl;

	cout << "*****Testing dequeue*****" << endl;
	cout << "Should print nothing: ";
	iQ.dequeue();
	iQ.printQueue();

	cout << "Should print nothing: ";
	sQ.dequeue();
	sQ.printQueue();

	cout << endl;

	cout << "*****Testing operator==*****" << endl;
	cout << "Should be equal: ";
	if(iQ==iQ2)
	      cout << "Lists are equal!\n"; //Should print this
	else
	      cout << "Lists are unequal!\n";

	cout << "Should not be equal: ";
	iQ.enqueue(1); //Adding value to Queue
	if(iQ==iQ2)
	      cout << "Lists are equal!\n";
	else
	      cout << "Lists are unequal!\n"; //Should print this

	cout << endl;

	cout << "*****Testing copy constructor*****" << endl;
	sQ.enqueue("1");
	sQ.enqueue("q");
	Queue<string> sQcopy(sQ);
	cout << "original: ";
	sQ.printQueue();
	cout << "copy: ";
	sQcopy.printQueue();

	cout << "After dequeueing original: \n";
	sQ.dequeue();
	cout << "original: ";
	sQ.printQueue();
	cout << "copy: ";
	sQcopy.printQueue();

	return 0;
}

/*

*****Testing enqueue*****
Should print 1: 1
Should print a: a

*****Testing getFront*****
Should print 1: 1
Should print a: a

*****Testing getSize*****
Should print 1: 1
Should print 1: 1

*****Testing dequeue*****
Should print nothing:
Should print nothing:

*****Testing operator==*****
Should be equal: Lists are equal!
Should not be equal: Lists are unequal!

*****Testing copy constructor*****
original: 1 q
copy: 1 q
After dequeueing original:
original: q
copy: 1 q

 */

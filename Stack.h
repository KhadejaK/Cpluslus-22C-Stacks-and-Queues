/**
* Tiffany Tran and Khadeja Khalid
* CIS 22C, Lab 3
*/


//#ifndef Stack_H_
//#define Stack_H_

#include <iostream>
#include <cstddef>
#include <assert.h>

using namespace std;

template <class stackdata>
class Stack
{
    public:
        /**constructors and destructors*/

        Stack();

        //initializes an empty stack
        //post: an empty stack created with all fields assigned default values

        Stack(const Stack &S);
        //initializes this stack to have same elements as S
        //post: a deep copy of the stack S


        ~Stack();
        //frees memory allocated to the stack
        //post: memory for stack has been freed

        /**manipulation procedures*/

        void pop();
        //removes an element from the top of the stack
        //pre: size != 0
        //post: an element has been removed from the top of the stack

        void push(stackdata data);
        //adds an element to the top of the stack
        //post: an element added to the top of the stack

        /**accessors*/


       bool operator==(const Stack &S);
       //returns whether this stack is equal to another stack S

       stackdata peek() const;
       //returns the element at the top of the stack
       //pre: size != 0

       int getSize() const;
       //returns the size of the stack

       bool isEmpty() const;
       //returns whether the stack is empty


       /**additional operations*/

       void printStack() const;
       //prints the elements in the stack each element separate by a blank space to stdout

    private:
       struct Node {
           stackdata data;
           Node* next;

           Node(stackdata d)
           {
               data = d;
               next = NULL;
           }
       };

       Node* top;
       int size;

};


template <class stackdata>
Stack<stackdata>::Stack()
{	//initializes an empty stack
	//post: an empty stack created with all fields assigned default values
	top = NULL;
	size = 0;
}


template <class stackdata>
Stack<stackdata>::Stack(const Stack &S)
//initializes this stack to have same elements as S
//post: a deep copy of the stack S
{
	if(S.isEmpty()) 				  	//If stack is empty, make an empty list
		top = NULL;
	else
	{
		Node* origTemp = S.top;							 // pointer for original list, pointing at the top
		Node* copyTemp = top = new Node(origTemp->data); // pointer for the copy list and top pointer, both pointing at a new node with the orignal list's data
													     // same as: top = new Node(origTemp->data);
													     // 			Node* copyTemp = top;
		while(origTemp->next != NULL)                    // loop while the next node is not NULL
		{
			origTemp = origTemp->next;					 // move orig list ptr to next node
			copyTemp->next = new Node(origTemp->data);	 // create new node using data from orig list node, set that as our copy list's next node
			copyTemp = copyTemp->next;					 // "catch up" copy list's pointer;
		}
	}
	size = S.size;
}

template <class stackdata>
Stack<stackdata>::~Stack()
{
	//frees memory allocated to the stack
    //post: memory for stack has been freed

	Node* b = top; 			//Goes through the list, "before"
	Node* a; 				//Pointing at new node, "after"

	while (b != NULL){
		a = b->next; 		//a = address of node after b
		delete b; 			//Removing b
		b = a; 				//Catching b up with a
	}
}

        /**manipulation procedures*/

template <class stackdata>
void Stack<stackdata>::pop()
{	//removes an element from the top of the stack
	//pre: size != 0
	//post: an element has been removed from the top of the stack

	assert (!isEmpty());		//pre: size != 0
	if(size == 1)
	{
		delete top;
		top = NULL;
	}
	else
	{
		Node* temp = top;		//Setting temp as first
		top = top->next; 		//Moving top over to next in stack
		delete temp;			//removing temp
	}
	size--;
}


template <class stackdata>
void Stack<stackdata>::push(stackdata data)
//adds an element to the top of the stack
//post: an element added to the top of the stack
{
	Node* N = new Node(data);
	if(isEmpty())
		top = N;
	else{
		N->next = top;
		top = N;
	}
	size++;
}

        /** accessors */

template <class stackdata>
bool Stack<stackdata>::operator==(const Stack &S)
{	//returns whether this stack is equal to another stack S

	if(size != S.size) 			//If the size is not the same as our parameter
		return false;

	Node* temp1 = top; 			//A ptr to top
	Node* temp2 = S.top; 		//A ptr to paramater's top
	while(temp1 != NULL) 		//If not at end of list
	{
		if(temp1->data != temp2->data) //If prt's are not same, return false
			return false;
		temp1 = temp1->next; 	//Move to next temp1 value
		temp2 = temp2->next; 	//Move to next temp2 value
	}
	return true;
}


template <class stackdata>
stackdata Stack<stackdata>::peek() const
//returns the element at the top of the stack
//pre: size != 0
{
	assert (size != 0);
	return top->data;
}

template <class stackdata>
int Stack<stackdata>::getSize() const
{
	return size;
}
//inline function definition
//returns the size of the stack

template <class stackdata>
bool Stack<stackdata>::isEmpty() const
{
	return (size == 0);
}
//returns whether the stack is empty



       /** additional operations */
template <class stackdata>
void Stack<stackdata>::printStack() const
{	//prints the elements in the stack separated by a blank space to stdout

	Node* temp = top;
	while(temp != NULL)
	{
		cout << temp->data << " "; 	//Printing data followed by a space
		temp = temp->next; 			//Move temp to next value
	}
	cout << endl;
}

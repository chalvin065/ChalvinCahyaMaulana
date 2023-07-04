#include <iostream>
#include "Stack.h"

using namespace std;

int main() {
	Stack stack1;
	
	int vals = 0;
	
	stack1.push(6);
	stack1.push(3);
	stack1.push(8);
	stack1.push(5);
	stack1.pop();
	stack1.push(7);
	
	
	cout << "top: " << stack1.top->value << endl;
	
	stack1.printAll();
	
	Stack userstack1;
	while (vals != 4) {
		
		cout << "\n----------Stack Program----------\n";
		cout << "1. Push\n";
		cout << "2. Pop\n";
		cout << "3. Print All\n";
		cout << "4. Exit\n";
		
		cout << "Input: ";
		cin >> vals;
			
		switch (vals) {
			
			case 1: {
				int val;
				cout << "Pushed Value: ";
				cin >> val;
				userstack1.push(val);
				userstack1.printAll();
				break;
			}
					
			case 2: {
				Node* tmp = userstack1.top;
				if (tmp != NULL) {
					cout << "Popped Value: " << tmp->value << std::endl;
					userstack1.pop();
				} 
				
				else {
					cout << "Stack is empty. Can't continue the process." << std::endl;
				}
				userstack1.printAll();
				break;
			}
					
			case 3:
				userstack1.printAll();
				break;
					
			case 4:
				cout << "Exiting..." << std::endl;
				break;

			default:
				cout << "Please input 1-3, and 4 if you want to exit" << std::endl;
				break;
					
		}		
	}
	
	return 0;
}

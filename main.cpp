#include <iostream>
#include "stack.h"



/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
//	stack s(10);
//	
//	for(int i = 0; i < 5; i++){
//		s.push(i);
//		
//	}
//	while (!s.isEmpty()){
//		cout << s.top() << endl; 
//		s.pop();
//	}

	stack s2(10);
	string input;
	cin >> input;
	bool unBalanced = false;
	for (int i = 0; !unBalanced && i < input.size(); i++){
		if (input[i] == '('){
			s2.push((int)input[i]);
		}
		else if (input[i] == ')'){
			if (s2.isEmpty()){
				unBalanced = true;
			}
			else{
				s2.pop();
			}
		}
	}
	if (unBalanced || !s2.isEmpty()){
		cout << "unbalanced" << endl;
	}
	else{
		cout << "balanced" << endl;
	}
	return 0;
}







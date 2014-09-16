#include <iostream>
#define null 0

using namespace std;

class stack { //array implementation
	
	private:
		int* stackArr;
		int topOfStack;		
		int N;
		
		
	public:
		stack (int n){
			stackArr = new int[n];
			topOfStack = -1;
			N = n;			
		}
		
		int size(){
			return topOfStack + 1;
		}
		bool isEmpty(){
			return (topOfStack < 0);
		}
		int top(){
			if (isEmpty()){
				return -1; //have to throw error, this is placeholder
			}
			else{
				return stackArr[topOfStack];
			}
		}
		void push(int obj){
			if (size() < N){
				topOfStack++;
				stackArr[topOfStack] = obj;
			}
		}
//		template<class T> If you used template this is how you would structure the method
//		T pop(){
//		}
		void pop(){
			if (!isEmpty()){
				stackArr[topOfStack--] = null; // = null has precedence in compiler so this is basically setting topofstack = null and then
											//decrementing the topofstack
//				stack[topOfStack] = null; same thing as above
//				topOfStack--;
			}
		}
	
	
};

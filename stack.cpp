#include <iostream>
#include <stack>
using namespace std;
int main(){
	stack<int> s;
	
	s.push(1);
	s.push(2);
	s.push(3);
	while(!s.empty()){
		printf("%d \n",s.top());
		s.pop();
		}
		cout<<"Hello World!\n";
		return 0;
	
}

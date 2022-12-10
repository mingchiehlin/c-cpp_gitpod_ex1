#include <iostream>
//#include <list>
#include <bits/stdc++.h>
using namespace std;
int main(){
	list<int> l;
	l.push_back(1);
	l.push_back(2);
	l.push_back(3);
	l.push_back(4);
	l.push_back(5);
	cout << l.back() <<endl;
	for(auto ii:l){
		printf("%d ",ii);
	}
	printf("\n");
	return 0;
}


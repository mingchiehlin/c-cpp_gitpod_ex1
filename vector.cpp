#include <iostream>  
#include<vector>  
using namespace std;
int main(){
	vector<int> v;
	int i;
	printf("size=%ld \n", v.size());
	v.push_back(1);
	v.push_back(2);
	v.push_back(3);
	v.push_back(4);
	v.push_back(5);
	
	for(i=0;i<v.size();i++){
		printf("%d",v[i]);
	}
	cout<<endl <<"Hello World! \n";
	return 0;
}

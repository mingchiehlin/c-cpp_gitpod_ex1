#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main(){
	vector<string> s_v;
	char *c;
	int i;
	s_v.push_back("hello ");
	s_v.push_back("world! ");
	printf("size=%ld\n",s_v.size());
	printf("size=%ld\n",s_v[0].size());
	printf("size=%ld\n",s_v[1].size());
	c =(char *) (&s_v[0][0]);
	for(i=0;i<s_v[0].size();i++){
		printf("%c",c[i]);
	}
	printf("\n");
	c=(char *)(&s_v[1][0]);
	for(auto ii:s_v[1]){
		printf("%c",ii);
	}
	c=(char *)(&s_v[1][0]);
	for(i=0; i<s_v[1].size();i++){
		printf("%c",*(c+i));
	}
	cout<<"\nHello World!\n";
	return 0;
}

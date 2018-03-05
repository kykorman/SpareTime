#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <vector>
using namespace std;
struct word{
	char part[50];
};
int main(){
	srand(time(NULL));
	int i=0;
	int numof=rand()%100;
	char tmp[50];
	vector<word>msg;

	while(cin>>tmp){
		msg.push_back(word());
		strcpy(msg[i].part,tmp);
		i++;
	}

	while(numof--){
		int pos1=rand()%msg.size(),pos2=rand()%msg.size();
		strcpy(tmp,msg[pos1].part);

		strcpy(msg[pos1].part,msg[pos2].part);
		strcpy(msg[pos2].part,tmp);

	}
	for(i=0;i<msg.size();i++){
		cout<<msg[i].part<<" ";
	}
	cout<<endl;
return 0;}

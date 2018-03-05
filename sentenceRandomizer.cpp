#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <vector>
#include <fstream>
using namespace std;
struct word{
	char part[50];
};
int main(int argc,char **argv){

	if(argc!=2){
		cout<<"To use this program, use "<<argv[0]<<" <file>\n";
		exit(1);
	}
	ifstream in;
	in.open(argv[1]);

	if(in==NULL){
		cout<<"Invalid file specified\n";
		exit(1);
	}
	srand(time(NULL));

	int i=0;
	int numof=rand()%100+5;//Force 5 cycles of swapping
	char tmp[50];

	vector<word>msg;

	in>>tmp;
	for(int i=0;!in.eof();i++){
		msg.push_back(word());
		strcpy(msg[i].part,tmp);
		in>>tmp;
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

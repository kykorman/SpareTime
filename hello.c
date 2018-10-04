#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc ,char *argv[]){
	int len=strlen(argv[1])+strlen(argv[2]);
	if(argc<3)
		return 0;
	if(argc==3){
		main(4,argv);
		printf("\n");
	}else if(argc<len+5){
		printf("%c", argv[1][argc-4]);
		if(len-strlen(argv[2])==argc-4)
			printf(" ");
		main(argc+1,argv);
	}

return 0;}

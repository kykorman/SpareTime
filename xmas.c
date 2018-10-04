#include <stdio.h>
#include <stdlib.h>
int main(int argc,char **argv){

	int scan=atoi(argv[1]);

	//scanf("%d",&scan);

	for(int i=0;i<scan;i++){
		for(int k=scan-i;k>0;k--){
			printf(" ");
		}
		for(int k=i;k>0;k--)
			printf("##");
		printf("#\n");
	}

	for(int q=0;q< (scan<9?scan/2:scan<20?scan/3:scan/4) ;q++){
		if(scan%2){
			for(int i=0;i<(scan)/2;i++)
				printf(" ");	
			for(int i=0;i<=scan;i++)
				printf("#");
			printf("#");
			printf("\n");
		}else{
			for(int i=0;i<scan/2;i++)
				printf(" ");	
			for(int i=0;i<=scan;i++)
				printf("#");
			printf("\n");
		}
	}
	printf("\n\n\n");

return 0;}

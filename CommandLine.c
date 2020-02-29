#include <stdio.h>

int main(int argc, char *argv[])
{

	int counter;
	printf("Program name is: %s",argv[0]);
	if(argc==1){
		printf("\nNo Extra Command Line Argument Passed Other Than Pr 			Na\n");
	}else if(argc>=2){
		printf("\nNumber Of Arguments Passed: %d\n", argc);
		printf("\n----Following Are The Command Line Arguments 			Passed--\n");
		
		for(counter = 0;counter<argc;counter++){
			printf("\nargv[%d]:%s\n",counter,argv[counter]);
		}
	}

	return 0;

}

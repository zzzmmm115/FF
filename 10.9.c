#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a=1;
	int b=1;
    for(b=1;b<=9;b++){
			for(a=1;a<b;a++){
				printf("        ");
			}
		 for(a=b;a<=9;a++){
		printf("%d*%d=%-4d" ,b,a,a*b);
	    }
	    printf("\n");
}
	
	
	return 0;
}

#include<stdio.h>
void And(){
	printf("A\tB\tOUTPUT\n");
	printf("0\t0\t0\n");
	printf("0\t1\t0\n");
	printf("1\t0\t0\n");
	printf("1\t1\t1\n");
}
void or(){
	printf("A\tB\tOUTPUT\n");
	printf("0\t0\t0\n");
	printf("0\t1\t1\n");
	printf("1\t0\t1\n");
	printf("1\t1\t1\n");
}
void not(){
	printf("A\tB\tOUTPUT\n");
	printf("0\t1\n");
	printf("1\t0\n");
}
void nor(){
	printf("A\tB\tOUTPUT\n");
	printf("0\t0\t1\n");
	printf("0\t1\t0\n");
	printf("1\t0\t0\n");
	printf("1\t1\t0\n");
}
void nand(){
	printf("A\tB\tOUTPUT\n");
	printf("0\t0\t1\n");
	printf("0\t1\t1\n");
	printf("1\t0\t1\n");
	printf("1\t1\t0\n");
}
int logic(){
	int c;
	printf("1 for and,");
	printf("2 for or,");
	printf("3 for not,");
	ptintf("4 for nor,");
	printf("5 for nand,");
	
	scanf("%d",&c);
	if(c==1){
		And();
	}
	else if(c==2){
		or();
	}
	else if(c==3){
		not();
	}
	else if(c==4){
		nor();
	}
	else if(c==5){
		nand();
	}
	int i;
	printf("for exit press 6 & to continue press any key:\n");
	scanf("%d",&i);
	if(i==6){
		return 0;
	}
	else{
		return logic();
	}
	
	void main(){
		logic();
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
}














	

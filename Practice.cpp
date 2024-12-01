#include<graphics.h>

int main(){
	
	int a = DETECT, b;
	initgraph(&a,&b,(char*)"");
	
	lineto(100,100);
	lineto(250,100);
	
	getch();
	closegraph;
	return 0;
	
	
}

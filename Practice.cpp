#include<graphics.h>

int main(){
	
	int a = DETECT, b;
	initgraph(&a,&b,(char*)"");
	
	moveto(100,100);
	lineto(100,200);
	lineto(200,200);
	line(100,100,200,200);
	
	getch();
	closegraph;
	return 0;
	
	
}

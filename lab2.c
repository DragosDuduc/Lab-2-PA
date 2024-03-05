#include <stdlib.h>
#include <stdio.h>

int i=0;

int function(int x){
    if(x<=0)
        return 0;
	x=x-2;
	i++;
	x=function(x);
	return x;
}

int main(){
	int a=30;
	while (a>0)
		a=function(a);
	printf("%d", i);
	return 0;
}


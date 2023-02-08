#include <stdio.h>

int main(){
	int a,b,c;
	int x[10];
	int d;
	int i;
	scanf("%d""%d""%d",&a,&b,&c);
	d = a*b*c;
	
	for(i=0;i<10;i++){
		x[i] = 0;
	}
	while(d>0){
		x[d%10]++;
		d/=10;
	}
	
	for(i=0; i<10;i++){
		printf("%d\n",x[i]);
	}

	return 0;
}


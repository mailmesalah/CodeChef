#include<stdio.h>

int main()
{
	
	int value;
	int limit=0,i=0;
	int values[10000];
		
	for(scanf("%d",&value);value!=42 && value<100 && value>=1;scanf("%d",&value)){
		values[limit]=value;
		limit++;
	}
	
	while(i<limit){
		printf("%d\n",values[i]);
		i++;
	}
	return 0;
}

#include<stdio.h>

int main()
{
		
	int value,count,i,n,k;
		
	scanf("%d %d",&n,&k);
	i=0;
	count=0;
	while(i<n){
		scanf("%d",&value);
		if(value%k==0)++count;
		++i;
	}
	
	printf("%d",count);
	return 0;
}

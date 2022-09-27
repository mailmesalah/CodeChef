/**
	CAO Stage 1
	Language Used : C
	07-09-13 9:54 PM
	Developed By Sely 	
*/


#include<stdio.h>

int main()
{
	int testCases=0;
	
	char grids[100][50][50];
	int rows[100];
	int cols[100];
	int k,i,j,P=2,count;
	
	scanf("%d",&testCases);	
	
	if(testCases<=100 && testCases>=1){
		k=0;
		while(k<testCases){
			scanf("%d %d",&rows[k],&cols[k]);			
			
			i=0;
			while(i<rows[k]){
				scanf("%s",&grids[k][i]);
				++i;
			}

			++k;
		}
		
	}

	k=0;
	while(k<testCases){
						
		i=P;
		count=0;
		while(i<rows[k]-P){
			j=P;
			while(j<cols[k]-P){
								
				if(grids[k][i][j]!='#'){// For L
					if(grids[k][i][j-1]=='^' && grids[k][i][j-2]=='^'){// For L
						if(grids[k][i][j+1]=='^' && grids[k][i][j+2]=='^'){// For R
							if(grids[k][i-1][j]=='^' && grids[k][i-2][j]=='^'){// For T
								if(grids[k][i][j+1]=='^' && grids[k][i][j+2]=='^'){// For L
									++count;
								}
							}
						}
					}
				}
									
				++j;
			}
		
			++i;
		}
		printf("%d\n",count);
		++k;
	}

	return 0;
}

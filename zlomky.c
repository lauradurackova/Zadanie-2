#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <limits.h>

char nasob_zlomky(int c1, int m1, int c2, int m2, int *c3, int *d3)
{
	if(c1>(INT_MAX/c2) || c1<(INT_MIN/c2) || m1>(INT_MAX/m2) || m1<(INT_MIN/m2))
	   	return NULL;
	    
	*c3=c1*c2;
	*d3=m1*m2;
	
	return EXIT_SUCCESS;
}

main()
{
	int c1,c2,m1,m2;
	int *c3,*d3;
	
	printf("zadaj citalela a menovatela prveho zlomku: ");
	scanf("%d %d",&c1,&m1);
	printf("zadaj citalela a menovatela druheho zlomku: ");
	scanf("%d %d",&c2,&m2);
	
	nasob_zlomky(c1,m1,c2,m2,&c3,&d3);
	
	printf("%d %d\n",c3,d3);
	printf("%p %p",&c3,&d3);
}

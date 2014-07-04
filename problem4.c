#include <stdio.h>
#include <string.h>
#define TRUE 1
#define FALSE 0
#define MAX 999
#define MIN 99
int isPalendrone(int);

int main()
{
	int biggest = 0;
	int i,j;
	for(i=MAX;i>MIN;--i)
		for(j=MAX;j>MIN;--j)
		{
			int sum = i*j;
			if(isPalendrone(sum))
			{
				//printf("%d * %d = %d\n",i,j,sum);
				if(sum>biggest)
					biggest = sum;
				//return 0;
			}
		}

	printf("%d\n",biggest);
return 0;
}

int isPalendrone(int value)
{
	int i;
	char strVal[10];
	memset(strVal,0,10);
	sprintf(strVal,"%d",value);
	int strLength = strlen(strVal);
	for(i=0;i<strLength/2;++i)
	{
		if(memcmp(&strVal[i],&strVal[strLength-1-i],1)!=0)
			return FALSE;	
	}
	return TRUE;
}

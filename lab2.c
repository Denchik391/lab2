#include <stdio.h>

int main()
{
	int day;
	printf("input days: ");
	scanf("%d",&day);
	
	if(day<0 || day>365)
	{
		printf("ERROR");
		return 0;
	}

}

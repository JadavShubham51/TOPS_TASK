//90structure2.c
#include<stdio.h>
struct test
{
	char name[20];
};

int main()
{
	struct test t;
	int i;
	
//	scanf("%s",&t.name);
//	printf("%s",t.name);

//	gets(t.name);
//	puts(t.name);

	for(i=0;i<3;i++)
	{
		scanf("%c",&t.name[i]);
	}
	
	for(i=0;i<3;i++)
	{
		printf("%c",t.name[i]);
	}
	
	return 0;
}

	
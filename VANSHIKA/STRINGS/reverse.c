#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void main()
{
	char a[100];
	int l=0;

	printf("input the string:");
	fgets(a,sizeof(a),stdin);
	l=strlen(a);
	printf("\n the characters of the string in reverse order are:\n");
	for(a[l]='\0'; l>=0; l--)
	{
	 printf("%c ",a[l]);
	}
	printf("\n");
	return 0;
}

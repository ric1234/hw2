#include<stdio.h>
#include<string.h>
void main()
{
	char name[20];
	char rev[20];
	printf("Enter the string:");
	gets(name);
	printf("\n");
	int len=strlen(name);
	int var=len;
	printf("%d \n", len);
	printf("%s \n", name);
	for(int i=0; i<len; i++)
		{
			rev[i]=name[var-1];
			var-=1;
		}
	rev[len]="\0";			//NULL character at the end
	printf("%s \n", rev);
}

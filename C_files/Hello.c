#include <stdio.h>
void main()
{
printf("Code starts here: \n");

unsigned char *ptr = (char*) 100;		//0x64
printf("%p \n", ptr);
printf("%x \n", *ptr);
*ptr = 0x71;					//113
printf("%x \n", *ptr);
ptr++;
printf("%x \n", *ptr);
*ptr += 17;
printf("%x \n", *ptr);
}

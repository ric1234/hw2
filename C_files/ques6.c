#include <stdio.h>
void main()
{
printf("Code starts here: \n");

unsigned char arr[8];
arr[0]=0xFE;
arr[1]=0x34;
arr[2]=0x8C;
arr[3]=0x40;
arr[4]=0x61;
arr[5]=0x28;
arr[6]=0x23;
arr[7]=0x40;
for(int i=0; i<8;i++)
	{printf("%x \t",arr[i]);
	}
printf("\n");

unsigned char *ptr=arr;

*ptr = 0xF1 & 127;
printf("%p \t", ptr);
printf("%x \n", *ptr);

ptr++;
*ptr +=17;
printf("%p \t", ptr);
printf("%x \n", *ptr);

ptr += 2;
*ptr = 15%4;
printf("%p \t", ptr);
printf("%x \n", *ptr);

ptr--;
*ptr >>= 4;
printf("%p \t", ptr);
printf("%x \n", *ptr);

ptr += 3;
*ptr = (1<<5) | (4<<2);
printf("%p \t", ptr);
printf("%x \n", *ptr);

ptr +=2;
*ptr = 22;
printf("%p \t", ptr);
printf("%x \n", *ptr);

for(int i=0; i<8;i++)
	{printf("%d   %x \n",i,arr[i]);
	}
printf("\n");	

//printf("%x", *ptr);

}

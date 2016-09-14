#include <stdio.h>
void main()
{
printf("Initial values: \n");

unsigned char arr[8];
unsigned char *poin=arr;
*poin=0xFE;
poin++;
*poin=0x34;
poin++;
*poin=0x8C;
poin++;
*poin=0x40;
poin++;
*poin=0x61;
poin++;
*poin=0x28;
poin++;
*poin=0x23;
poin++;
*poin=0x40;
poin++;
for(int i=0; i<8;i++)
	{printf("%d	%x \n",i,arr[i]);
	}
printf("\n");

unsigned char *ptr=arr;
printf("Modified values: \n");

*ptr = 0xF1 & 127;
ptr++;
*ptr +=17;
ptr += 2;
*ptr = 15%4;
ptr--;
*ptr >>= 4;
ptr += 3;
*ptr = (1<<5) | (4<<2);
ptr +=2;
*ptr = 22;
for(int i=0; i<8;i++)
	{printf("%d	%x \n",i,arr[i]);
	}
printf("\n");	
}

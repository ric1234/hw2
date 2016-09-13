#include <stdio.h>
void main()
{
printf("Code starts here: \n");
/*char i = 0;*/
char *p;
/*p=&i;*/
*p = 100;
//printf("%d \n",i);
printf("%d \n", *p);	//prints value contained in p 
/*int no;
no = (1<<5)|(4<<2);
printf("%x \n", no);
*/

}

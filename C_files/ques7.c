#include <stdio.h>
#include <stdint.h>
void main()
{
printf("On host machine: \n");
printf("Size of char is: %lu \n", sizeof(char));
printf("Size of int is: %lu \n", sizeof(int));
printf("Size of float is: %lu \n", sizeof(float));
printf("Size of double is: %lu \n", sizeof(double));
printf("Size of short is: %lu \n", sizeof(short));
printf("Size of long is: %lu \n", sizeof(long));
printf("Size of long int is: %lu \n", sizeof(long int));
printf("Size of long long is: %lu \n", sizeof(long long));
printf("Size of int8_t is: %lu \n", sizeof(int8_t));
printf("Size of uint8_t is: %lu \n", sizeof(uint8_t));
printf("Size of uint16_t is: %lu \n", sizeof(uint16_t));
printf("Size of uint32_t is: %lu \n \n", sizeof(uint32_t));
printf("Size of char* is: %lu \n", sizeof(char*));
printf("Size of int* is: %lu \n", sizeof(int*));
printf("Size of float* is: %lu \n", sizeof(float*));
printf("Size of void* is: %lu \n", sizeof(void*));
printf("Size of int8_t* is: %lu \n", sizeof(int8_t*));
printf("Size of int16_t* is: %lu \n", sizeof(int16_t*));
printf("Size of int32_t* is: %lu \n \n", sizeof(int32_t*));

}

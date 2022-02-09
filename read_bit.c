#include<stdio.h>
typedef unsigned short uint16;

uint16 read_bit(uint16 num, uint16 bit_number);

int main ()
{
    uint16 num, bit, new_num;
    printf("please enter the number and bitnumber");
    scanf("%hi %hi", &num, &bit);
    new_num= read_bit(num,bit);
    printf("the new Num is: %hi",new_num);
    
}

uint16 read_bit(uint16 num, uint16 bit_number)
{
    uint16 x=(num>>bit_number)&1;
    return x;
}

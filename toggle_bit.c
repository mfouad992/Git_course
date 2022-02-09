#include<stdio.h>
typedef unsigned short uint16;

uint16 toggle_bit(uint16 num, uint16 bit_number);

int main ()
{
    uint16 num, bit, new_num;
    printf("please enter the number and bitnumber");
    scanf("%hi %hi", &num, &bit);
    new_num= toggle_bit(num,bit);
    printf("the new Num is: %hi",new_num);
    
}

uint16 toggle_bit(uint16 num, uint16 bit_number)
{
    uint16 x=num ^((1<<bit_number));
    return x;
}


#include <stdio.h>
void Print(int value)
{
    printf("The sum is: %d\n", value);
}
int AddTiVal(int start, int end)
{
    int sum = 0;
    for(int i = start; i <= end; i++)
    {
        sum += i;
    }
    return sum;
}
int main(void)
{
    int sum = AddTiVal(1,100);
    Print(sum);
    return 0;
}
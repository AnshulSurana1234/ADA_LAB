#include <stdio.h>
 
void towers(int, char, char, char);
int gcd(int a,int b); 
int main()
{
    int num;
 
    printf("Enter the number of disks : ");
    scanf("%d", &num);
    printf("The sequence of moves involved in the Tower of Hanoi are :\n");
    towers(num, 'A', 'C', 'B');
    
    int a , b;
    printf("\nEnter two numbers:");
    scanf("%d%d",&a,&b);
    printf("GCD of %d and %d is %d ", a, b, gcd(a, b));
    return 0;
}


void towers(int num, char from, char to, char aux)
{
    if (num == 1)
    {
        printf("\n Move disk 1 from peg %c to peg %c", from, to);
        return;
    }
    towers(num - 1, from, aux, to);
    printf("\n Move disk %d from peg %c to peg %c", num, from, to);
    towers(num - 1, aux, to, from);
}


int gcd(int a, int b)
{
    if (a == 0)
       return b;
    else if (b == 0)
       return a;
    else if (a == b)
        return a;
    else if (a > b)
        return gcd(a-b, b);
    else
        return gcd(a, b-a);
}

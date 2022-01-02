#include <stdio.h>
int sum();
int x = 5; //global variable
void main()
{
    int p; //local variable

    printf("without chang global variable velue in function\n x = %d\n", x);

    p = sum();
    x = x + 1;
    printf("first time call function sum\n static variable value = %d\n global variable velue = %d\n", p,x);

    p = sum();
     x = x + 1;
    printf("second time call function sum\n static variable value = %d\n global variable velue = %d\n", p,x);

    p = sum();
     x = x + 1;
    printf("third time call function sum\n static variable value = %d\n global variable velue = %d", p,x);
}
int sum()
{
    static int a = 0; //static variable
    a = a + 1;
    x = 0;
    return a;
}
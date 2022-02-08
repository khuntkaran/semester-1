#include <stdio.h>
int sum();
int x; //global variable
void main()
{
    int p; //local variable

    p = sum();
    x = x + 1;
    printf("first time call function sum\n static variable value = %d\n global variable velue = %d\n", p, x);

    p = sum();
    x = x + 1;
    printf("second time call function sum\n static variable value = %d\n global variable velue = %d\n", p, x);

    p = sum();
    x = x + 1;
    printf("third time call function sum\n static variable value = %d\n global variable velue = %d", p, x);
}
int sum()
{
    static int a = 0; //static variable
    a = a + 1;
    x = 0;
    return a;
}
#include <stdio.h>

int calculation(int a, int b, char op);

int main()
{
    int a, b, result;
    char op;
    printf("Please enter the first number: ");
    scanf("%d",&a);
    printf("Please enter the second number: ");
    scanf ("%d",&b);
    printf("Now please choose an operator between + - * /: ");
    scanf(" %c",&op);
    result=calculation(a, b, op);
    printf("The result is: %d", result);
}

int calculation(int a, int b, char op){
    switch (op) {
        case '+': return a + b;
        case '-': return a - b;
        case '*': return a * b;
        case '/': return a / b; 
    default: 
    printf("Invalid operator!");

    }
    }
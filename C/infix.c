#include <stdio.h>

char stack[100];
int top = 0;

void push(char);
char pop();
int priority(char);

int main(void)
{
    int i = 0;

    char exp[100];
    char x;

    printf("Enter Expression: ");
    scanf("%s", exp);
    printf("\n");

    while(exp[i] != '\0')
    {
        if((exp[i] >= 'a' && exp[i] <='z') || (exp[i] >= 'A' && exp[i] <= 'Z'))
            printf("%c", exp[i]);
        else if(exp[i] == '(')
            push(exp[i]);
        else if(exp[i] == ')')
            {
                while((x = pop()) != '(')
                    printf("%c", x);
            }
        else
        {
            while(priority(stack[top]) >= priority(exp[i]))
                printf("%c", pop());
            push(exp[i]);
        }
        i++;
    }

    while (top != 0)
        printf("%c", pop());
    
    printf("\n\n\n");
    return 0;
}

void push(char x)
{
    stack[++top] = x;
}

char pop()
{
    if(top == 0)
        return 0;
    else
        return stack[top--];
}

int priority(char x)
{
    if(x == '(')
        return 0;
    if(x == '+' || x == '-')
        return 1;
    if(x == '*' || x == '/' || x == '%')
        return 2;
    return 0;
}
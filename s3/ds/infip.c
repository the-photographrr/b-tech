#include <stdio.h> 
#include <string.h> 
#include <stdlib.h> 
void push(char, char *, int *);
char pop(char *, int *);
int precedence(char); 
void infix_to_postfix(char *, char *);
void reverse(char *, char *); 
void infix_to_prefix(char *, char *);
float exponent(float, float);
void evaluate_postfix(char *); 
void main() { 
        char infix[50], postfix[50], prefix[50];
        printf("Enter the infix expression: ");
        scanf("%s", infix); 
        infix_to_postfix(infix, postfix);
        infix_to_prefix(infix, prefix); 
        printf("The postfix expression is: ");
        puts(postfix);
        printf("The prefix expression is: ");
        puts(prefix); 
        evaluate_postfix(postfix); 
}
void push(char item, char *stack, int *top) 
{ 
    ++*top; 
     stack[*top] = item; 
}
char pop(char *stack, int *top) 
{     char item; 
    item = stack[*top]; 
    --*top;     return item; 
}
int precedence(char symbol) 
{     
    switch (symbol) 

    {
             case '+':        
                return 1;     
            case '-':         
                return 1;     
            case '*':
                return 2;    
            case '/': 
                return 3;
            case '^':         
                return 4; 
    } 
}  

void infix_to_postfix(char *infix, char *postfix) 
{
    int length, i = 0, pos = 0, top = 0;     char symbol, temp; 
    char stack[50]; 
    length = strlen(infix); 
    while (i < length) 
    {
        symbol = infix[i]; 
        switch (symbol) 
        {
            case '(':
                         push(symbol, stack, &top);
                         break;         
            case ')': 
                        temp = pop(stack, &top);
                        while (temp != '(') 
                        {                 
                            postfix[pos] = temp;
                            pos++;
                            temp = pop(stack, &top); 
                        }             
                        break;         
            case '+':
            case '-':
            case '*':
            case '/':
            case '^': 
                        while (precedence(stack[top]) >= precedence(symbol)) 
                        { 
                            temp = pop(stack, &top);
                            postfix[pos] = temp;
                            pos++;
                        }
                        push(symbol, stack, &top);
                        break;
            default: 
                        postfix[pos] = symbol; 
                        pos++;
                        break;
        }
        i++;
        } 
        while (top >= 0)     { 
                temp = pop(stack, &top);
                postfix[pos] = temp;
                pos++; 
                }
        postfix[pos] = '\0'; 
} 
 void reverse(char *string, char *ret) 
{     
    int i, j = 0, n = strlen(string); 
    for (i = n - 1; i >= 0; i--) 
    {
         ret[j] = string[i]; 
         j++;
    } 
    ret[j] = '\0'; 
}
 void infix_to_prefix(char *infix, char *prefix) 
{     
    char rev[50], revp[50]; 
    reverse(infix, rev);
    infix_to_postfix(rev, revp); 
    reverse(revp, prefix); 
}
float exponent(float v1, float v2) 
{
    float res = 1.0f;
    int i; 
    for (i = 0; i < v2; i++)
    { 
        res *= v1; 
    }      
    return res; 
} 
void pushf(float item, float *stack, int *top) 
{
    ++*top;
    stack[*top] = item; 
}
float popf(float *stack, int *top) 
{
    float item; 
    item = stack[*top]; 
    --*top; 
    return item; 
}
void evaluate_postfix(char *postfix) 
{
    float x, y, z;
    int length = strlen(postfix), i, top = -1;
    char symbol, temp, *tmp;
    float stack[50]; 
    for (i = 0; i < length; i++) 
    {
        symbol = postfix[i];
        switch (symbol) 
        {
            case '+': 
                    y = popf(stack, &top);
                    x = popf(stack, &top);
                    z = x + y;
                    pushf(z, stack, &top);
                    break;
            case '-': 
                    y = popf(stack, &top);
                    x = popf(stack, &top);
                    z = x - y;
                    pushf(z, stack, &top);
                    break;
            case '*': 
                    y = popf(stack, &top);
                    x = popf(stack, &top); 
                    z = x * y;
                    pushf(z, stack, &top);
                    break;
            case '/': 
                    y = popf(stack, &top); 
                    x = popf(stack, &top);
                    z = x / y;
                    pushf(z, stack, &top);
                    break; 
            case '^': 
                    y = popf(stack, &top);
                    x = popf(stack, &top);
                    z = exponent(x, y);
                    pushf(z, stack, &top);
                    break;
            default:
                    pushf(symbol - 48, stack, &top);
                    break; 
        }
    }
    printf("The value of the expression is %.2f", stack[top]); } 
 

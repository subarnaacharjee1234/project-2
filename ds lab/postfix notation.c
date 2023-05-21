#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

#define SIZE 40

int pop();
void push(int);

int stack[SIZE], top = -1;

int main()
{
	int i, a, b, result;
	char ch;
    char postfix[100];
	printf("\nEnter a postfix expression: ");
	gets(postfix);

	for(i=0; postfix[i] != ')'; i++)
	{
		ch = postfix[i];
        if(isspace(ch))
			continue;

		if(isdigit(ch))
		{
            if(isdigit(postfix[i+1])){
                int res=((ch-'0')*10)+(postfix[i+1]-'0');
                push(res);
                i++;
            }else{
                push(ch-'0');
            }

		}
		else if(ch == '+' || ch == '-' || ch == '*' || ch == '/')
		{
			b = pop();
			a = pop();

			switch(ch)
			{
				case '+': result = a+b;
					  break;
				case '-': result = a-b;
					  break;
				case '*': result = a*b;
					  break;
				case '/': result = a/b;
					  break;
			}

			push(result);
		}

	}
	printf("\nThe postfix evaluation is: %d\n",pop());

	return 0;
}

void push(int n)
{
	if (top < SIZE -1)
	{
		stack[++top] = n;
	}
}
int pop()
{
	int n;
	if (top > -1)
	{
		n = stack[top];
		stack[top--] = -1;
		return n;
	}
}

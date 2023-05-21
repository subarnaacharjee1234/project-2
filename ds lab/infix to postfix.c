#include<stdio.h>
#include<ctype.h>
#include<string.h>
#define MAX_SIZE 100

int stack[MAX_SIZE];
int top = -1;

void push(int item) {
  if (top == MAX_SIZE - 1) {
    printf("Stack Overflow\n");
  }
  stack[++top] = item;
}

int pop() {
  if (top == -1) {
    printf("Stack Underflow\n");
  }
  return stack[top--];
}

int is_operator(char c) {
  if (c == '+' || c == '-' || c == '*' || c == '/' || c == '^') {
    return 1;
  } else {
    return 0;
  }
}

int precedence(char c) {
  if (c == '^') {
    return 3;
  } else if (c == '*' || c == '/') {
    return 2;
  } else if (c == '+' || c == '-') {
    return 1;
  } else {
    return 0;
  }
}


int main()
{

    //infix to postfix
    char infix[MAX_SIZE],postfix[MAX_SIZE];
    int i=0,j=0;
    gets(infix);
    for (int i = 0; i < strlen(infix); i++)
    {
        if(isspace(infix[i]))
            continue;
        else if(isalnum(infix[i])){
            postfix[j++]=infix[i];
        }
        else if(infix[i]=='('){
            push(infix[i]);
        }
        else if(is_operator(infix[i])){
             while (top != -1 && stack[top] != '(' && precedence(infix[i]) <= precedence(stack[top])) {
                postfix[j++] = pop();
            }
            push(infix[i]);
        }
        else if(infix[i]==')'){
            while (stack[top] != '(') {
                postfix[j++] = pop();
            }
            pop();
        }

    }
    postfix[j]=')';
    for (int i = 0;postfix[i]!=')'; i++)
    {
        printf("%c",postfix[i]);
    }



    return 0;

}

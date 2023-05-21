#include<stdio.h>
#define MAX 5
void push();
void pop();
void display();
int stack[MAX];
int top=0;
int main()
{
    int ch;
    main:
    printf("\n 1.Push\n 2.Pop\n 3.Display\n 4.Exit\n");
    printf("Enter Your Number");
    scanf("%d", &ch);
    switch (ch)
    {
    case 1:
        push();
        goto main;
        break;

    case 2:
        pop();
        goto main;
        break;

    case 3:
        display();
        goto main;
        break;

    case 4:
       return 0;

    default:
        printf("Invalid Number");
    }

}
void push(){
    int item;
    if(top==MAX){
        printf("\nOverflow\n");
    }else{
        printf("\nEnter Your Number to Insert");
        scanf("%d", &item);
        top+=1;
        stack[top]=item;
    }
}
void pop(){
    int item;
    if(top==0){
        printf("Underflow");
    }else{
        item=stack[top];
        top--;
    }
}
void display(){
    int item;
    if(top==0){
        printf("No Data Found");
    }else{
       for (int i = top; i>0; i--)
       {
           printf("%d ", stack[i]);
       }

    }
}

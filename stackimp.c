//Program to implement stacks using arrays
#include<stdio.h>
#include<stdlib.h>
#define size 10
int stk[size],top=-1;
void push(int ele)
{
    if(top==size)
    {
        printf("Stack overflow\n");
        return;
    }
   top++;
   stk[top]=ele;
}
int pop()
{
    if(top==-1)
    {
        printf("stack empty\n");
        return -1;
    }
    return(stk[top--]);
}

void display()
{
    int i;
    if(top==-1)
    {
        printf("Stack is emprty\n");
    }
    for(i=top;i>=0;i--)
    {
        printf("%d\n",stk[i]);
    }
}
main()
{
  int choice,ele;
  while(1)
  {
    printf("Enter choice\n1-Push 2-Pop 3-Display 4-Exit\n");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:printf("Enter element to insert\n");
               scanf("%d",&ele);
               push(ele);
               break;
        case 2:ele=pop();
               printf("Element deleted is %d\n",ele);
               break;
        case 3:printf("Contents of stack are:\n");
               display();
               break;
        case 4:exit(1);
    }
  }

}
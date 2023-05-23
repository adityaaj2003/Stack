//Program to implement stacks using structure
#include<stdio.h>
#include<stdlib.h>
#define size 10
struct stack
{
    int stk[size],top;
};
struct stack s;
void push(int ele)
{
  if(s.top==size)
   {
     printf("Stack overflow\n");
     return;
   }  
  s.stk[++(s.top)]=ele;
}
int pop()
{
    if(s.top==-1)
    {
        printf("stack empty\n");
        return -1;
    }
    return(s.stk[(s.top)--]);
}
void display()
{
    int i;
    if(s.top==-1)
    {
        printf("Stack is emprty\n");
    }
    for(i=s.top;i>=0;i--)
    {
        printf("%d\n",s.stk[i]);
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
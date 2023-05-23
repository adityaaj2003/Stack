//Program to evaluate postfix expression
#include<stdio.h>
#include<ctype.h>
#define size 10
struct stack
{
    char stk[size];
    int top;
};
void push(struct stack *s,char ele)
{
  s->stk[(s->top)++]=ele;
}
char pop(struct stack *s)
{
    return(s->stk[(s->top)--]);
}
int evaluate(int op1,char optr,int op2)
{
    switch(optr)
    {
        case '+':return(op1+op2);
        case '-':return(op1-op2);
        case '*':return(op1*op2);
        case '/':return(op1/op2);
    }
}
main()
{
    struct stack s;
    s.top=-1;
    char post[size],ch;
    int op1,op2,i=0,res;
    printf("Enter postfix expression\n");
    scanf("%s",post);
    while(post[i]!='\0')
    {
        ch=post[i++];
        if(isdigit(ch))
        {
            push(&s,ch-'0');
        }
        else
         {
            op2=pop(&s);
            op1=pop(&s);
            res=evaluate(op1,ch,op2);
            push(&s,res);
         }
    }
    if(s.top==0)
     printf("Result is :%d",pop(&s));
}
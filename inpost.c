//Program to convert infix to postfix
#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#define size 20
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
    return(s->stk[(s->top)]--);
}
int precedence(char op)
{
    switch(op)
    {
        case '*':
        case '/':return 2;
        case '+':
        case '-':return 1;
        default:return -1;
    }
}
main()
{
    struct stack s;
    s.top=-1;
    char c,ch,infix[size],post[size];
    int i=0,j=0;
    printf("Enter infix expression\n");
    scanf("%s",infix);
    while(infix[i]!='\0')
    {
        ch=infix[i++];
        if(ch=='(')
        push(&s,ch);
        else if(isalpha(ch)||isdigit(ch))
        post[j++]=ch;
        else if(ch==')')
        {
            while(c=pop(&s)!='(')
            post[j++]=c;
        }
        else
        {
            while((precedence(ch)<=precedence(s.stk[(s.top)]))&&s.top!=-1)
            post[j++]=pop(&s);
            push(&s,ch);
        }
    }
    while(s.top!=-1)
    post[j++]=pop(&s);
    post[j]='\0';
    printf("Postfix expression is:%s",post);
}
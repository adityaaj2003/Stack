#include<stdio.h>
#include<stdlib.h>
struct employee
{
    int id;
    char name[20];
    float salary;
}e[10];
void read(struct employee e[],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("Enter id of %d",i+1);
        scanf("%d",&e[i].id);
        printf("Enter name of %d",i+1);
        scanf("%s",e[i].name);
        printf("Enter salary of %d",i+1);
        scanf("%f",&e[i].salary);
    }
}
void display(struct employee e[],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("%d\nEmployee id:%d\nEmployee name:%s\nEmployee salary:%f\n",i+1,e[i].id,e[i].name,e[i].salary);
    }
}
main()
{
  int choice,n;
  printf("Enter value of n\n");
  scanf("%d",&n);
  while(1)
  {
    printf("Enter choice\n1-Read 2-Display 3-Exit\n");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:read(e,n);
               break;
        case 2:display(e,n);
               break;
        case 3:exit(1);
        default:printf("Invalid choice\n");
    }
  }
}
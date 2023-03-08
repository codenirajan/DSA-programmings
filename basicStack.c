#include<stdio.h>
#define n 5

struct stack
{
   int top,arr[n];
};


void push(struct stack *s1)
{
    if(s1->top<n-1)
    {
        printf("enter the value to be pushed \n");
        s1->top++;
        int b;
        scanf("%d",&b);
        s1->arr[s1->top]=b;
        printf("\n %d has been pushed \n",b);
    }
    else
    printf("the stack is full \n");
}

void pop(struct stack *s1)
{
    if(s1->top==-1)
    printf("the stack is underflow \n");
    else 
    {
        printf("%d is poped \n",s1->arr[s1->top]);
        s1->top--;
    }
}

void show(struct stack s1)
{
    int i;
    if(s1.top!=-1)
    for(i=s1.top;i>=0;i--)
     {
          printf("%d  \n",s1.arr[i]);
     }
}

int main()
{
    struct stack s1;
    int a;
    s1.top=-1;
    a=0;
    while (a!=4)
    {
        printf("\n \n \n ENTER 1.push 2.pop 3.show 4.exit /n ");
        scanf("%d",&a);
        switch(a)
        {
            case 1:
            push(&s1);
            break;

            case 2:
            pop(&s1);
            break;

            case 3:
            show(s1);
            break;

            case 4:
            break;
        }
    }
    
    


    return 0;

}

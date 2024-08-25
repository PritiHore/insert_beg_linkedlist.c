#include<stdio.h>
#include<malloc.h>
#include<conio.h>
struct node
{
    int data;
    struct node *next;
} *s;

 void insert_beg(struct node **s)
{

    struct node*p;
     p=(struct node*)malloc(sizeof(struct node));
    printf("enter the value of new node at beg\n");
    scanf("%d",&p->data);
    p->next=*s;
    *s=p;
}
 void main()
 {
    char ch=getch();
    struct node *p,*s,*q,*first;
    p=(struct node*)malloc(sizeof(struct node));
    printf("enter the value of the first node\n");
    scanf("%d",&p->data);
    s=p; 
do
{

 q=(struct node*)malloc(sizeof(struct node));
 printf("enter the value of the second node\n");
    scanf("%d",&q->data);
    p->next=q;
    p=q;
    printf("press y for next node\n");
    ch=getch();
}
 
 
while(ch=='y');
insert_beg(&s);
printf("the linked list is after insertion at beg\n");
p->next=NULL;




while(s!=NULL)
{
    printf("%d\n",s->data);
    s=s->next;
}
 ch=getch();

 } 

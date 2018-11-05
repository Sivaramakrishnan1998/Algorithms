#include<stdio.h>
struct node
{
int data;
struct node *next;
}*head;
int main()
{
int num;
//printf("enter number of elements?\n");
scanf("%d ",&num);

createList(num);
traverseList(num);

return 0;
}

void createList(int num)
{
int data,itr,i;
struct node *newNode,*temp;

head = (struct node*)malloc(sizeof(struct node));

if(head==NULL) exit(0);
//printf("enter head node /first node value\n");
scanf("%d",&data);

head->data  = data;
head->next  = NULL;

temp = head;
for(i=2;i<=num;i++)
    {
 //   printf("enter  %d node",i);
    scanf("%d",&data);

    newNode = (struct node*)malloc(sizeof(struct node));

    if(newNode==NULL) exit(0);

    newNode->data = data;
    newNode->next = NULL;


    temp->next = newNode;
    temp = temp->next;

    }

}

void traverseList()
    {
    struct node *temp;

    if(head == NULL) return;

    temp = head;
   while(temp!=NULL)
   {
    printf("%d\n",temp->data);
    temp = temp->next;
    }

    }

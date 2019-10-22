
#include <stdio.h>
#include <stdlib.h>
struct node
{
int data;
struct node *link;
};
void main()
{
    struct node *start=NULL;
    struct node *head,*new,*p,*ptr;
  
    int ch,n,i,value,x;
    while(1)
    {
    printf("\n1.Insertion at begining\n");
    printf("2.Insertion at end\n");
    printf("3.Insertion at any position\n");
    printf("4.Deletion at begining\n");
    printf("5.Deletion at end\n");
    printf("6.Deletion at any position\n");
    printf("7.Display\n");
    printf("Enter choice:\n");
    scanf("%d",&ch);
    switch(ch)
    {
        case 1: new=(struct node*)malloc(sizeof(struct node));
            printf("1.");
            printf("Enter the data:");
            scanf("%d",&value);
            new->data=value;
            new->link=NULL;
            if(start==NULL)
                start=new;
            else
            {
            new->link=start;
            start=new;
            }
            break;
        case 2:printf("2.");
            head=start;
            new=(struct node*)malloc(sizeof(struct node));  
            printf("Enter the data:");
            scanf("%d",&value);      
            new->data=value;
            new->link=NULL;
            while(head->link!=NULL)
                head=head->link;
            head->link=new;
            break;
        case 3:printf("3.");
            new=(struct node*)malloc(sizeof(struct node));
            printf("Enter the value after which is to be inserted\n");
            scanf("%d",&x);
            printf("Enter the data:");
            scanf("%d",&value);

            new->data=value;
            new->link=NULL;
            head=start;
            while((head->link!=NULL)&&(head->data!=x))
            {
            head=head->link;
            }
            new->link=head->link;
            head->link=new;
            break;
        case 4:printf("4.");
            head=start;
            p=head->link;
            free(head);
            start=p;
            break;
        case 5:printf("5.");
            p=start;
            while(p->link!=NULL)
            {
            ptr=p;
            p=p->link;
            }
            free(p);
            ptr->link=NULL;
            break;
        case 6:printf("6.");
            printf("Enter the value which is to be deleted:");
            scanf("%d",&x);
            p=start;
            while((p->data!=x)&&(p->link!=NULL))
            {
            ptr=p;
            p=p->link;
            }
            ptr->link=p->link;
            free(p);

            break;
        case 7:printf("7.");
            head=start;
            while(head->link!=NULL)
            {
            printf("%d\t",head->data);
            head=head->link;
            }
            printf("%d",head->data);
            break;
        default:
            printf("Invalid Choice");
    }
    }
}

	
	
	


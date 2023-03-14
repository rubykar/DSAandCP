#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
};

struct node *head1 = NULL,*head2 = NULL,*head3 = NULL;

void insert(struct node **head,int num){
    struct node *temp ;
    temp = (struct node *)malloc(sizeof(struct node));
    temp->data = num;
    temp->next = NULL;
    if(*head == NULL){
        *head = temp;
    }
    else{
        struct node *ptr = *head;
        while(ptr->next!=NULL){
            ptr = ptr->next;
        }
        ptr->next = temp;
    }
}

void mearge(struct node **head){
    struct node *temp = head1;
    while(temp->next!=NULL){
        temp = temp->next;
    }
    temp->next = *head;
}

void sort(struct node **head){
    struct node *current = *head, *index = NULL;  
    int temp;  
    if(*head == NULL) {  
        return;  
    }  
    else {  
        while(current != NULL) {   
            index = current->next;  
              
            while(index != NULL) {  
                if(current->data > index->data) {  
                    temp = current->data;  
                    current->data = index->data;  
                    index->data = temp;  
                }  
                index = index->next;  
            }  
            current = current->next;  
        }      
    }  
}
void display(struct node *head){
    struct node *temp = head;
    while(temp!=NULL){
        printf("%d->",temp->data);
        temp = temp->next;
    }
}

int main(){
    int n;
    printf("Enter the number of items in a linked list : ");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        int num;
        printf("Enter the %d:",i+1);
        scanf("%d",&num);
        insert(&head1,num);
    }
    for(int i=0;i<n;i++){
        int num;
        printf("Enter the %d:",i+1);
        scanf("%d",&num);
        insert(&head2,num);
    }
    for(int i=0;i<n;i++){
        int num;
        printf("Enter the %d:",i+1);
        scanf("%d",&num);
        insert(&head3,num);
    }
    mearge(&head2);
    mearge(&head3);
    // display(head1);
    sort(&head1);
    display(head1);
}

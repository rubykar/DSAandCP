#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
};
struct node *head1 = NULL,*head2 = NULL,*head3 = NULL;

void insert(struct node **head,int num){
    struct node *temp;
    temp = (struct node *)malloc(sizeof(struct node));
    temp->data = num;
    temp->next = NULL;
    if(*head == NULL){
        *head = temp;
    }
    else{
        struct node *ptr = *head;
        while(ptr->next !=NULL){
            ptr = ptr->next;
        }
        ptr->next = temp;
    }
}

void display(struct node *head){
    struct node *temp  = head;
    while(temp!=NULL){
        printf("%d",temp->data);
        temp = temp->next;
    }
    printf("\n");
}

void reverse (struct node **head){
    struct node *current = *head;
    struct node *next = NULL,*prev = NULL;
    while(current!=NULL){
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }
    *head = prev;
}

void insert_third(struct node **head,int num){
    struct node *temp;
    temp = (struct node *)malloc(sizeof(struct node));
    temp->data = num;
    temp->next = NULL;
    if(*head == NULL){
        *head = temp;
    }
    else{
        temp->next = *head;
        *head = temp;
    }
}

void addition(){
    struct node *temp = head1;
    struct node *ptr = head2;
    while(ptr->next!=NULL && temp->next!=NULL){
        insert_third(&head3,(ptr->data+temp->data)%10);
        int carry = (ptr->data+temp->data)/10;
        ptr = ptr->next;
        temp = temp->next;
        ptr->data +=carry;
    }
    insert_third(&head3,(ptr->data+temp->data));
}


int main(){
    int num1,num2;
    printf("Enter the number 1: ");
    scanf("%d",&num1);
    printf("Enter the number 2: ");
    scanf("%d",&num2);
    while(num1%10 != 0){
        insert(&head1,num1%10);
        num1 = num1/10;
    }
    while(num2%10 != 0){
        insert(&head2,num2%10);
        num2 = num2/10;
    }
    // addition(&head1,&head2);
    display(head1);
    display(head2);
    reverse(&head1);
    reverse(&head2);
    addition();
    display(head3);
    return 0;
}
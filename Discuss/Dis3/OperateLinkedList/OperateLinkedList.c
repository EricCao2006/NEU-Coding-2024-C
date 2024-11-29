//链表的操作
#include <stdio.h>
#include <stdlib.h>
struct Stu{int id;char name[50];struct Stu* next;};
struct Stu *create(int n){
    struct Stu *head=NULL,*node=NULL,*end=NULL;
    head=(struct Stu*)malloc(sizeof(struct Stu));
    end=head;
    for(int i=0;i<n;i++){
        node=(struct Stu*)malloc(sizeof(struct Stu));
        scanf("%d %s",&node->id,node->name);
        end->next=node;
        end=node;
    }
    end->next=NULL;
    return head;
}
void insert(int id_bofore,int id,char name[]){
    struct Stu *node=NULL,*prev=NULL,*temp=NULL;
    node=(struct Stu*)malloc(sizeof(struct Stu));
    node->id=id;
    strcpy(node->name,name);
    temp=*head;
    while(temp!=NULL){
        if(temp->id==id_bofore){
            prev=temp;
            break;
        }
        prev=temp;
        temp=temp->next;
    }
    node->next=temp;
    prev->next=node;
}
void delete(struct Stu **head,int id){
    struct Stu *temp=NULL,*prev=NULL;
    if((*head)->id==id){
        temp=*head;
        *head=(*head)->next;
        free(temp);
        return;
    }
    prev=*head;
    temp=(*head)->next;
    while(temp!=NULL){
        if(temp->id==id){
            prev->next=temp->next;
            free(temp);
            return;
        }
        prev=temp;
        temp=temp->next;
    }
}
void print(struct Stu *head){
    struct Stu *temp=head;
    while(temp!=NULL){
        printf("%d %s\n",temp->id,temp->name);
        temp=temp->next;
    }
}
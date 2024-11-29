//创建n节点链表
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
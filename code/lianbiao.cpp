#include<iostream>
#include<string>
using namespace std;

typedef struct LNode{
    int data;
    struct LNode *next;
}LNode,*Linklist;

void init(Linklist &L)
{

    L=(LNode*)malloc(sizeof(LNode));
    L->next=NULL;
}



int main(){

    LNode * l;
    LNode ss;
    Linklist a;
    a=(LNode*)malloc(sizeof(LNode));
    a->data=123;
    a->next=NULL;
    ss.data=20;
    init(l);
    Linklist s;
    s=(LNode*)malloc(sizeof(LNode));
    s->data=20;
    s->next=NULL;
    l->next=s;
    s->next=a;
    cout<<s->next->data;
    system("pause");
    return 0;
}
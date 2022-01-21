#include <cassert>
#include "linkedList.h"
#include "linkedListFuncs.h"


void addIntToEndOfList(LinkedList *list, int value) {
    assert(list!=NULL); 

    Node *p;
    p = new Node;
    p->data = value;
    p->next = NULL;

    if (list->head == NULL) {
        list->head = p;
        list->tail = p;
        
    } else {
        list->tail->next = p;
        list->tail = p;
    }
}

void addIntToStartOfList(LinkedList *list, int value) {
    assert(list!=NULL);

    Node *p;
    p = new Node;
    p->data = value;
    p->next = NULL;
    if (list->head == NULL) {
        list->head = p;
        list->tail = p;
        
    } else {
        p->next = list->head;
        list->head = p;
    }
}

Node * pointerToMax(LinkedList *list) {
    assert(list!=NULL);
    assert(list->head != NULL);

    Node* p = list->head;
    Node* max= list->head->next; 
    while (p != NULL) {
        if (max->data < p->data) {
            max = p;
        }
        p=p->next;
    }

    return max; 
}


Node * pointerToMin(LinkedList *list) {
    assert(list!=NULL);
    assert(list->head != NULL);

    Node* p = list->head;
    Node* min = list->head->next; 
    while (p != NULL) {
        if (min->data > p->data) {
            min = p;
        }
        p=p->next;
    }

    return min; 
}

int largestValue(LinkedList *list) {
    assert(list!=NULL);
    assert(list->head != NULL);

    Node* p = list->head;
    int max = list->head->data;
    while (p != NULL) {
        max = std::max(p->data, max);
        p=p->next;
    }

    return max; 
}

int smallestValue(LinkedList *list) {
    assert(list!=NULL);
    assert(list->head != NULL);

    Node* p = list->head;
    int min = list->head->data; 
    while (p != NULL) {
        min = std::min(p->data, min);
        p=p->next;
    }

    return min; 

}

int sum(LinkedList * list) {
    assert(list!=NULL);

    Node* p = list->head;
    int sum = 0;
    while (p != NULL) {
        sum += p->data;
        p=p->next;
    }

    return sum; 
}


//
// Created by Mohamed Khalil on 4/24/2023.
//

#ifndef _DEQUE_H
#define _DEQUE_H
#include "Airplane.h"

class DEQ{
public:
    struct node{
    public:
        Airplane data;
        node* next;
    };
    DEQ(){
        Front = nullptr;
        Rear = nullptr;
        length = 0;
    };
    ~DEQ(){
        delete Front;
        delete Rear;
    };
    bool DEQ_isEmpty(){
        if(Front == nullptr){
            return true;
        }else{
            return false;
        }
    };
    void Add_Front(Airplane element){
        node* NEW;

        NEW->data = element;
        NEW->next = nullptr;
        node* temp;
        temp = Front;
        Front = NEW;
        Front->next = temp;
        length++;
        if(DEQ_Length() == 1){
            Rear = Front;
        };
    };
    void Add_Rear(Airplane element){
        node* NEW;
        NEW->data = element;
        NEW->next = nullptr;
        Rear->next = NEW;
        Rear = NEW;
        length++;
    };
    void Remove_Front(){
        Front = Front->next;
        length--;
    };
    void Remove_Rear(){
        node* iterate = Front;
        while(iterate->next != Rear){
            iterate = iterate->next;
        };
        Rear = iterate;
        length--;
    };
    node* View_Front(){
        return Front;
    };
    node* View_Rear(){
        return Rear;
    };
    int DEQ_Length(){
        return length;
    };
private:
    node* Front;
    node* Rear;
    int length;
};

#endif

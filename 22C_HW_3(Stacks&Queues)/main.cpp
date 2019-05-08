//
//  main.cpp
//  22C_HW_3(Stacks&Queues)
//
//  Created by home on 4/30/19.
//  Copyright © 2019 home. All rights reserved.
//Matthew(Matt) Hoang
//HW 3 Stacks and Queues

#include <iostream>
#include <string>
#include "QueueADT.h"
#include "StackADT.h"
using namespace std;

void insertElement();
void deleteElement();
void displayTopStack();
void displayTopQueue();
void displayEndQueue();

void insertElement(Queue<int> &queue_object){
    Queue<int> insertNode;
    cout<<"What is the element that you want to input"<<endl;
    int node;
    cin>>node;
    queue_object.enqueue(node);
}
void deleteElement(Queue<int> &queue_object){
    Queue<int> deleteNode;
    int node2;
    cout<<"What is the element that you want to delete"<<endl;
    cin>>node2;
    queue_object.dequeue(node2);
}
void displayTopQueue(){
    
}
int main(int argc, const char * argv[]) {
    // insert code here...
    string input;
    Queue<int> Program_Queue;
    Stack<int> Program_Stack;

    while (input != "Q"){
        cout<<"Main Menu: Please select an option "<<endl;
        cout<<"Press I for insert"<<endl;
        cout<<"Press D for delete"<<endl;
        cout<<"Press T to display the elements at the top of the two stacks "<<endl;
        cout<<"Press F to display the elements at the top of the two queues "<<endl;
        cout<<"Press R to display the elments at the end of the two queues "<<endl;
        cout<<"Press Q to quit the program"<<endl;
        cin>>input;
        if(input == "I"){insertElement(Program_Queue);}
        else if (input == "D"){deleteElement(Program_Queue);}
        //else if (input == "T"){displayTopStack();}
        //else if (input == "F"){displayTopQueue();}
        //else if (input == "R"){displayEndQueue;}
        
}
    return 0;
}

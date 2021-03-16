#ifndef LIST_H
#define LIST_H

class List{
    private:
    typedef struct node{
        int data;  // Stores Data
        node* next; // Points to the next

    }* nodePtr;
 

    nodePtr head;
    nodePtr curr; 
    nodePtr temp;


    public:
    List();
    void AddNode(int addData);
    void DeleteNode(int delData);
    void PrintList();




};

#endif
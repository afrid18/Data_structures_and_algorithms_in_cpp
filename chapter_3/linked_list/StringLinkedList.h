#ifndef STRINGLINKEDLIST_H

#define STRINGLINKEDLIST_H


// StringNode data structure that builds the linked list
//
using namespace std;


class StringNode {
private:
    string ele;
    StringNode* next;

    friend class StringLinkedList;

};



class StringLinkedList {
    public:
        StringLinkedList();
        ~StringLinkedList();
        bool empty() const;
        const string& front() const;
        void addFront(const string& e);
        void removeFront();
        void printList() const;

    private:
        StringNode* head;
};

#endif

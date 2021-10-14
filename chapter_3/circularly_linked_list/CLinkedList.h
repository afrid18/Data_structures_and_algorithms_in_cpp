#ifndef CLINKEDLIST_H
#define CLINKEDLIST_H 

using namespace std;

typedef string Ele;

class CNode {
    private:
        Ele ele;
        CNode* next;

    friend class CLinkedList;
};


class CLinkedList {
    private:
        CNode* cursor;

    public:
        CLinkedList();
        ~CLinkedList();
        bool empty() const;
        const Ele& front() const;
        const Ele& back() const;
        void advance();
        void add(const Ele& e);
        void remove();
};



#endif

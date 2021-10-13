#ifndef DLINKEDLIST_H
#define DLINKEDLIST_H 1

using namespace std;

typedef string Ele;

class DNode {
    private:
        Ele ele;
        DNode* left;
        DNode* right;
        friend class DLinkedList;
};

class DLinkedList {
    private:
        DNode* header;
        DNode* trailer;
    protected:
        void add(DNode* v, const Ele& e);
        void remove(DNode* v);
    public:
        DLinkedList();
        ~DLinkedList();
        bool empty() const;
        const Ele& front() const;
        const Ele& back() const;
        void addFront(const Ele& e);
        void addBack(const Ele& e);
        void removeFront();
        void removeBack();
        void printList() const;
        void rprintList() const;
};



#endif

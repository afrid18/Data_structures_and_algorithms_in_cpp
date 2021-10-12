#ifndef DLINKEDLIST_H
#define DLINKEDLIST_H 1


typedef string Ele;

class DNode {
    private:
        Ele ele;
        DNode* left;
        DNode* right;
        friend class DLinkedList;
};

class DlinkedList {
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
        void add(DNode* v, const Ele& e);
        void addFront(const Ele& e);
        void addBack(const Ele& e);
        void remove(DNode* v);
        void removeFront();
        void removeBack();
};



#endif

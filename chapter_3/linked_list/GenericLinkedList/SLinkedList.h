#ifndef SLINKEDLIST_H
#define SLINKEDLIST_H 1


template <class E>
class SNode {
    private:
        E ele;
        SNode<E>* next;
        friend class SLinkedList<E>;
};


template <class E>
class SLinkedList {
    private:
        SNode<E>* head;

    public:
        SLinkedList();
        ~SLinkedList();
        bool empty() const;
        const <E>& front() const;
        void addFront(const <E>& e);
        void removeFront();
        void printList();
};


#endif

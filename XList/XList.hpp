#ifndef XLIST_HPP
#define XLIST_HPP

#include <iostream>

template <typename DataType>
class Node
{
public:
    Node(DataType data) {
        m_data = data;
    }
    ~Node() {}
    DataType get_data() const {
        return m_data;
    }

    DataType m_data;
    Node* m_next;
    Node* m_prev;
};

template <typename T1>
class XList
{
public:
    XList() {
        lastNode=nullptr;
        firstNode=nullptr;
    }
    void push_back(T1 value) {
        Node<T1>* item = new Node<T1>(value);
        if(firstNode == nullptr) {
            firstNode = item;
            firstNode->m_next = lastNode;
            firstNode->m_prev = nullptr;
        }
        else {
            Node<T1>* lastItem = getLastItem();
            Node<T1>* temp = lastItem->m_next;
            lastItem->m_next = item;
            item->m_prev = lastItem;
            item->m_next = temp;
        }
    }
    void push_front(T1 node) {
        Node<T1> *item = new Node<T1>(node);
        if(firstNode == nullptr) {
            firstNode = item;
            firstNode->m_next = lastNode;
            firstNode->m_prev = nullptr;
        }
        else {
            Node<T1> *temp = firstNode;
            firstNode = item;
            firstNode->m_next = temp;
            firstNode->m_prev = nullptr;
            temp->m_prev = firstNode;
        }
    }
    
    Node<T1>* getLastItem() {
        Node<T1>* i;
        for(i=firstNode; i->m_next != nullptr; i=i->m_next)
            ;
        return i;
    }

    void print() {
        for(Node<T1>* i=firstNode; i != lastNode; i=i->m_next) {
            std::cout << "data :" << i->m_data << "\n";
        }
    }

private:
    Node<T1>* firstNode;
    Node<T1>* lastNode;
};

#endif  // XLIST_HPP

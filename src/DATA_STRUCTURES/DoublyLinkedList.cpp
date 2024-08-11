#include <iostream>


struct node {
    int32_t val;
    node *prev;
    node *next;
}*head;


class doublyLinkedList{
    private:
    //node *head;
    public:
    doublyLinkedList() {
        head = nullptr;
    }
    void insert(int8_t n);
    void remove(int8_t idx);
    void show();
    void reverseShow();

    ~doublyLinkedList() {
        node* current = head;
        while(current != nullptr)
        {
            node* next = current->next;
            delete current;
            current = next;
        }
        head = nullptr;
    };

};
    void doublyLinkedList::insert(int8_t n)
    {
        std::cout << "Inserting: " << (int)n << std::endl;
        node *t = head;

        node *new_node = new node();

        if (head != nullptr)
        {
        while (t->next != nullptr)
        {
            t = t->next;
        }

        new_node->val = n;
        t->next = new_node;
        new_node->next = nullptr;
        new_node->prev = t;
        }
        else{
            new_node->val = n;
            new_node->next = nullptr;
            new_node->prev = nullptr;
            head = new_node;
        }
    }

    void doublyLinkedList::show()
    {
        std::cout<<"Display Double linkedlist: ";
        node *temp = head;
        while(temp != nullptr)
        {
            cout << temp->val << " ";
            temp = temp->next;
        }
        std::cout << std::endl;
    }

void doublyLinkedList::reverseShow()
{
    node* curr = head;
    node *temp = nullptr;

    while(curr != nullptr)
    {
        temp = curr->prev;
        curr->prev = curr->next;
        curr->next = temp;
        curr = curr->prev;
    }
    if(temp != nullptr)
    {
        head = temp->prev;
    }

}

void doublyLinkedList::remove(int8_t idx)
{
    std::cout << "Removing: " << (int)idx << std::endl;
    node* temp = head;

    while (temp != nullptr)
    {
        //std::cout<<"temp: "<<temp->val<<std::endl;
        if (temp->val == idx)
        {
            //std::cout<<"removing: "<<temp->val<<std::endl;
            temp->prev->next = temp->next;
            temp->next->prev = temp->prev;
            delete temp;
            break;
        }
        temp = temp->next;
    }
}

int doublyLinkedListtest()
{
    doublyLinkedList l;
    l.insert(1);
    l.insert(2);
    l.insert(3);
    l.insert(4);
    l.insert(5);
    l.show();
    l.reverseShow();
    l.show();
    l.remove(3);
    l.show();
    l.reverseShow();
    l.show();
    l.insert(3);
    l.show();
    l.reverseShow();
    l.show();
    return 0;
}

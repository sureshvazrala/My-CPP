#include <iostream>

#pragma once

//namespace data_structures
//{

    //namespace linked_list
    //{

        // Class Node
        class Node
        {
        public:
            int32_t val;
            Node *next;
        };

        // Class list
        class list
        {
        private:
            Node *head;

        public:
            list()
            {
                head = nullptr;
            }

            bool isEmpty();                // returns true if the list is empty
            void insert(int32_t new_elem); // inserts a new element
            void reverseList();            // reverses the linked list
            void display();                // displays the linked list
            int32_t top();                 // returns the top element
            int32_t last();                // returns the last element
            int32_t traverse(int32_t index);
        };



bool list::isEmpty() { return head == nullptr; }

        /**
         * Inserts a new element into the linked list.
         *
         * @param n the value of the new element to be inserted
         *
         * @return void
         */
        void list::insert(int32_t n)
        {
            // Create a new node
            Node *new_node = new Node();

            // Set the value of the new node
            new_node->val = n;

            // Initialize the next pointer of the new node to null
            new_node->next = nullptr;

            // Check if the list is empty
            if (isEmpty())
            {
                // If the list is empty, set the new node as the head
                head = new_node;
            }
            else
            {
                // Find the last node in the list
                Node *temp = head;
                while (temp->next != nullptr)
                {
                    temp = temp->next;
                }

                // Set the next pointer of the last node to the new node
                temp->next = new_node;
            }
        }

        /**
         * Reverses the linked list.
         *
         * This function iterates through the list, reversing the direction of the pointers.
         * It updates the head of the list to point to the new first node.
         *
         * @return void
         */
        void list::reverseList()
        {
            Node *current = head;
            Node *prev=nullptr, *next = nullptr;
            while (current != nullptr)
            {
                next = current->next;
                current->next = prev;
                prev = current;
                current = next;
            }
            head = prev;
        }

        /**
         * Display the linked list.
         *
         * @return void
         */
        void list::display()
        {
            Node *temp = head;
            std::cout <<"Display linkedlist: ";
            while (temp != nullptr)
            {
                std::cout << temp->val << " ";
                temp = temp->next;
            }
            std::cout << std::endl;
        }

        /**
         * Returns the top element in the linked list.
         *
         * @return The value of the top element in the list, or 0 if the list is empty.
         */
        int32_t list::top()
        {
            if (head == nullptr) {
                return 0;
            }

            return head->val;
        }

        /**
         * Returns the last element in the linked list.
         *
         * @return The value of the last element in the list.
         */
        int32_t list::last()
        {
            Node *temp = head;
            while (temp->next != nullptr)
            {
                temp = temp->next;
            }
            return temp->val;
        }

        /**
         * Traverses the linked list to the specified index and returns the value at that index.
         *
         * @param index the index of the value to be retrieved
         *
         * @return the value at the specified index
         *
         */
        int32_t list::traverse(int32_t index)
        {
            Node *temp = head;
            for (int i = 0; i < index; i++)
            {
                temp = temp->next;
            }
            return temp->val;
        }
    //} // namespace linked_list
//} // namespace data_structures

#include "../inc/LinkedList.hpp"

        int linkedlisttest()
        {
            //data_structures::linked_list::list l;
            list l;
            l.insert(11);
            l.insert(12);
            l.insert(13);
            l.display();
            std::cout << "top: " << l.top() << std::endl;
            std::cout << "last: " << l.last() << std::endl;
            std::cout << "traverse at index 1: " << l.traverse(1) << std::endl;
            l.reverseList();
            l.display();
            std::cout << "top: " << l.top() << std::endl;
            std::cout << "last: " << l.last() << std::endl;
            std::cout << "traverse at index 1: " << l.traverse(1) << std::endl;
            return 0;
        }
/* Date : 20.01.2023
 * Topic : List Data Type (Linked List | Single List | Double Linked List)
 * Difficulty : Easy
 ********************************/


// Notes :
// ------------------------------------
// o you can keep data in linear way
// o 


#include <iostream>
#include <list>
#include "XList.hpp"

using namespace std;


int main()
{
    XList<int> xlist;
    xlist.push_back(1);
    xlist.push_back(2);
    xlist.push_front(0);
    xlist.print();
    std::list<int> stl_list;
    stl_list.push_back(1);
    

    return 0;
}

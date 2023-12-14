#include <iostream>
#include <list>
using namespace std;

template <typename T>
void makeCircular(std::list<T>& myList) {
    if (!myList.empty()) {
        auto lastNode = myList.end(); // Iterator pointing to the "past-the-end" element
        --lastNode;  // Get the iterator to the last node

        // Make the last node point to the first node to make the list circular
        lastNode = myList.begin();
        // OR you can use the std::advance function:
        // std::advance(lastNode, -1);

        *lastNode = myList.front(); // Set the value of the last node to the first node
    }
}

int main() {
    std::list<int> myList = {1, 2, 3, 4, 5};

    // Make the list circular
    makeCircular(myList);

    // Now myList acts like a circular linked list
    for(auto it:myList)
    {
        cout<<it<<endl;
    }    

    for(auto it=myList.begin();it!=myList.end();it++)
    {
        cout<<(*it)<<endl;
    }
    return 0;
}

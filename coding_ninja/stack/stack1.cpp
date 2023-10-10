#include <bits/stdc++.h>
#include <climits>
using namespace std;
class StackUsingArray
{

    int *data;
    int nextIndex;
    int capacity;

public:
    StackUsingArray(int totalsize)
    {
        data = new int[totalsize];
        nextIndex = 0;
        capacity = totalsize;
    }
    // size of the elemnent present
    int size()
    {
        return nextIndex;
    }

    // isempty or not
    bool isEmpty()
    {
        return nextIndex == 0;
    }

    // insert element
    void push(int element)
    {
        if (nextIndex==capacity)
        {
            cout << "STACK is full" << endl;
            return;
        }
        data[nextIndex] = element;
        nextIndex++;
    }

    // delete element

    int pop()
    {
        if (isEmpty())
        {
            cout << "STACK is empty" << endl;
            return INT_MIN;
        }
        nextIndex--;
        return data[nextIndex];
    }

    // read element

    int top()
    {
        if (isEmpty())
        {
            cout << "STACK is empty" << endl;
            return INT_MIN;
        }

        return data[nextIndex - 1];
    }
};


int main()
{
    StackUsingArray s(4);
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    s.push(70);

    cout << s.top() << endl;
    cout << s.isEmpty() << endl;
    cout << s.size() << endl;
    cout<<s.pop()<<endl;
    cout<<s.pop()<<endl;
    cout<<s.pop()<<endl;
    cout << s.top() << endl;
    cout << s.isEmpty() << endl;
    cout << s.size() << endl;
}
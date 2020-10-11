#include <bits/stdc++.h>
using namespace std;

int main()
{
    stack<int> st;
    cout << st.size() << endl;
    st.push(10);
    st.push(20);
    st.push(30);
    cout << st.size() << endl;

    while (!st.empty())
    {
        cout << st.top() << " ";
        st.pop();
    }
    cout << '\n';
    st.push(20);

    while (!st.empty())
    {
        cout << st.top() << " ";
        st.pop();
    }
    cout << '\n';
    cout << st.size();
}

/*

Stacks are a type of container adaptors with LIFO(Last In First Out) type of working, where a new element is added at one end and (top) an element is removed from that end only.
 
The functions associated with stack are:
empty() – Returns whether the stack is empty – Time Complexity : O(1)
size() – Returns the size of the stack – Time Complexity : O(1)
top() – Returns a reference to the top most element of the stack – Time Complexity : O(1)
push(g) – Adds the element ‘g’ at the top of the stack – Time Complexity : O(1)
pop() – Deletes the top most element of the stack – Time Complexity : O(1)

*/
#include <bits/stdc++.h>
using namespace std;

class Person
{
public:
    int age;
    string name;
    bool operator<(const Person &rhs) const { return age < rhs.age; }
    bool operator>(const Person &rhs) const { return age > rhs.age; }
};

int main()
{
    set<Person, greater<Person>> s1 = {{23, "Addy"}, {22, "Bhaskar"}, {24, "Amit"}};
    for (auto &i : s1)
    {
        cout << i.age << ":" << i.name << endl;
    }
}
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

class Address
{
public:
    int house;
    string address;
    bool operator<(const Address &rhs) const { return house < rhs.house; }
    bool operator>(const Address &rhs) const { return house > rhs.house; }
};

int main()
{
    set<Person, greater<Person>> s1 = {{23, "Addy"}, {22, "Bhaskar"}, {24, "Amit"}};
    set<Address, greater<Address>> s2 = {{101, "Bangalore"}, {201, "Kolkata"}, {301, "Delhi"}};

    for (auto &i : s1)
    {
        cout << i.age << ":" << i.name << endl;
    }

    for (auto &i : s2)
    {
        cout << i.house << ":" << i.address << endl;
    }
}
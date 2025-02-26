#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string name;
    int id;
    Student(string name, int id)
    {
        this->name = name;
        this->id = id;
    }
};

class cmp
{
public:
    bool operator()(Student a, Student b)
    {
        if (a.name > b.name)
        {
            return true;
        }
        else if (a.name == b.name)
        {
            if (a.id < b.id)
            {
                return true;
            }
            else
            {
                return false;
            }
        }
        else
        {
            return false;
        }
    }
};

int main(int argc, char const *argv[])
{
    int n;
    cin >> n;
    priority_queue<Student, vector<Student>, cmp> pq;
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        int id;
        cin >> id;

        Student new_obj(s, id);
        pq.push(new_obj);
    }
    while (!pq.empty())
    {
        cout << pq.top().name << " " << pq.top().id << endl;
        pq.pop();
    }

    return 0;
}

// DONE
// Accepted
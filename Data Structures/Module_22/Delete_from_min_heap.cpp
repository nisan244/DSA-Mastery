// 22 - 7 Delete From Heap Implementation

#include <bits/stdc++.h>
    using namespace std;

void insert_heap(vector<int> &v, int x)
{
    v.push_back(x);
    int curent_inx = v.size() - 1;

    while (curent_inx != 0)
    {
        int parent_inx = (curent_inx - 1) / 2;
        if (v[parent_inx] > v[curent_inx])
        {
            swap(v[parent_inx], v[curent_inx]);
        }
        else
        {
            break;
        }
        curent_inx = parent_inx;
    }
}

void delete_heap(vector<int> &v) // O(log N)
{
    v[0] = v[v.size() - 1];
    v.pop_back();
    int curent = 0;
    while (true)
    {
        int left_inx = curent * 2 + 1;
        int right_inx = curent * 2 + 2;
        int last_inx = v.size() - 1;
        if (left_inx <= last_inx && right_inx)
        {
            // duitai ache
            if (v[left_inx] <= v[right_inx] && v[left_inx] < v[curent])
            {
                swap(v[left_inx], v[curent]);
                curent = left_inx;
            }
            else if (v[right_inx] <= v[left_inx] && v[right_inx] < v[curent])
            {
                swap(v[right_inx], v[curent]);
                curent = right_inx;
            }
            else
            {
                break;
            }
        }
        else if (left_inx <= last_inx)
        {
            // left ase
            if (v[left_inx] < v[curent])
            {
                swap(v[left_inx], v[curent]);
                curent = left_inx;
            }
            else
            {
                break;
            }
        }
        else if (right_inx <= last_inx)
        {
            // right ase
            if (v[right_inx] < v[curent])
            {
                swap(v[left_inx], v[curent]);
                curent = right_inx;
            }
            else
            {
                break;
            }
        }
        else
        {
            break;
        }
    }
}

int main(int argc, char const *argv[])
{
    vector<int> v;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        insert_heap(v, x);
    }
    // delete_heap(v);
    delete_heap(v);

    for (int val : v)
    {
        cout << val << " ";
    }

    return 0;
}

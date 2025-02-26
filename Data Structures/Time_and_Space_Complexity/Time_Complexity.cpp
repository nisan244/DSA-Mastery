// 1
int a = 0, b = 0;
for (int i = 0; i < n; i++)
{
    a = a + rand();
}
for (int i = 0; i < m; i++)
{
    b = b + rand();
}
// Time Complexity : O(n+m)

//------------------------------

// 2
int a = 0;
for (int i = 0; i < n; i++)
{
    for (int j = n; j > i; j--)
    {
        a = a + i + j;
    }
}
// Time Complexity : O(n^2)

//------------------------------

// 3
int k = 0;
for (int i = n/2; i <= n; i++)
{
    for (int j = 2; j <= n; j = j*2)
    {
        k = k + n/2;
    }
}
// Time Complexity : O(n log(n))
// n /= k   O(log,k (n))
// i *= k   O(log,k (n))

//-------------------------------------

// 4
int k = 0;
for (int i = 0; i < n; i++)
{
    i *= k
}

// Time Complexity : O(log,k (n))

//-------------------------------------

// 5
int val = 0;
for (int i = 0; i < n; i++)
{
    for (int j = 0; j < i; j++)
    {
        val += 1;
    }
}
// Time Complexity : O(n^2)

//-------------------------------------

// 6
int val = 0;
for (int i = 0; i < n; i *= 2)
{
    for (int j = 0; j < i; j++)
    {
        val += 1;
    }
}
// Time Complexity : O(n log(n))

//-------------------------------------

// 7
for (int i = 0; i < n; i++)
{
    cout << i << endl;
}
for (int j = 0; j < n; j++)
{
    cout << j << endl;
}
// Time Complexity : O(n + m)

//-------------------------------------

// 8
for (int i = n/2; i < n; i++)
{
    for (int j = 0; j < n; j *= 2)
    {
        cout << i << j << endl;
    }
}
// Time Complexity : O(n log(n))

//------------------------------

// 9
if(i > j)
{
    j == 0 ? j++ : j--;
}
// Time Complexity : O(1)

//-----------------------------------

// 10
for (int i = 0; i < n; i++)
{
    for (int j = i; j  > 0; j--)
    {
        cout << i << j << endl;
    }   
}
// Time Complexity : O(n * m)

//-------------------------------

// 11
void fun(int n)
{
    int i = 1, s = 1;
    while (s < n)
    {
        s = s + i;
        i++;
    }
}
// Time Complexity : O(root(n))

//---------------------------------------

// 12
void fun(int n)
{
    if(n < 5)
    {
        cout << "Phitron" << endl;
    }
    else
    {
        for (int i = 0; i < n; i++)
        {
            cout << i << endl;
        }
        
    }
}
// Time Complexity : Best case O(1) , Worst case O(n)

//-----------------------------------------------

// 20
int fib(int n)
{
    if(n <= 1)
        return n;
    return fib(n - 1) + fib(n - 2);
}


// Time Complexity : O(2^n)

//-----------------------------

// 21
void selection_Sort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int min_inx = i;
        for (int j = i + 1; j < n; j++)
        {
            if(arr[j] < arr[min_inx])
            {
                min_inx = j;
            }
        }
        swap(arr[i], arr[min_inx]);
        }
}
// Time Complexity : O(n^2)

//---------------------------------------

//22
for (i = 1; i ^ 2 <= n; i = i + 2)

// Time Complexity : O(log n)

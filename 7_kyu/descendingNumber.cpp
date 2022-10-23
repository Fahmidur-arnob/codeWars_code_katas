#include <bits/stdc++.h>
using namespace std;
void print_(int a) { cerr << a; }
void print_(long long a) { cerr << a; }
void print_(char a) { cerr << a; }
void print_(string a) { cerr << a; }
void print_(bool a) { cerr << a; }
void print_(double a) { cerr << a; }
void print_(long double a) { cerr << a; }
void print_(unsigned long long a) { cerr << a; }
template <class T>
void print_(vector<T> t)
{
    cerr << "[ ";
    for (T i : t)
    {
        print_(i);
        cerr << " ";
    }
    cerr << "]";
}
template <class T, class V>
void print_(map<T, V> t)
{
    cerr << "[ ";
    for (auto i : t)
    {
        print_(i);
        cerr << " ";
    }
    cerr << "]";
}
template <class T>
void print_(set<T> t)
{
    cerr << "[ ";
    for (T i : t)
    {
        print_(i);
        cerr << " ";
    }
    cerr << "]";
}
template <class T, class V>
void print_(pair<T, V> p)
{
    cerr << "{";
    print_(p.first);
    cerr << ",";
    print_(p.second);
    cerr << "}";
}
template <class T>
void print_(multiset<T> t)
{
    cerr << "[ ";
    for (T i : t)
    {
        print_(i);
        cerr << " ";
    }
    cerr << "]";
}
#ifndef ONLINE_JUDGE
#define debug(x)         \
    cerr << #x << " = "; \
    print_(x);           \
    cerr << '\n';
#else
#define debug(x)
#endif
bool prime(int n)
{
    if (n < 2)
        return false;
    if (n <= 3)
        return true;
    if (n % 2 == 0)
        return false;
    for (int i = 3; i * i <= n; i += 2)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}
// Prime_Num till N:- it takes any num and prints all the primes till that num:-
bool isPrime(int n)
{
    if (n <= 1)
    {
        return false;
    }
    if (n <= 3)
    {
        return true;
    }
    // this is checked so that we can skip middle five numbers in below loop:-
    if (n % 2 == 0 || n % 3 == 0)
    {
        return false;
    }
    for (int i = 5; i * i <= n; i = i + 6)
    {
        if (n % i == 0 || n % (i + 2) == 0)
        {
            return false;
        }
    }
    return true;
}
void printPrime(int n)
{
    for (int i = 2; i <= n; i++)
    {
        if (isPrime(i))
        {
            cout << i << " ";
        }
    }
}
// Find all factors of a natural number:-
void pDivisors(int n)
{
    for (int i = 1; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            if (n / i == i)
            {
                cout << i << " ";
            }
            else
            {
                cout << i << " " << n / i << " ";
            }
        }
    }
}
int max(int x, int y) { return (x > y) ? x : y; }
int lowest_common_Multiple(int a, int b)
{
    return a / __gcd(a, b) * b;
}

#define ll long long
#define INF 1e18 + 9
#define YES "YES"
#define NO "NO"
#define endl '\n'
#define M 1000000007
#define MAX 1000001
#define bitcount __builtin_popcountll
#define ull unsigned long long int
#define Integer_MAX_VALUE 0x7fffffff
#define Integer_MIN_VALUE 0x80000000
#define Long_MAX_VALUE 0x7fffffffffffffffL
#define Long_MIN_VALUE 0x8000000000000000L
#define pie 3.14159265358979323846
#define pb push_back
#define mp make_pair

int ten (int p){
    int ans = 1;
    while(p--)  ans *= 10;
    return ans;
}

uint64_t descendingOrder(uint64_t a){
    int rev_num = 0;
    while (a > 0) {
        rev_num = rev_num * 10 + a % 10;
        a = a / 10;
    }
    return rev_num;
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cout << descendingOrder(45454);


    return 0;
}
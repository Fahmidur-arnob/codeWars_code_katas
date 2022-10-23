#include <iostream>
#include <algorithm>
#include <array>
#include <bitset>
#include <cassert>
#include <chrono>
#include <cmath>
#include <cstring>
#include <functional>
#include <iomanip>
#include <map>
#include <numeric>
#include <queue>
#include <random>
#include <set>
#include <vector>
using namespace std;

#define ll long long
#define INF 1e18+9
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

bool is_square(int n){
    //Find floating point value of square root of n;
    if(n >= 0){
        ll squareRoot = sqrt(n);

        //if the product of square root n is equal to to n then it should return True or False;

        return (squareRoot * squareRoot == n);
    }
    //else return false;
    return false;
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); 
    cout.tie(0);
    int n;
    cin >> n;

    if(is_square(n)) cout << YES << endl;
    else cout << NO << endl;
}
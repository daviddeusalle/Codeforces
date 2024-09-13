#include<bits/stdc++.h>
#include <cstring>
#define ll              long long
#define ull             unsigned long long
#define pb              push_back
#define fastread()      (ios_base:: sync_with_stdio(false),cin.tie(NULL));
using namespace std;

void swap(char arr[]) {
  int n = strlen(arr); 
    for (int i = 0; i < n / 2; i++) {
        char temp = arr[i];
        arr[i] = arr[n - i - 1];
        arr[n - i - 1] = temp;
    } 
}


int main()
{
    fastread();
    
    char str[100000];
    cin >> str;
    cout << str;
    swap(str);
    cout << str <<endl;

    return 0;
}

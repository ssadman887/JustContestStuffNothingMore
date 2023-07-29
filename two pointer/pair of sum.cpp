#include<bits/stdc++.h>
using namespace std;

int val1 ,val2;

bool solve(int a[], int x, int n){
    int i= 0;
    int j= n - 1;
    while (i<j){
        int sum = a[i] + a[j];
        if(sum == x) {
            val1 = a[i];
            val2 = a[j];
            
            return true;
            }
        else if (sum> x) j--;
        else i++;
    }

    return false;
}
int main()
{
    int n;
    std::cin >> n;

    int* a = new int[n];

    for (int i = 0; i < n; i++)
    {
        std::cin >> a[i];
    }

    std::sort(a, a+n);



    int x;
    cin >> x;
    bool ans = solve(a,x,n);
    if(ans){ cout<< "Yes\n";
    cout<<"The pair is ("<<val1<<","<<val2<<")";}
    else cout << "No";


    return 0;
}
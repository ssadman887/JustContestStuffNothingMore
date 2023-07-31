#include<bits/stdc++.h>
using namespace std;
vector<long long> algo(long long n){
    vector <long long> sequence;
    sequence.push_back(n);

    while(n !=1){
        if((n%2)==0.0 ){
            //even number
            n /= 2;

    }
    else{
        //odd number
        n=3*n+1;

    }
    sequence.push_back(n);
}
    return sequence;
}

int main()
{
    long long n;
    cin >>n ;
    vector<long long> res = algo(n);
    for (auto i :res) {
        cout<< i<<" ";
    }
    cout<< endl;


    return 0;
}

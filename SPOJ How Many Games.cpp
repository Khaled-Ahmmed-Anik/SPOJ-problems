
/*  
    problem: GAMES - How Many Games?
    OJ: SPOJ
    Problem link: https://www.spoj.com/problems/GAMES/
*/

#include <bits/stdc++.h>
using namespace std;

void solve() {
    string s, avg;

    long long noDecDigit=0, isDec=0 , denominator,gcd, numinator;

    cin>>s;

    for(int i=0;i< s.size();i++){
        if(isDec)noDecDigit++;//counting number of digits after decimal
        if (s[i]=='.')isDec=1;// check '.' got or not
        if (s[i]!='.')avg+=s[i];//taking average(s) string in avg without "."
    }

    denominator = ceil(pow(10,noDecDigit)); //calculate 10^(no of digits after decimal)

    numinator=stoi(avg); // convert avg string to long long

    gcd=__gcd(numinator,denominator);// find the gcd

    cout<<denominator/gcd<<"\n"; 

}

int main() {
    int t = 1;
    cin>>t;

    //test case
    while (t--)
        solve();
}

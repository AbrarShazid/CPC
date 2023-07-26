#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double dl;
#define endl '\n'
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define lk() cout.unsetf(ios::floatfield);cout.precision(3);cout.setf(ios::fixed,ios::floatfield);
int person[61];
int main() {
    optimize();
    lk();

string s;
cin>>s;
int a=s[0];

if(a<58){
    cout<<"IS DIGIT"<<endl;
}
else if (a>60 && a<91){
    cout<<"ALPHA"<<endl;
    cout<<"IS CAPITAL"<<endl;
}
else{  cout<<"ALPHA"<<endl;
    cout<<"IS SMALL"<<endl;

}


return 0;

}

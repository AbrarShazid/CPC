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

int a,b,c;
cin>>a>>b>>c;


if(a<=b && a<=c){
    cout<<a;
if(b>c){
    cout<<" "<<b<<endl;
}
else{
    cout<<" "<<c<<endl;
}


}
else if(b<=a && b<=c){
    cout<<b;
    if(a>c){
    cout<<" "<<a<<endl;
}
else{
    cout<<" "<<c<<endl;
}
}
else{
    cout<<c;
    if(a>b){
        cout<<" "<<a<<endl;
    }
    else{
        cout<<" "<<b<<endl;
    }
    
}



return 0;

}

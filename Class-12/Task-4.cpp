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


int p,q,y;
cin>>p>>q>>y;
ll weeks=y*52;
ll nday=((weeks*5)*p);
ll weekend=((weeks*2)*q);
ll total=nday+weekend;
cout<<total<<endl;

return 0;

}

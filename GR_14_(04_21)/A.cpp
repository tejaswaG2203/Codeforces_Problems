#include<bits/stdc++.h>
using namespace std;
#define ll long long int

void weight_gold(){
    ll n,x;
    cin>>n>>x;
    vector<ll> v;
    for(int i=0;i<n;i++){
        ll temp;
        cin>>temp;
        v.push_back(temp);
    }

    if(n<2){

    }
    else{
    ll sum=0;
    for(int i=0;i<n-1;i++){
        sum+=v[i];
        if(sum==x){
            sum-=v[i];
            swap(v[i],v[i+1]);
            break;
        }
        
    }
    
    }

}

 int main(){
     int t;
     cin>>t;
     while(t--){
         weight_gold();
     }
     return 0;
 }
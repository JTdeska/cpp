#include <bits/stdc++.h>

using namespace std;

int main() {
    int a,hf,lp;
    int A=101,B=-1;
    cin>>a;
    int b[a];
    for(int i=0;i<a;i++)
        cin>>b[i];
    sort(b,b+a);
    for(int i=0;i<a;i++)
        cout<<b[i]<<" ";
    cout<<endl;
    for(int i=0;i<a;i++){
        if(b[i]>=60 && b[i]<A){
            lp=b[i];
            A=b[i];
        }
        if(b[i]<60 && b[i]>B){
            hf=b[i];
            B=b[i];
        }
    }
    if(B==-1)
        cout<<"best case"<<endl;
    else
        cout<<hf<<endl;

    if(A==101)
        cout<<"worst case";
    else
        cout<<lp;
    return 0;
}

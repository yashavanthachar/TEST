#include<iostream>
using namespace std;

int main(){

int n;
cout<<"Enter the number"<<endl;
cin>>n;
for(int i=0;i<n;i++){
    cout<<(2*i+1);
    if(i!=n-1){
        cout<<",";
    }
}
cout<<endl;
return 0;
}

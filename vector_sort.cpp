#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
int n;
cout<<"Enter the number of n\n";
cin>>n;


vector<int>v(n);
cout<<"Enter the element of vector\n";

for(int i=0; i<n; i++){
    cin>>v[i];
}

sort(v.begin(),v.end());

cout<<"Vector in asseending order ";



for(int x:v){
    cout<<x<<" ";
}
cout<<endl;

cout<<"Vector in dessending order  ";
sort(v.begin(), v.end(), greater<int>());
for(int x:v)
{
    cout<<x<<" ";
}
return 0;
}

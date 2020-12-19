#include<iostream>
using namespace std;

class myarray{
int n;
int arr[100];
public:

myarray(){
    cout<<"ENTER THE SIZE OF ARRAY : ";
    cin>>n;
for(int i=0 ;i<n ; i++){
    arr[i]=0;
}
}
void readar(){
    cout<<"\nENTER THE ARRAY ELEMENTS : ";
for(int i=0 ;i<n; i++){
    cin>>arr[i];
}
}
void dis(){
    cout<<"\nYOUR DATA ARE HERE :--";
for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
}
cout<<"\n";
}
int binary(int);
};

int  myarray ::binary(int s){
int first=0 , last=n-1;
for(int i=0 ; i<n; i++){
   int mid=(first+last)/2;
    if(arr[mid]==s){
        return mid;
    }
    else if(arr[mid] > s){
        last=mid-1;
    }
    else {
        first = mid+1;
    }
}

}

int main(){

myarray a;

a.readar();
a.dis();
int n;
cout<<"\n\nENTER THE SEARCH ELEMENT IN YOUR ARRAY  : ";
cin>>n;
int y= a.binary(n);
cout<<"\n\nSEARCH ELEMENT IS FOUND ON  "<<y+1<<"TH  INDEX OF ARRAY \n\n";
}

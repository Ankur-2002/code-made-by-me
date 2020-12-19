#include<iostream>
using namespace std;

int check(int *a){
int ch;
for(int i=1 ;i<10; i++){
    if(a[i-1] < a[i]){
    ch=1;
     //check ascending order
    }
    else
    {
        ch=-1;
        break;
    }
}
if(ch==1){
        return 1;
//break;
    }
    //ch=0;
for(int i=0; i<9 ;i++){
    if(a[i]>a[i+1]){
        ch=-1;  // descending order check .
    }
    else {
        ch=0;
        break;
    }
}

if(ch==-1){
    return -1;
}

return 0;
}





int main(){
	int a[10];
	for(int i=0; i<10; i++){
        cin>>a[i];
	}

	int re=check(a);

	//cout<<re;
	if(re==1){
        cout<<"your array follow the ascending order!! ";
	}
	else if(re==-1){
        cout<<"your array follow the descending order!! ";
	}
	else
        cout<<"your array is not sorted ";
	return 0;

}

#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int findhcf(int a, int b){
    int min,hcf;
    if(a<b){
    min=a;
	}
    else{
    min=b;
	}
    for(int i=1; i<=min; i++){
        if(a%i==0 && b%i==0){
            hcf=i;
        }
    }
return hcf;
}

int findlcm(int a , int b){
int max;
if(a<b){
max=b;
}
else{
max=a;
}
for(int i=max; i<=a*b; i++){
    if(i%a==0 && i%b==0){
        return i;
    }
    }
return 1;
}


int main(){
	int n,m,lcm,Hcf;
	cin>>n>>m;
	int arr[n];
	int arr1[m];
	for(int i=0; i<n; i++){
  	  cin>>arr[i];
	}
	for(int i=0; i<m; i++){
    	cin>>arr1[i];
	}
	lcm = arr[0];	

    	if(n>=2){
    	int a = arr[0];
    	int b = arr[1];
	lcm = findlcm(a,b);
	
	for(int i=2; i<n; i++){
	lcm=findlcm(lcm,arr[i]);
	}
	}
	Hcf = arr1[0];

	if(m >=2){
   	 int c=arr1[0];
   	 int d=arr1[1];
   	 
	Hcf = findhcf(c,d);
	
  	  for(int i=2; i<m; i++){
  	  Hcf = findhcf(Hcf,arr1[i]);
  	  }
  	  }
	
	
   //cout<<lcm<<" "<<Hcf;
int cou=0;

for(int i=lcm; i<=Hcf; i++){
        int j;
    for(j=0; j<m ; j++){
        if(arr1[j]%i!=0){
          break;
          }
          }
    if(j==m){
        cou++;
    }
        }

cout<<cou;
return 0;

}

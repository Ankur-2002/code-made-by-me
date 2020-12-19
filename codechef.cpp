#include <iostream>
using namespace std;

int main() {
    
    
    int nn;
    cin>>nn;
    
    while(nn--){

    long long int n,r,g,b;
    cin>>n>>r>>g>>b;
    
    long long int put = 0;
    
    n = min(n,min(r,b)); 
//cout<<n;                      
    put = min(r,min(g,b));
    r-=put;
    g-=put;
    b-=put;
    
    if(r > 0 && b > 0){
    put = put+((r+b)/3);
}

    if(put > n)
    cout<<n<<"\n";
    
    else
    cout<<put<<"\n";
    
    }
	return 0;
}

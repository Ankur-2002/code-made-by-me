#include<bits/stdc++.h>

using namespace std;

int main(){

vector<vector<int>>arr={{1,2},{1,3},{2,4}};

unordered_map<int,int>friends,dis;

        //map<int,int>friends,dis;
        
        if(arr.size()==0)
            return true;
       friends[arr[0][0]]=arr[0][0];
        dis[arr[0][1]] = arr[0][1];
        
        for(int i=1; i<arr.size(); i++)
        {
           
            bool fx;
            bool fy;
            bool fxx;
            bool fyy;
    
            
              
           
            if(dis[arr[i][0]]!=0)
              fy = true; 
                else 
                fy = false;
           
             if(friends[arr[i][1]]!=0)
                fxx = true;
            else
                fxx = false;
           if(dis[arr[i][1]]!=0)
             fyy = true;
            else
                fyy = false;
            //return 0;
            break;
            if( (fx==false && fy==false) && (fxx==false && fyy==false) )
            {
              //  break;
                friends[arr[i][0]]=arr[i][0];
                dis[arr[i][1]]=arr[i][1];
            break;
            }
            else if(fx==false && fy == true)
            {
               // break;
                if(fxx==false && fyy==true){}
                  //  return false;
                else 
                {
                    friends[arr[i][1]]=arr[i][1];
                    //dis[arr[i][1]]=arr[i][1];
                }
            }
            else if(fx==true && fy==false){
               // break;
                if(fxx==true && fy==false){
}
                //    return false;
                else{
                    dis[arr[i][1]]=arr[i][1];
                }
            }
        
               // cout<<arr[0][0] <<" " << arr[0][1] << "\n";
        }
        
        
        for(auto i : friends){
            cout << i.first << " ";
        }
        cout << "\n";
        for(auto i : dis){
            cout << i.first << " ";
        }
       // cout << dis.size() << " " << friends.size();
        


return 0;
}
#include<iostream>
using namespace std;
 

 
int main()
{
 
 int t ; 
 cin>>t ; 
 int x=0 ; 

 while (t-- ){

    string s = "";
    cin>>s;
    for(int i =0 ; i <s.size(); i++){
        if (s[i] == '+'){
            x++;
            break;

        }
        
        else if(s[i] == '-'){
            x--;
            break;
        }
        
    }

    



 }
 cout<<x;

 
return 0;
}
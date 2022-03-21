#include <iostream>
 
using namespace std;
int z;
bool divi(int prev,int depth){
    if(depth==4){
        return false;
    }else{
        if(prev==0){
            return (z%4==0)||(z%7==0)||divi(4,depth+1)||divi(7,depth+1);
        }else{
            return (z%prev==0)||divi(10*prev+7,depth+1)||divi(10*prev+4,depth+1);
        }
    }
}
int main()
{
   int x=10;
    int n;
    cin>>n;
    z=n;
 
    if(divi(0,1)){
        //multiple de 7 ou 4
        cout<<"YES";
        exit(0);
    }
    while(n!=0){
        if(n%10!=7 && n%10!=4){
            // ayant un chiffre quelconque (not 4 or 7)
            cout<<"NO";
            exit(0);
        }
        n/=10;
    }
    // ayant des 7 et 4 seulement
    cout<<"YES";
    return 0;
}


#include <iostream>
#include <cmath>
#include <vector>
using namespace std;


int max_of_four(int a,int b,int c,int d ){
   
    if(a<b){
        if(b>c){
            if(b>d){
                return b;
                
            }else return d;
        }else{
            if(c>d){
                return c;
            }else{
                return d;
            }
            
        }
        
    }else return a;
    {
        if(a>c){
            if(a>d){
                return a;
            }else{
                return d;
            }
        }else{
            if(c>d){
                return c;
            }else {
                return d;
            }
        }
    }
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    int result=max_of_four(a,b,c,d);
    
    
    
   cout <<result;
}
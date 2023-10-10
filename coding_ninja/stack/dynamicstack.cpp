//using template
#include <bits/stdc++.h>
using namespace std;


template <typename T>
class stackusingarray{
    T*data;
    int nextIndex;
    int capacity;
    public: 
        stackusingarray(){
            data=new T(4);
            nextIndex=0;
            capacity=4;
        }
        int size(){
            return nextIndex;
        }
        bool isempty(){
            return nextIndex==0;
        }
        T pop(){
            if(nextIndex==0){
                cout<<"stack empty"<<endl;
                return 0;
            }
            nextIndex--;
            return data[nextIndex];

        }
        T top(){
            if(isempty()){
                cout<<"stack is empty"<<endl;
                return 0;
            }
            return data[nextIndex-1];

        }

        void push(T element){
            if(nextIndex==capacity){
                T *newData=new T[2*capacity];
                for (int i = 0; i < capacity; i++)
                {
                    newData[i]=data[i];
                }capacity*=2;
                delete [] data;
                data=newData;
                
            }data[nextIndex]=element;
            nextIndex++;
        }


};
int main(){
    stackusingarray <int> s;//we also use char or float or other user defined data types
    s.push(10);
    s.push(40);
    s.push(50);
    s.push(30);
    s.push(20);

    cout<<s.top()<<endl;
    cout<<s.pop()<<endl;
    cout<<s.size()<<endl;
    cout<<s.isempty()<<endl;
    
}
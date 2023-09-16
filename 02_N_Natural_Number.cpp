//Print N Natural Number

//10 => 1,2,3,4,4,5.....10
#include<iostream>
using namespace std;

int main(){

    int number;

    cout<<"Enter the numebr: ";
    cin>>number;


    cout<<"The N natural Number is: ";
    // for(int i = 1;i<=number;i++){
    //     cout<<i<<" ";
    // }

    // int i = 1;
    // while (i<=number)
    // {
    //     cout<<i<<" ";
    //     i++;
    // }

    int i= 1;
    do{
        cout<<i<<" ";
        i++;
    }while (i<=number);
  
    
    
    
    return 0;
}
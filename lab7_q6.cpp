//add the library
#include<iostream>
#include<cmath>
using namespace std;

//defining the recursive function
int reverse(int n,int i){
    if(i==1){
        return n;}
    else {
        //recursive statement
        int r=n%10;
        return r*pow(10,i-1)+reverse(n/10,i-1);
    }}
    
//main
int main(){
    //declaring the variables
    int num;
    
    //taking input
    cout<<"Enter the number: ";
    cin>>num;
    
    //checking the number of digits
    int x=num;
    int i=0;
    while(x>0){
        x=x/10;
        i+=1;}
    
    //calling the recursive function
    cout<<reverse(num,i);
    return 7;
}
//add the library
#include<iostream>
#include<stdio.h>
using namespace std;

//main
int main(){
	//declaring the string variables and its pointer
	char str[20], *p;
	
	//taking input of string
	cout<< "Input about 10 characters of string : ";
	cin>>str;
	
	//pointing the pointer to the 1st element of the string
	p=str;
	
	//moving the pointer to the last element	
	while (*p!='\0'){
		p++;
	}
	
	//printing the pattern
	while (p>=str){
		cout<<p--<<endl;
	}
	return 7;
}

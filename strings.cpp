// Different operation on string (char array)
// Created by Ishan grover on 07/04/2023

#include<iostream>
using namespace std;

int get_Length(char str[]){                 //for getting length of string
  int length=0;
  for (int i=0; str[i]!='\0' ;i++){            //Logic of '\0' --> string is declared of 20 blocks but we input name Ishan which is of 5 blocks..
    length++;                                 //   ..then the 6th block having '\0' indicating program to break from here
  }
  return length;
}

void reverse_String(char s[]) {              //For printing this reversed i/p string
    int end = get_Length(s) - 1;
    int start = 0;
    while(end>start){
        swap(s[start++],s[end--]);           //LOGIC --> we are swaping the starting and end terms like there are 5 elements then swap (0,4),(1,3),(2)
    }
  cout<<s;
}

bool palindrome(char s[]){                             //Processing --> will continue soon
  int start = 0;
  int end = get_Length(s) - 1;
  bool ans = False;
  for(int i=0 ; i<get_length(s) ; i++){
    if (s[start++] == s[end--]){ans=True;}
  }
  return ans;
}
int main(){
  //declaration of string or we can say char array
  char str[20];
  cin>>str;      //can take directly whole string in one input
  
	return 0;
}

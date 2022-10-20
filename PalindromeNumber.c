//PROGRAM TO CHECK IF THE NUMBER ENTERED BY THE USER IS PALINDROME OR NOT
//A PALINDROME NUMBER IS ONE WHICH IS EQUAL TO ITS REVERSE
//Example - 121 , 4, 151 are PALINDROME
#include<stdio.h>
int main(){
  //TAKE INPUT FROM THE USER
  int n,temp,rev=0;
  printf("ENTER THE NUMBER\n");
  scanf("%d",&n);
  //STORE THE NUMBER IN A TEMPORARY VARIABLE
  temp=n;
  while(temp!=0){
    //EXTRACT THE LAST DIGIT OF NUMBER IN TEMPORARY VARIABLE
    int d=temp%10;
    //UPDATE rev
    rev=rev*10+d;
    //UPDATE temp
    temp=temp/10;
  }
  //CHECK IF NUMBER IS PALINDROME OR NOT
  if(rev==n)
    printf("%d is a palindrome number\n",n);
  else
    printf("%d is not a palindrome number\n",n);
}

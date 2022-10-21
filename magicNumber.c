/*When the sum of all the given digits of a number and
the reverse of that sum is multiplied, which is equal to the original number, and then the number is called a magic number.*/
#include<stdio.h>
int main(){
  int n,temp,sum=0,rev=0,mn;
  //Take input of the number from the user
  printf("Enter the number\n");
  scanf("%d",&n);
  temp=n;
  //Find the sum of all the given digits of the number
  while(temp!=0){
    int d=temp%10;
    sum+=d;
    temp/=10;
  }
  //Find the reverse of the sum
  temp=sum;
  while(temp!=0){
    int d=temp%10;
    rev=rev*10+d;
    temp/=10;
  }
  //Multiple sum with its reverse
  mn=sum*rev;
  if(mn==n)
    printf("%d is a Magic Number\n",n);
  else
    printf("%d is not a Magic Number\n",n);
  return 0;
}

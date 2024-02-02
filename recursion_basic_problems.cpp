#include <bits/stdc++.h>
using namespace std;
long summation_of_digits(long n,long s)
{
	if(n==0)
	{
		return s;
	}
	s+=n%10;
	summation_of_digits(n/10,s);
}
int GCD_of_two_numbers(int a,int b,int n)
{
	if(a%n==0 and b%n==0)
	{
		return n;
	}
	GCD_of_two_numbers(a,b,n-1);
}
void Array_printing_in_reverse_order(int* arr,int size)
{
	if(size<0)
	{
		return;
	}
    cout<<arr[size]<<" ";
	Array_printing_in_reverse_order(arr,size-1);
}
void reverse_of_a_string(string s,int i,int j)
{
	if(i>j)
	{
		cout<<"True"<<endl;
		return ;
	}
	if(s[i]!=s[j])
	{
		cout<<"False"<<endl;
		return ;
	}	reverse_of_a_string(s,i+1,j-1);
}
int Is_Armstrong(int nu,int s,int su)
{
	if(nu==0)
	{
		return s;
	}
	int k = su;
	int poo = nu%10,l=1;
	while(k)
	{
		l*=poo;
		k-=1;
	}
	s+=l;
	nu=nu/10;
	Is_Armstrong(nu,s,su);
}
int reverse_number(int you,int rev)
{
	if(you==0)
	{
		return rev;
	}
	reverse_number(you/10,rev*10+(you%10));
}
int main()
{
	// To calculate the summation of the digits in the given number
	long n;
	cin>>n;
	cout<<summation_of_digits(n,0)<<endl;
	// To find the GCD (Greatest Common Divisor) of two numbers.
	int a,b;
	cin>>a>>b;
	if(b>a) a,b=b,a;
	cout<<GCD_of_two_numbers(a,b,b)<<endl;
	// Print array in reverse order
	int k;
	cin>>k;
	int arr[k];
	for(int i=0;i<k;i++)
	{
		cin>>arr[i];
	}
	Array_printing_in_reverse_order(arr,k-1);
	cout<<endl;
	// Write a function to recursively check if a string is a palindrome.
	string d;
	cin>>d;
	reverse_of_a_string(d,0,d.size()-1);
	// Armstrong number  using recursion
	int ku;
	cin>>ku;
	int l=ku,su=0;
	while(l)
	{
		su+=1;
		l=l/10;
	}
	if(ku==Is_Armstrong(ku,0,su)){
		cout<<"Armstrong"<<endl;
	}
	else{
		cout<<Is_Armstrong(ku,0,su)<<endl;
		cout<<"Not an armstrong"<<endl;
	}
}
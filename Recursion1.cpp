#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int gcd_recur(int a,int b);
int gcd(int a,int b);
int fact_recur(int num);
int fact(int num);
int fibo_recur(int n,int a,int b);
int fibo(int n);
int power_recur(int a,int b);
int power(int a,int b);

int main()
{
    char ch;
    int n;
    int a,b;
    do
    {
        cout<<"\n Menu "
            <<"\n 1. GCD "
            <<"\n 2. FactoriaL "
            <<"\n 3. Power "
            <<"\n 4. Fibonacci ";
       cout<<"\n Enter your choice ";
       cin>>n;
       switch(n)
        {
            case 1: 
	                cout<<endl<<" Enter two numbers ";
	                cin>>a>>b;
	                    try{
	
	                            cout<<endl<<" Gcd of numbers with recursion is "<<gcd_recur(a,b);
	                            cout<<endl<<" Gcd of recur without recursion is "<<gcd(a,b);
                                }
                                catch(const char* str)
                                        {
                                            	cout<<str;
                                         }
                    break;
            case 2: int num;
                        cin>>num;
                        try{
                            cout<<"\n Factorial with recursion "<<fact_recur(num);
                            cout<<endl<<" Fact0rial is "<<fact(num);
                             }
                        catch(const char* str)
                            {
                        cout<<str;
                            }
                    break;
            case 3: 
                        cin>>a>>b;
                        try{
                            cout<<endl<<" Result with recursion is "<<power_recur(a, b);
                            cout<<endl<<" Result is "<<power(a , b);
                        }	
                        catch(const char* str)
                        {
                            cout<<str;
                        }
                    break;
            case 4: int n;
                    cin>>n;
                    try{
                        cout<<endl<<" Nth term of fibo series is "<<fibo_recur(n, 0, 1);
                        cout<<endl<<" Nth term of fib series is "<<fibo(n);
                    }
                    catch(const char* str)
                         {
                            cout<<str;
                        }
                    break;
        }
        cout<<"\n Do you want to continue Y/N";
        cin>>ch;
    }while(ch=='y' || ch=='Y');
}



int gcd_recur(int a, int b)
{   
	if(a<0 || b<0  )
	 throw "Invalid argument ";
	     
	else
	     if(b==0)
	      {
	      	return a;
		  }
		  else
		    {
		    	gcd_recur(b,a%b);
			}

			
}

int gcd(int a , int b)
{
	if(b<0||a<0)
	   throw "Invalid argument ";
	else
	  {
	  	int temp=0;
	  	while(b!=0)
	  	 {
	  	 	temp=a;
	  	 	a=b;
	  	 	b=temp%b;
		   }
		   return a;
	  }
	 
}
int fact_recur(int num)
{
	if(num<0)
		throw " Invalid argument ";
	
	  if(num == 1 || num==0)
	    	return 1;
	    else
	        return num*fact_recur(num-1); 	 
	
}

int fact(int num)
{
	int result=1;
	if(num<0)
		throw " Invalid argument ";
	else
	    {
	    	for( ; num>=1; num--)
	    	 result *= num;
	    	 return result;
		}
		
}

int power_recur(int a,int b)
{
	if(b==0)
		return 1;
	else
	  {
	  	return a*power(a,b-1);
	  }
}

int power(int a,int b)
{
	int ans=1;
	
	for(int i=1; i<=abs(b); i++)
 	   ans *= a ;
 	
 	if(b==0)
 	 return 1;
	if(b>0)
	   return ans;
}

int fibo_recur(int n, int a=0,int b=1)
{
	
	if(n<0)
     	throw " Invalid argumemnt ";
    if(n==1)
      return a;
    if(n==2)
       return b;
      return fibo_recur(n-1 , b , a+b);
}

int fibo(int n)
{
	if(n<=0)
		throw "invalid argument ";
	else
        {  
		if(n==1)
			return 0;
		else
		  if(n==2)
		    return 1;
		else
		   {
				int t1=0;
          		int t2=1,t3;
        			for( ; n>2;n--)
        			  {
        			  	t3=t1+t2;
        			  	t1=t2;
        			  	t2=t3;
					  }
					  return t2;
		   }
}
}

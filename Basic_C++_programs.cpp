#include<iostream>
#include<math.h>
using namespace std;
#define a main
int last_dig;


void sum_of_num(int num){
    int sum=0;
    while(num){
        last_dig=num%10;
        sum+=last_dig;
        num/=10;
    }
    cout<<"\nSum of the Entered Number Is:- "<<sum;
}
void reverse_num(int num){
    int rev=0;
    while (num)
    {
        last_dig=num%10;
        rev=rev*10+last_dig;
        num/=10;
    }
    cout<<"\nReversed Number Is :- "<<rev;
    
}
void check_armstrong(int num){
    int sum=0,temp;
    temp=num;
    while (num)
    {
        last_dig=num%10;
        sum+=last_dig*last_dig*last_dig;
        num/=10;
    }
    if(temp==sum)
    cout<<"\nNumber is Armstrong Number";
    else
    cout<<"\nNumber is Not an Armstrong Number";
    
}
void prime(int n){
    int i,flag=0;
    if(n==0||n==1){
        flag=1;
    }
    
    for(i=2;i<=n/2;i++){
        if(n%i==0){
        flag=1;
        break;
        }

    }
    
    if(flag==1)
        cout<<"\nNumber is Not Prime";
        else
        cout<<"\nNumber is Prime";
    
}
void fact(int n){
    int fact=1;
    for(int i=n;i>=1;i--)//for(int i=1;i<=n;i++)
    {
        fact=fact*i;
        
    }
    cout<<"\nFactorial"<<fact<<endl;
}
void dec_to_bin(int n){
    int power=0,bin=0;
    //binary to decimal
    while(n>0){
        last_dig=n%10;
        bin=bin+last_dig*pow(2,power);
        n/=10;
        power++;
    }
    cout<<"\nBinary Equalent"<<bin<<"\n";

}
void bin_to_dec(int n){
    int power=0,dec=0;
    while (n>0)
    {
        last_dig=n%2;
        dec=dec+last_dig*pow(10,power);
        n=n/2;
        power++;
    }
    cout<<"\nDecimal Equalent"<<dec<<"\n";
}
void matrix(){
    int r,c;
    cout<<"Enter Order:-  ";
    cin>>r>>c;
    int mat[r][c],t[r][c]; 
    cout<<"\nenter elements:- ";
    for(int i=0;i<r;i++)
        for(int j=0;j<c;j++)
            cin>>mat[i][j];
        
    cout<<"\nmatrix elements are:-";
    for(int i=0;i<r;i++){
        cout<<"\n\n";
        for(int j=0;j<c;j++){
            t[j][i]=mat[i][j];
            cout<<t[i][j]<<"  ";
        }
    }

}
int fib(int n){
   /* Using Recursion
    if(n<=1)
        return n;
    return fib(n-1)+fib(n-2);
    */

    // Without Recursion
    int f=0,s=1,sum;
    for(int i=2;i<=n;i++){
    sum=f+s;
    f=s;
    s=sum;
    }
    return s;

}
void power(){
    int res=1,base,exp;
    std::cout<<"Enter Base and Exp\n";
    cin>>base>>exp;
   // res=pow(base,exp);
    while(exp!=0){
    //for(int i=1;i<=exp;i++){
        res*=base;
        exp--;
    }
    std::cout<< res;
}
void tables(int num){
    for(int i=1;i<=10;i++){
        cout<<num<<" x "<<i<<" = "<<num*i<<endl;
    }
}
int a(){
    int n;
   // tables(n);
   // power();
    //matrix();
    //cout<<"Enter a Number:-  ";                                               
    //cin>>n;  
    //cout<<fib(n);               
    // dec_to_bin(6);                                                
    // bin_to_dec(787897);                         
    // fact(n);                               
    // prime(n);                              
    // sum_of_num(n);                         
    // reverse_num(n);                        
    // check_armstrong(n);
return 0;
}

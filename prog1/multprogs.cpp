#include<iostream>

using namespace std;

int eve_odd(int);
int p_np(int);
int fact(int);
int table(int);
int pal(int);
int arm(int);
int fabo(int);

int main()
    {
        system("clear");    //used instead of clrscr();

        int a=0,n;
        AGAIN: cout<<"\nPick an Option";             //menu
        cout<<"\n =================="; 
        cout<<"\n\n1) Even or odd";
        cout<<"\n2) Prime or not";
        cout<<"\n3) Factorial";
        cout<<"\n4) Table";
        cout<<"\n5) Palindrome";
        cout<<"\n6) Armstrong no";
        cout<<"\n7) Fabonacci series";   
        cout<<"\n8) Exit";
        cout<<"\n\nchoose your option: "; cin>>a;       

       switch(a)
            {
                case 1:
                    {
                        cout<<"\nenter your number: "; cin>>n;
                        eve_odd(n);
                        getchar();
                        goto AGAIN;
                    }
                case 2:
                    {
                        cout<<"\nenter your number: "; cin>>n; 
                        p_np(n);
                        goto AGAIN;
                    }   
                case 3:
                    {
                        cout<<"\nenter your number: "; cin>>n; 
                        fact(n);
                        goto AGAIN;
                    }
                case 4:
                    {
                        cout<<"\nenter your number: "; cin>>n; 
                        table(n);
                        goto AGAIN;
                    }
                case 5:
                    {
                        cout<<"\nenter your number: "; cin>>n; 
                        pal(n);
                        goto AGAIN;
                    }
                case 6:
                    {
                        cout<<"\nenter your number: "; cin>>n; 
                        arm(n);
                        goto AGAIN;
                    }
                case 7:
                    {
                        cout<<"\nenter your number: "; cin>>n; 
                        fabo(n);
                        goto AGAIN;
                    }
                default:
                    {
                        system("exit");
                    }
            }
        return 0;
    }

int eve_odd(int n)          //fn to check if a number is odd or even
    {
        if (n%2==0)
            cout<<"\n"<<n<<" is an even number"<<endl;
        else
            cout<<"\n"<<n<<" is an odd number"<<endl;
    }

int p_np(int n)             //fn to check for prime no.
    {
        int pn=0;
        for(int i=2;i<=n;i++)
            {
                if(n%i==0)
                    pn=pn+i;
            }
        if(pn==n)
            cout<<"\n"<<n<<" is a prime no."<<endl;
        else
            cout<<"\n"<<n<<" is not a prime no."<<endl;
    }

int fact(int n)             //fn to find the factorial of a no.
    {
        int no=n;
        long int f=1;
        for(n;n>0;n--)
            {
                f=f*n;
            }
        cout<<"\nfactorial of "<<no<<" is: "<<f<<endl;
    }

int table(int n)            //fn to display the table of a no. (1 to 10)
    {
        cout<<"\nTable of "<<n<<" from 0 to 10"<<endl;
        for(int i=0;i<=10;i++)
            {
                cout<<"\n"<<n<<"X"<<i<<"= "<<n*i;
            }
        cout<<endl;
    }

int pal(int n)              //fn to check for a palindrome
    {
        int rev=0,last,pali=n;
        while(n>0)
            {
                last=n%10;
                rev=rev*10+last;
                n=n/10;
            }
        if(rev==pali)
            cout<<"\n"<<pali<<" is a palindrome"<<endl;
        else
            cout<<"\n"<<pali<<" is not a palindrome"<<endl;
    }
int arm(int n)              //fn to check for armstron number 
    {
        int rem;
        do{
            rem=n%10;
        }while(rem>0);
    }
int fabo(int n)             //fn to check fabonachi series
    {

    }
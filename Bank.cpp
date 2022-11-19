#include<iostream>
using namespace std;
class Bank 
{
    int Ac_nm ;
    char name [100];
    public :
    void setAcc ()
    {
        cout << " Enter account number : " ;
        cin >> Ac_nm ;
        cout << " Enter account holder name : " ;
        cin >> name ;
    }
    void getAcc ()
    {
        cout << " Your account number is : " << Ac_nm << endl ;
        cout << " Your account holder name is : " << name << endl ;
    }
};
class saving : public Bank 
{
    int x,y ;
    int bal = 0;
    public :
    void setDeposite ()
    {
        cout << " Enter Deposite money : " ;
        cin >> x;
        bal = bal + x ;
        cout << " Your Deposite money : " << x << endl;
    }
    void swithdraw ()
    {
        cout << " Enter your withdraw money : " << endl ;
        cin >> y ;

        if (bal<y)
        {
            cout << " Not monry " << endl ;
        }
        else 
        {
            bal = bal - y ;
            cout << " Your Withdraw money : " << y << endl ;
        }
    }
    void sshowbalance ()
    {
        cout << " Your Balance is  : " << bal << endl ;
    }
};
class Current : public Bank 
{
    int x , y ;
    int Balance = 0;
    public :
    void cDeposite ()
    {
        cout << " Enter Deposite money : " ;
        cin >> x ;
        Balance = Balance + x ;
        cout << " Your Deposite money : " << x << endl ;
    }
    void cWithdraw ()
    {
        cout << " Enter your withdraw money : " << endl ;
        cin >> y ;
        if (Balance<y)
        {
            cout << " Not money " << endl ;
        }
        else 
        {
            Balance = Balance - y ;
            cout << " Your Withdraw money : " << y << endl ;
        }
    }
    void cShobalance ()
    {
        cout << " your balance is : " << Balance << endl ;
    }
};
int main ()
{
    saving s;
    Current c;
    int ch , A ;
    s.setAcc () ;
    s.getAcc () ;
    while (A!=0)
    {
        cout << "\t\t\t 1.saving Account " << endl ;
        cout << "\t\t\t 2.current Account  " << endl ;
        cout << "\t\t\t 3.Exit " << endl ;
        cout << " Enter your drice : " << endl ;
        cin >> A ;
        switch (A)
        {
            case 1 :
                cout << " ***** Saving Account ***** " ;
                break;
            case 2 :
                cout << " ***** Current Account ***** " ;
                break;
            case 0 :
                break;
            default :
            cout << " Invalid Choice " ;           
        }
    }
    ch = 1;
    while (ch != 0)
    {
        cout << " \t\t\t 1. Deposite amount :  " <<  endl ;
        cout << " \t\t\t 2. withdraw Amount :  " <<  endl ;
        cout << " \t\t\t 3. Show balance :  " << endl ;
        cout << " \t\t\t 0. Exit  " << endl;
        cout << " Enter your choice :  " << endl ;
        cin >> ch ;
        switch (ch) 
        {
            case 1 : 
            if (A==1)
            s.setDeposite ();
            else 
            c.cDeposite ();
            break;
            case 2 : 
            if (A==1)
            s.swithdraw () ;
            
        }
    }
};
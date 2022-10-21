#include <iostream>
using namespace std;
class Bank 
{
    public :

};
class Saving : public Bank 
{
    int x , y ;
    int bal = 0 ;
    public : 
    void Sdeposit ()
    {
        cout << " Enter Deposit money :  " << endl ;
        cin >> x ;
        bal = bal + x ;
        cout << " Your Deposit money : " << x << endl ;
    }
    void Swithdraw ()
    {
        cout << " Enter your withdraw money : " << endl ;
        cin >> y ;
        if (bal < y)
        {
            cout << " Not enough money : " << endl ;
        }
        else 
        {
            bal = bal - y ;
            cout << " Your Withdraw money : " << y << endl ;
        }
    }
    void Sshowbalance ()
    {
        cout << " Your balance is : " << bal << endl ;
    }
};
class Current : public Bank 
{
    int x , y ;
    int bal = 0 ;
    public :
    void Cdeposite ()
    {
        cout << " Enter Deposite money : " << endl ;
        cin >> x;
        bal = bal + x;
        cout << " Your Deposite money is : " << x << endl ;
    }
    void Cwithdraw ()
    {
        cout << " Enter your withdraw monry : " << endl ;
        cin >> y ;
        if (bal < y)
        {
            cout << " Not enough money " << endl ;
        }
        else 
        {
            bal = bal - y ;
            cout << " Your withdraw money : " << y << endl ;
        }
        
       // void CshowBalance ()
        //{
           // cout << " Your Balance is : " << bal << endl ;
        //}
    }
};
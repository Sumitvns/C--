#include<iostream>
#include<stdio.h>
#include<string.h>

using namespace std;

class Account
{
        int acno;
        char AccountHolderName[100];
        float bal;  
   public:
        Account(int acc_no, char *name, float Balance)  //Parameterized Constructor
        {
                acno=acc_no;
                strcpy(AccountHolderName, name);
                bal=Balance;
        }

        void annualInterestRate();
        void deposit();
        void withdraw();
        void Show();
};

void Account::annualInterestRate()
{
    int InterestRate1;
    cout<<"Enter Interest Rate( in % ) = ";
    cin>>InterestRate1;
    bal+=(bal/100)*InterestRate1;
    cout<<"Balance after adding annual interest rate = "<<bal<<endl;
}

void Account::deposit()   //depositing an amount
{
        int DepositAmmount1;
        cout<<"Enter Deposit Amount = ";
        cin>>DepositAmmount1;
        bal+=DepositAmmount1;
}
void Account::withdraw()  //withdrawing an amount
{
        int WithdrawAmmount1;
        cout<<"Enter Withdraw Amount = ";
        cin>>WithdrawAmmount1;
        if(WithdrawAmmount1>bal)
                cout<<"Cannot Withdraw Amount"<<endl;
        bal-=WithdrawAmmount1;
}
void Account::Show()  //Showing the details
{
        cout<<"*************"<<endl;
        cout<<"Accout No. : "<<acno<<endl;
        cout<<"Name : "<<AccountHolderName<<endl;
        cout<<"Updated Balance : "<<bal<<endl;  
}

int main()
{
        int acc_no;
        char name[100], acc_type[100];
        float Balance = 100000;
        cout<<"*****Enter Details*****"<<endl;
        cout<<"Accout No. ";
        cin>>acc_no;
        cout<<"Name : ";
        cin>>name;
        cout<<"Balance : "<<Balance<<endl;
        
        Account b1(acc_no, name, Balance);  //object is created
        b1.annualInterestRate();
        b1.deposit(); //
        b1.withdraw(); // calling member functions
        b1.Show(); //
        return 0;
}
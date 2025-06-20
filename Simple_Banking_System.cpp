#include<iostream>
using namespace std;

void CheckBalance();
void AddMoney();
void WithdrawMoney();
double balance;
int main() {
    int button;
    do{
        cout<<"1.CheckBalance\n";
        cout<<"2.AddMoney\n";
        cout<<"3.WithdrawMoney\n";
        cout<<"4.Exit\n";
        cin>>button;

        switch(button)
        {
            case 1:CheckBalance();
                    break;
            case 2:AddMoney();
                    break;
            case 3:WithdrawMoney();
                    break;
            case 4:cout << "Thank you for using our ATM. Goodbye!\n";
                            break;
            default:cout<<"Wrong input!!\n";
                    
        }

    }while(button != 4);
}
void CheckBalance(){
    cout<<"Your balance is Rupee "<<balance<<'\n';
}
void AddMoney(){
    double money;
    cout<<"How much you want to add: "<<'\n';
    cin>>money;
    balance = balance + money;
    cout<<"Deposit successful\n";

}
void WithdrawMoney(){
    double money;
    cout<<"How much you want to withdraw: "<<'\n';
    cin>>money;
    if(money > balance){
        cout<<"You cannot withdraw more then your account balance";
    }
    else{
        balance = balance - money;
        cout<<"Withdraw successful\n";
    }
}
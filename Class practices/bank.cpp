#include<iostream>
#include<conio.h>
using namespace std;
  class Bank{
    protected:
    string Name;
    int Account_number;
    int Balence;
    public:
  };
  class Methods : public Bank{
    void setName(){
      string Name;
      cout<<"Enter your name:";
      getline(cin,Name);
      this->Name=Name;
    }
    void setAccount_number(){
      int Account_number;
      cout<<"Enter your Account number:";
      cin>>Account_number;
      this->Account_number=Account_number;
    }
    int setBalence(){
      int Balence;
      cout<<"Enter 1 to check the balence:";
      Balence=getch();
      this->Balence=Balence;
      if(Balence=1){
        return(getBalence());
      }
      else{
        return(setBalence());
      } 
    }
    void getName(){
      cout<<"You entered:";
      return(Name);
    }
    void getAccount_number(){
      cout<<"Your account number is:";
      return(Account_number);
    }
    void getBalence(){    
      cout<<"Your Balence is:";
      return(Balence);
    }
  };
int main(){
  Methods m;char ch;
  do{ 
  m.setName();
  m.setAccount_number();
  m.setBalence();
  m.getName();
  m.getAccount_number();
  m.getBalence();
  cout<<"Press enter for anothe one";
  ch =getch();
  }while(ch == '\r');
  return 0;
}
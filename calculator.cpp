#include<iostream>
using namespace std;

int main() {
     double a,b;
     char operation;
     
     cout<<"enter first number :"<<endl;
     cin>>a;
     
     cout<<"enter second number :"<<endl;
     cin>>b;
     
     cout<<"enter operation (+,-,*,/) :"<<endl;
     cin>>operation;
      
      
      switch (operation){
      	case '+':
      		cout<<"result :"<<a + b<<endl;
      		break;
      		case '-':
      			cout<<"result :"<<a-b<<endl;
      			break;
      			case '*':
      				cout<<"result :"<<a*b<<endl;
      				break;
      				case '/':
      					cout<<"result :"<<a/b<<endl;
      					break;
      					default:
      						cout<<"invalid input try again"<<endl;
	  }
 return 0;
 }


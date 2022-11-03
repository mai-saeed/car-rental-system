#include <iostream>
#include <string>
#include <bits/stdc++.h>
#include <conio.h>
#include <stdlib.h>
using namespace std;

int admin_login();
int cust_login();
int driver_login();

int admin_login(){
   string pass ="";
   char ch;
   cout <<"\n\n\n\n\n\n\n\t\t\t\t\tWelcome to admin view";
   cout << "\n\n\n\n\n\n\n\t\t\t\t\tPlease Enter Password: ";
   ch = _getch();
   while(ch != 13){//character 13 is enter
      pass.push_back(ch);
      cout << '*';
      ch = _getch();
   }
   if(pass == "pass"){
      cout << "\n\n\n\n\t\t\t\t\tAccess Granted! Welcome To Our System \n\n";
      system("CLS");
      return 1;


   }else{
      cout << "\n\n\n\n\t\t\t\t\tAccess Aborted...Please Try Again!!\n";
      system("CLS");
      return 0;

}
}
int cust_login(){
   string pass ="";
   char ch;
   cout <<"\n\n\n\n\n\n\n\t\t\t\t\tWelcome to customer view";
   cout << "\n\n\n\n\n\n\n\t\t\t\t\tPlease Enter Password: ";
   ch = _getch();
   while(ch != 13){//character 13 is enter
      pass.push_back(ch);
      cout << '*';
      ch = _getch();
   }

for(int i=0;i<100;i++){
   if(pass == customers[i].get_pass()){
      index=i;
      cout << "\n\n\n\n\t\t\t\t\tAccess Granted! Welcome To Our System \n\n";
      system("CLS");
      return 1;


   }else{
    system("CLS");
    cout << "\n\n\n\n\t\t\t\t\tAccess Aborted...Please Try Again!!\n";
      return 0;}

}
}

int driver_login(){
   string pass ="";
   char ch;
   cout <<"\n\n\n\n\n\n\n\t\t\t\t\tWelcome to driver view";
   cout << "\n\n\n\n\n\n\n\t\t\t\t\tPlease Enter Password: ";
   ch = _getch();
   while(ch != 13){//character 13 is enter
      pass.push_back(ch);
      cout << '*';
      ch = _getch();
   }

for(int i=0;i<100;i++){
   if(pass == drivers[i].get_pass()){
    index= i;
      cout << "\n\n\n\n\t\t\t\t\tAccess Granted! Welcome To Our System \n\n";
      system("CLS");
      return 1;


   }else{
    system("CLS");
    cout << "\n\n\n\n\t\t\t\t\tAccess Aborted...Please Try Again!!\n";
      return 0;}

}
}





#include <iostream>
#include <string>
#include <bits/stdc++.h>
#include <conio.h>
#include <stdlib.h>
using namespace std;


class Human {
  public:
    string name;
    string gender;
    int age;
    int id;
protected:
    int location;
    string password;
public:
    void add_location(int loc){
        location=loc;
    }
    int find_location(){
        return location;
    }
    void set_pass(string pass){
        password=pass;
    }
    string get_pass(){
        return password;
    }
};
class Customer:public Human {
  public:
    Customer(){
    }
    Customer(string n,string g,int a){
    name=n;
    gender=g;
    age=a;
    no_order=0;
    }
    int no_order;
    int order(int price_kilo,int loc1,int needed_loc){
        int x;
        no_order++;
        x=price_kilo*(abs(location-loc1)+needed_loc);
        cout<<"\n the order fees:"<<x<<"\n";
        return x;
    }
    int order(int bus_price_kilo,int loc1,string time,int station){
        int x;
        no_order++;
        x=bus_price_kilo*(abs(location-loc1)+station);
        cout<< "your bus will be on"<<time<<"\n the order fees:"<<x<<"\n";
        return x;
        }

    void cancel(){
        no_order--;
        cout<<"order canceled \n";
    }
    int pay(){
            cout<<"thanks the order paid \n ";
        }


    int rate_driver(int dri_rate){
    int n,r;
    cout<<"what do you rate the driver? \n from(1 to 5) please";
    cin>>n;
    r=(dri_rate+n)/2;
    return r;
    }
};
class Driver:public Human {
  private:
      bool available;
      int fees;
  public:
    Driver(){
    }
    Driver(string n,string g,int a,int e){
    name=n;
    gender=g;
    age=a;
    experience=e;
    available=true;
    fees=0;
    rate=0;
    }
    int experience;
    int rate;
    int accept_mode(){
        available==true;
    }
    void reject_mode(){
        available=false;
    }
    int driver_decision(){
        if(accept_mode())return 1;
        else return 0;
    }
    void take_money(int order_fee){
        fees+=order_fee;
    }
};


Customer customers[100];
Driver drivers[100];
int num_customers=0;///////
int num_drivers=0;////
int index;

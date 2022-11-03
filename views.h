#include <iostream>
#include <string>
#include <bits/stdc++.h>
#include <conio.h>
#include <stdlib.h>
using namespace std;

void interface(int &num_cust,Customer customers[100],int &num_dri,Driver drivers[100],int &num_ca,Car cars[100],int &num_sco,Scooter scooter[100],int &num_b,Bus bus[100]);
void admin_view(int &num_cust,Customer customers[100],int &num_dri,Driver drivers[100],int &num_ca,Car cars[100],int &num_sco,Scooter scooter[100],int &num_b,Bus bus[100]);
void cust_view(int &num_cust,Customer customers[100],int &num_dri,Driver drivers[100],int &num_ca,Car cars[100],int &num_sco,Scooter scooter[100],int &num_b,Bus bus[100],int index);
void dri_view(int &num_cust,Customer customers[100],int &num_dri,Driver drivers[100],int &num_ca,Car cars[100],int &num_sco,Scooter scooter[100],int &num_b,Bus bus[100],int index);
int find_driver(int num ,Driver drivers[100],string driver_name);



void admin_view(int &num_cust,Customer customers[100],int &num_dri,Driver drivers[100],int &num_ca,Car cars[100],int &num_sco,Scooter scooter[100],int &num_b,Bus bus[100]){
    int back=0;
    cout<<"\nclick \n 1- to show customers. \n 2- to show drivers. \n 3- to show cars. \n 4- to show buses. \n 5- to show scooters. \n 6- back \n";
    int c;
    cin>>c;
    system("CLS");
    switch(c){
        int cu;
        case 1:
            back=1;
            show(1,customers,drivers,cars,scooter,bus);
            cout<<"\nPlease click if you want to \n 1- update existing data. \n 2- add new customer \n 3- delete customer \n 4- back \n";
            cin>>cu;
            switch(cu){
                case 1:
                    up_customers(customers);
                    show(1,customers,drivers,cars,scooter,bus);
                    admin_view(num_cust,customers,num_dri,drivers,num_ca,cars, num_sco,scooter,num_b,bus);
                    break;
                case 2:
                    int x;
                    cout<<"enter number of customers to add \n";
                    cin>>x;
                    add_customers(num_cust,customers,x);
                    show(1,customers,drivers,cars,scooter,bus);
                    admin_view(num_cust,customers,num_dri,drivers,num_ca,cars, num_sco,scooter,num_b,bus);
                    break;
                case 3:
                    del_customers(customers,num_cust);
                    num_cust--;
                    show(1,customers,drivers,cars,scooter,bus);
                    admin_view(num_cust,customers,num_dri,drivers,num_ca,cars, num_sco,scooter,num_b,bus);
                    break;
                case 4:
                    admin_view(num_cust,customers,num_dri,drivers,num_ca,cars, num_sco,scooter,num_b,bus);
                    break;

            }
            break;
        case 2:
            back=1;
            show(2,customers,drivers,cars,scooter,bus);
            cout<<"\nPlease click if you want to \n 1- update existing data. \n 2- add new driver \n 3- delete driver \n 4- back \n";
            cin>>cu;
            switch(cu){
                case 1:
                    up_drivers(drivers);
                    show(2,customers,drivers,cars,scooter,bus);
                    admin_view(num_cust,customers,num_dri,drivers,num_ca,cars, num_sco,scooter,num_b,bus);
                    break;
                case 2:
                    int x;
                    cout<<"enter number of drivers to add \n";
                    cin>>x;
                    add_drivers(num_dri,drivers,x);
                    show(2,customers,drivers,cars,scooter,bus);
                    admin_view(num_cust,customers,num_dri,drivers,num_ca,cars, num_sco,scooter,num_b,bus);
                    break;
                case 3:
                    del_drivers(drivers,num_dri);
                    num_dri--;
                    show(2,customers,drivers,cars,scooter,bus);
                    admin_view(num_cust,customers,num_dri,drivers,num_ca,cars, num_sco,scooter,num_b,bus);
                    break;
                case 4:
                    admin_view(num_cust,customers,num_dri,drivers,num_ca,cars, num_sco,scooter,num_b,bus);
                    break;

            }
            break;
        case 3:
            back=1;
            show(3,customers,drivers,cars,scooter,bus);
            cout<<"\nPlease click if you want to \n 1- update existing data. \n 2- add new car \n 3- delete car \n 4- back \n";
            //int cu;
            cin>>cu;
            switch(cu){
                case 1:
                    up_cars(cars);
                    show(3,customers,drivers,cars,scooter,bus);
                    admin_view(num_cust,customers,num_dri,drivers,num_ca,cars, num_sco,scooter,num_b,bus);
                    break;
                case 2:
                    add_cars(num_ca,cars,-5,drivers);
                    show(3,customers,drivers,cars,scooter,bus);
                    admin_view(num_cust,customers,num_dri,drivers,num_ca,cars, num_sco,scooter,num_b,bus);
                    break;
                case 3:
                    del_cars(cars,num_ca);
                    num_ca--;
                    show(3,customers,drivers,cars,scooter,bus);
                    admin_view(num_cust,customers,num_dri,drivers,num_ca,cars, num_sco,scooter,num_b,bus);
                    break;
                case 4:
                    admin_view(num_cust,customers,num_dri,drivers,num_ca,cars, num_sco,scooter,num_b,bus);
                    break;

            }
            break;
        case 4:
            back=1;
            show(4,customers,drivers,cars,scooter,bus);
            cout<<"\nPlease click if you want to \n 1- update existing data. \n 2- add new bus \n 3- delete bus \n 4- back \n";
            cin>>cu;
            switch(cu){
                case 1:
                    up_bus(bus);
                    show(4,customers,drivers,cars,scooter,bus);
                    admin_view(num_cust,customers,num_dri,drivers,num_ca,cars, num_sco,scooter,num_b,bus);
                    break;
                case 2:
                    add_bus(num_b,bus,-5,drivers);
                    show(4,customers,drivers,cars,scooter,bus);
                    admin_view(num_cust,customers,num_dri,drivers,num_ca,cars, num_sco,scooter,num_b,bus);
                    break;
                case 3:
                    del_bus(bus,num_b);
                    num_b--;
                    show(4,customers,drivers,cars,scooter,bus);
                    admin_view(num_cust,customers,num_dri,drivers,num_ca,cars, num_sco,scooter,num_b,bus);
                    break;
                case 4:
                    admin_view(num_cust,customers,num_dri,drivers,num_ca,cars, num_sco,scooter,num_b,bus);
                    break;

            }
            break;
        case 5:
            back=1;
            show(5,customers,drivers,cars,scooter,bus);
            cout<<"\nPlease click if you want to \n 1- update existing data. \n 2- add new scooter \n 3- delete scooter \n 4- back \n";
            cin>>cu;
            switch(cu){
                case 1:
                    up_scooters(scooter);
                    show(5,customers,drivers,cars,scooter,bus);
                    admin_view(num_cust,customers,num_dri,drivers,num_ca,cars, num_sco,scooter,num_b,bus);
                    break;
                case 2:
                    add_scooters(num_sco,scooter,-5,drivers);
                    show(5,customers,drivers,cars,scooter,bus);
                    admin_view(num_cust,customers,num_dri,drivers,num_ca,cars, num_sco,scooter,num_b,bus);
                    break;
                case 3:
                    del_scooters(scooter,num_cust);
                    num_cust--;
                    show(5,customers,drivers,cars,scooter,bus);
                    admin_view(num_cust,customers,num_dri,drivers,num_ca,cars, num_sco,scooter,num_b,bus);
                    break;
                case 4:
                    admin_view(num_cust,customers,num_dri,drivers,num_ca,cars, num_sco,scooter,num_b,bus);
                    break;

            }
            break;
        case 6:
            if(back)admin_view(num_cust,customers,num_dri,drivers,num_ca,cars, num_sco,scooter,num_b,bus);
            else interface(num_cust,customers,num_dri,drivers,num_ca,cars, num_sco,scooter,num_b,bus);
            break;
}}



void cust_view(int &num_cust,Customer customers[100],int &num_dri,Driver drivers[100],int &num_ca,Car cars[100],int &num_sco,Scooter scooter[100],int &num_b,Bus bus[100],int index){
    cout<<"\nclick \n 1- to order.  \n 2- back \n";
    int c;
    cin>>c;
    system("CLS");
    int loc_desi;
    int fee;
    int conf;
    switch(c){
    case 1:{
        int z,v,d;
        int ava=0;
        cout<<"\n choose your vehicle \n 1- car  \n 2- bus \n 3- scooter \n";
        cin>>z;
        switch(z){
            case 1:
                show(3,customers,drivers,cars,scooter,bus);
                cout<<"\n choose your car\n";
                cin>>v;
                d=find_driver(num_dri ,drivers,cars[v].driver_name);
                if(d!=101)ava=drivers[d].driver_decision();
                if(ava){
                   cout<<"\n choose the desired location\n from (1 to 5)\n";

                    cin>>loc_desi;

                    fee=customers[index].order(cars[v].price_kilo,cars[v].location,loc_desi);
                    cout<<"\n choose 1- to confirm the order 2- to cancel the order \n ";
                    conf=0;
                    cin>>conf;
                    if (conf==1){
                    customers[index].pay();
                    drivers[d].take_money(fee);
                    customers[index].rate_driver(drivers[d].rate);
                    cust_view(num_cust,customers,num_dri,drivers,num_ca,cars, num_sco,scooter,num_b,bus,index);
                    }else{
                        customers[index].cancel();
                        cust_view(num_cust,customers,num_dri,drivers,num_ca,cars, num_sco,scooter,num_b,bus,index);
                        }
                  }

                else {
                        cout<<"\n please choose other car\n";
                        cust_view(num_cust,customers,num_dri,drivers,num_ca,cars, num_sco,scooter,num_b,bus,index);
                        break;
                }
                break;
            case 2:
                show(4,customers,drivers,cars,scooter,bus);
                cout<<"\n choose your bus\n";
                cin>>v;
                d=find_driver(num_dri ,drivers,bus[v].driver_name);
                if(d!=101)ava=drivers[d].driver_decision();
                if(ava){
                        cout<<"\n choose the desired location\n from (1 to 5)\n";
                        cin>>loc_desi;
                        conf=0;
                        fee=customers[index].order(bus[v].price_kilo,bus[v].location,loc_desi);
                        cout<<"/n choose 1- to confirm the order 2- to cancel the order \n ";
                        cin>>conf;
                        if (conf==1){
                            customers[index].pay();
                            drivers[d].take_money(fee);
                            customers[index].rate_driver(drivers[d].rate);
                            cust_view(num_cust,customers,num_dri,drivers,num_ca,cars, num_sco,scooter,num_b,bus,index);
                        }else{
                            customers[index].cancel();
                            cust_view(num_cust,customers,num_dri,drivers,num_ca,cars, num_sco,scooter,num_b,bus,index);

                        }


                }
                else {
                        cout<<"please choose other bus";
                        cust_view(num_cust,customers,num_dri,drivers,num_ca,cars, num_sco,scooter,num_b,bus,index);
                        break;
                }


                break;
            case 3:
                show(5,customers,drivers,cars,scooter,bus);
                cout<<"\n choose your scooter\n";
                cin>>v;
                d=find_driver(num_dri ,drivers,scooter[v].driver_name);
                if(d!=101)ava=drivers[d].driver_decision();


                if(ava){
                        cout<<"\n choose the desired location\n from (1 to 5)\n";
                        cin>>loc_desi;
                        conf=0;
                        fee=customers[index].order(scooter[v].price_kilo,scooter[v].location,loc_desi);
                        cout<<"the fees of your order is "<<fee<<"/n choose 1- to confirm the order 2- to cancel the order \n ";
                        cin>>conf;
                        if (conf==1){
                            customers[index].pay();
                            drivers[d].take_money(fee);
                            customers[index].rate_driver(drivers[d].rate);
                            cust_view(num_cust,customers,num_dri,drivers,num_ca,cars, num_sco,scooter,num_b,bus,index);

                        }else{
                            customers[index].cancel();
                            cust_view(num_cust,customers,num_dri,drivers,num_ca,cars, num_sco,scooter,num_b,bus,index);

                        }
                }
                else {
                        cout<<"please choose other scooter";
                        cust_view(num_cust,customers,num_dri,drivers,num_ca,cars, num_sco,scooter,num_b,bus,index);
                        break;
                }
                break;
        }
        break;
    }
    case 2:
        interface(num_cust,customers,num_dri,drivers,num_ca,cars, num_sco,scooter,num_b,bus);
        break;
    }
}
void dri_view(int &num_cust,Customer customers[100],int &num_dri,Driver drivers[100],int &num_ca,Car cars[100],int &num_sco,Scooter scooter[100],int &num_b,Bus bus[100],int index){
system("CLS");
cout <<"\n\n\n\n\n\n\n\t\t\t\t\tWelcome "<<drivers[index].name<<"\n";
if(drivers[index].driver_decision())cout <<"\n\t\t your mode: accept mode (available) "<<"\n";
else cout <<"\n\t\t your mode: reject mode (not available)"<<"\n";
cout <<"\n\t\t your location: "<<drivers[index].find_location()<<"\n";
cout <<"\n\t\t click 1-to update your location 2- to update your mode 3- to back \n";
int c;
cin>>c;
switch(c){
case 1:
    int loc;
    cout <<"\n\t\t enter your current location: \n";
    cin>>loc;
    drivers[index].add_location(loc);
    dri_view(num_cust,customers,num_dri,drivers,num_ca,cars, num_sco,scooter,num_b,bus,index);
    break;
case 2:
    int mode;
    cout <<"\n\t\t click 0-to reject mode ""not available"" 1- to accept mode ""available"" \n";
    cin>>mode;
    if(mode)drivers[index].accept_mode();
    else drivers[index].reject_mode();
    dri_view(num_cust,customers,num_dri,drivers,num_ca,cars, num_sco,scooter,num_b,bus,index);
    break;
case 3:
    interface(num_cust,customers,num_dri,drivers,num_ca,cars, num_sco,scooter,num_b,bus);
    break;
}
}

int find_driver(int num ,Driver drivers[100],string driver_name){
int c=101;
for(int i=0;i<num;i++){
    if(driver_name == drivers[i].name) return i;
}
return c;
}


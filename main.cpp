#include <iostream>
#include <string>
#include <bits/stdc++.h>
#include <conio.h>
#include <stdlib.h>
#include "human.h"
#include "vehicle.h"
#include "dml.h"
#include "login.h"
#include "views.h"

using namespace std;

int main(){

interface(num_customers,customers,num_drivers,drivers,num_cars,cars, num_scooters,scooter,num_bus,bus);

return 0;
}


void interface(int &num_cust,Customer customers[100],int &num_dri,Driver drivers[100],int &num_ca,Car cars[100],int &num_sco,Scooter scooter[100],int &num_b,Bus bus[100]){
cout<<"\n\n\n\n\t\t\t\t\tCar Rental Application\n\n";
cout<<"please click: \n 1- for admin view. \n 2- for customer view. \n 3- for driver view."<<endl;
int num ;
cin>> num;
switch (num) {
    case 1:
        if (admin_login()){
            admin_view(num_cust,customers,num_dri,drivers,num_ca,cars, num_sco,scooter,num_b,bus);
        }else {
            cout<<"please click: \n 1- for try again. \n 2- for back to interface. "<<endl;
            int num ;
            cin>> num;
            switch (num) {
            case 1:
                if(admin_login())admin_view(num_cust,customers,num_dri,drivers,num_ca,cars, num_sco,scooter,num_b,bus);
                else interface(num_cust,customers,num_dri,drivers,num_ca,cars, num_sco,scooter,num_b,bus);
            case 2:
                interface(num_cust,customers,num_dri,drivers,num_ca,cars, num_sco,scooter,num_b,bus);
            }
        }
        break;

    case 2:{
        cout<<"please click: \n 1- for login. \n 2- for register. \n 3- back \n"<<endl;
            int num ;
            cin>> num;
            system("CLS");
            switch (num) {
                case 1:{
                    if(cust_login()){
                    cust_view(num_cust,customers,num_dri,drivers,num_ca,cars, num_sco,scooter,num_b,bus,index);
                    }else {
                        cout<<"please click: \n 1- for try again. \n 2- for back to interface. "<<endl;
                        int num ;
                        cin>> num;
                        switch (num) {
                        case 1:
                            if(cust_login())cust_view(num_cust,customers,num_dri,drivers,num_ca,cars, num_sco,scooter,num_b,bus,index);
                            else interface(num_cust,customers,num_dri,drivers,num_ca,cars, num_sco,scooter,num_b,bus);
                        case 2:
                            interface(num_cust,customers,num_dri,drivers,num_ca,cars, num_sco,scooter,num_b,bus);
                        }
                    }
                    break;}
                case 2:{
                    add_customers(num_cust,customers,1);
                    index=num_cust;
                    cout<<"welcome"<<endl;
                    cust_view(num_cust,customers,num_dri,drivers,num_ca,cars, num_sco,scooter,num_b,bus,index);
                    break;
                    }
                case 3:{
                interface(num_cust,customers,num_dri,drivers,num_ca,cars, num_sco,scooter,num_b,bus);
                break;}
        break;}}

    case 3:{

        cout<<"please click: \n 1- for login. \n 2- for register. \n 3- back \n"<<endl;
            int num ;
            cin>> num;
            system("CLS");
            switch (num) {
                case 1:{
                    if(driver_login()){
                    dri_view(num_cust,customers,num_dri,drivers,num_ca,cars, num_sco,scooter,num_b,bus,index);
                    }else {
                        cout<<"please click: \n 1- for try again. \n 2- for back to interface. "<<endl;
                        int num ;
                        cin>> num;
                        switch (num) {
                        case 1:
                            if(driver_login())dri_view(num_cust,customers,num_dri,drivers,num_ca,cars, num_sco,scooter,num_b,bus,index);
                            else interface(num_cust,customers,num_dri,drivers,num_ca,cars, num_sco,scooter,num_b,bus);
                        case 2:
                            interface(num_cust,customers,num_dri,drivers,num_ca,cars, num_sco,scooter,num_b,bus);
                        }
                    }
                    break;}
                case 2:{
                    add_drivers(num_dri,drivers,1);
                    cout<<"\n please choose your vehicle type: \n 1- car \n 2- bus \n 3- scooter \n";
                    int t;
                    cin>>t;
                    index=num_dri;
                    switch(t){
                        case 1:
                            add_cars(num_ca,cars,index,drivers);
                            break;
                        case 2:
                            add_bus(num_b,bus,index,drivers);
                            break;
                        case 3:
                            add_scooters(num_sco,scooter,index,drivers);
                            break;
                            }

                    system("CLS");
                    dri_view(num_cust,customers,num_dri,drivers,num_ca,cars, num_sco,scooter,num_b,bus,index);
                    break;
                    }
                case 3:{
                interface(num_cust,customers,num_dri,drivers,num_ca,cars, num_sco,scooter,num_b,bus);
                break;}





        break;}

}
}}


#include <iostream>
#include <string>


using namespace std;

void show(int case_num,Customer customers[100],Driver drivers[100],Car cars[100],Scooter scooter[100],Bus bus[100]);
void add_customers(int &num,Customer customers[100],int tnum);
void add_drivers(int &num,Driver drivers[100],int tnum);
void add_cars(int &num,Car cars[100],int U,Driver drivers[100]);
void add_bus(int &num,Bus bus[100],int U,Driver drivers[100]);
void add_scooters(int &num,Scooter scooter[100],int U);
void up_customers(Customer customers[100]);
void up_drivers(Driver drivers[100]);
void up_cars(Car cars[100]);
void up_bus(Bus bus[100]);
void up_scooters(Scooter scooter[100]);
void del_customers(Customer customers[100],int num);
void del_drivers(Driver drivers[100],int num);
void del_cars(Car cars[100],int num);
void del_bus(Bus bus[100],int num);
void del_scooters(Scooter scooter[100],int num);


void show(int case_num,Customer customers[100],Driver drivers[100],Car cars[100],Scooter scooter[100],Bus bus[100]){
    if (case_num==1){
        cout<<"id"<<string(13, ' ')<<"name"<<string(11, ' ')<<"location"<<string(7, ' ')<<"gender"<<string(9, ' ')<<"age"<<string(12, ' ')<<"no orders"<<string(12, ' ')<<"password";
        cout<<"\n"<<string(100, '_');
        for(int i=0;i<=num_customers;i++){
            cout<<"\n"<<customers[i].id<<string(13, ' ');
            cout<<customers[i].name<<string((15-customers[i].name.length()), ' ');
            cout<<customers[i].find_location()<<string(14, ' ');
            cout<<customers[i].gender<<string(14, ' ');
            cout<<customers[i].age<<string(13, ' ');
            cout<<customers[i].no_order<<string(13, ' ');
            cout<<customers[i].get_pass();

            }}
    else if(case_num==2){
        cout<<"id"<<string(13, ' ')<<"name"<<string(11, ' ')<<"location"<<string(7, ' ')<<"gender"<<string(9, ' ')<<"age"<<string(12, ' ')<<"experience"<<string(5, ' ')<<"rate"<<string(4, ' ')<<"available"<<string(12, ' ')<<"password";
        cout<<"\n"<<string(110, '_');
        for(int i=0;i<=num_drivers;i++){
            cout<<"\n"<<drivers[i].id<<string(13, ' ');
            cout<<drivers[i].name<<string((15-drivers[i].name.length()), ' ');
            cout<<drivers[i].find_location()<<string(14, ' ');
            cout<<drivers[i].gender<<string(14, ' ');
            cout<<drivers[i].age<<string(13, ' ');
            cout<<drivers[i].experience<<string(13, ' ');
            cout<<drivers[i].rate<<string(6, ' ');
            cout<<drivers[i].driver_decision()<<string(6, ' ');
            cout<<drivers[i].get_pass();
            }
        }

    else if(case_num==3){
        cout<<"model"<<string(3, ' ')<<"id"<<string(3, ' ')<<"driver_name"<<string(3, ' ')<<"location"<<string(3, ' ')<<"color"<<string(3, ' ')<<"brand"<<string(3, ' ')<<"seats"<<string(3, ' ')<<"available"<<string(3, ' ')<<"price_km/h"<<string(3, ' ')<<"wifi"<<string(3, ' ')<<"airConditioning"<<string(3,' ');
        cout<<"\n"<<string(110, '_');
        for(int i=0;i<=num_cars;i++){
            cout<<"\n"<<cars[i].model<<string(5, ' ');
            cout<<cars[i].id<<string(5, ' ');
            cout<<cars[i].driver_name<<string((15-cars[i].driver_name.length()), ' ');
            cout<<cars[i].location<<string(7, ' ');
            cout<<cars[i].color<<string(5, ' ');
            cout<<cars[i].brand<<string(7, ' ');
            cout<<cars[i].seats<<string(7, ' ');
            cout<<cars[i].is_available<<string(10, ' ');
            cout<<cars[i].price_kilo<<string(10, ' ');
            cout<<cars[i].wifi_available<<string(7, ' ');
            cout<<cars[i].airConditioning_available;
            }
        }
    else if(case_num==4){
        cout<<"model"<<string(4, ' ')<<"id"<<string(4, ' ')<<"driver_name"<<string(4, ' ')<<"location"<<string(4, ' ')<<"color"<<string(4, ' ')<<"brand"<<string(4, ' ')<<"seats"<<string(4, ' ')<<"available"<<string(4, ' ')<<"price_km/h"<<string(4, ' ')<<"time"<<string(4, ' ')<<"station"<<string(4,' ');
        cout<<"\n"<<string(115, '_');
        for(int i=0;i<=num_bus;i++){
            cout<<"\n"<<bus[i].model<<string(6, ' ');
            cout<<bus[i].id<<string(6, ' ');
            cout<<bus[i].driver_name<<string((15-bus[i].driver_name.length()), ' ');
            cout<<bus[i].location<<string(8, ' ');
            cout<<bus[i].color<<string(7, ' ');
            cout<<bus[i].brand<<string(7, ' ');
            cout<<bus[i].seats<<string(7, ' ');
            cout<<bus[i].is_available<<string(10, ' ');
            cout<<bus[i].price_kilo<<string(10, ' ');
            cout<<bus[i].time<<string(7, ' ');
            cout<<bus[i].station;
            }
        }
        else if(case_num==5){
        cout<<"model"<<string(6, ' ')<<"id"<<string(3, ' ')<<"driver_name"<<string(5, ' ')<<"location"<<string(3, ' ')<<"color"<<string(4, ' ')<<"brand"<<string(7, ' ')<<"seats"<<string(3, ' ')<<"available"<<string(3, ' ')<<"price_km/h"<<string(3, ' ');
        cout<<"\n"<<string(100, '_');
        for(int i=0;i<=num_scooters;i++){
            cout<<"\n"<<scooter[i].model<<string(7, ' ');
            cout<<scooter[i].id<<string(5, ' ');
            cout<<scooter[i].driver_name<<string((15-scooter[i].driver_name.length()), ' ');
            cout<<scooter[i].location<<string(9, ' ');
            cout<<scooter[i].color<<string(7, ' ');
            cout<<scooter[i].brand<<string(8, ' ');
            cout<<scooter[i].seats<<string(7, ' ');
            cout<<scooter[i].is_available<<string(10, ' ');
            cout<<scooter[i].price_kilo;
            }
        }
    }

void add_customers(int &num,Customer customers[100],int tnum){
string pass;
for (int i=0;i < tnum; i++) {
cout<<"Please Enter\n name:";
cin>>customers[num].name;
cout<<"Please Enter\n password:";
cin>>pass;
customers[num].set_pass(pass);
cout<<"\n ID:";
cin>>customers[num].id;
cout<<"\n age:";
cin>>customers[num].age;
cout<<"\n gender:";
cin>>customers[num].gender;
cout<<"\n location:(1 to 5)";
int loc;
cin>>loc;
customers[num].add_location(loc);
cout <<"\n customer " <<customers[num].name <<" added"<< endl;
num++;}
}
void add_drivers(int &num,Driver drivers[100],int tnum){
for (int i=0;i < tnum; i++) {
cout<<"Please Enter\n name:";
cin>>drivers[num].name;
cout<<"Please Enter\n password:";
string pass;
cin>>pass;
drivers[num].set_pass(pass);
cout<<"\n ID:";
cin>>drivers[num].id;
cout<<"\n age:";
cin>>drivers[num].age;
cout<<"\n gender:";
cin>>drivers[num].gender;
cout<<"\n location:(1 to 5)";
int loc;
cin>>loc;
drivers[num].add_location(loc);
cout<<"\n experience:(1 to 5)";
cin>>drivers[num].experience;
cout<<"\n rate:(1 to 5)";
cin>>drivers[num].rate;
cout<<"\n available:(1 or 0)";
bool available;
cin>>available;
available=drivers[num].driver_decision();
cout <<"\n driver " <<drivers[num].name <<" added"<< endl;
num++;}
}
void add_cars(int &num,Car cars[100],int U,Driver drivers[100]){
int x;
if (U<0){
    cout<<"enter number of cars to add \n";
    cin>>x;
}else x=1;

for (int i=0;i < x; i++) {
    cout<<"Please Enter\n model:";
    cin>>cars[num].model;
    cout<<"\n ID:";
    cin>>cars[num].id;
    cout<<"Please Enter\n color:";
    cin>>cars[num].color;
    cout<<"Please Enter\n brand:";
    cin>>cars[num].brand;
    cout<<"Please Enter\n number of seats:";
    cin>>cars[num].seats;
    if (U==-5){
        cout<<"Please Enter\n driver name:";
        cin>>cars[num].driver_name;
        cout<<"\n location:(1 to 5)";
        cin>>cars[num].location;
        cout<<"\n available:(1 or 0)";
        cin>>cars[num].is_available;
    }else{
        cars[num].driver_name=drivers[U].name;
        cars[num].location=drivers[U].find_location();
        cars[num].is_available=drivers[U].driver_decision();
    }
    cout<<"\n wifi available:(1 or 0)";
    cin>>cars[num].wifi_available;
    cout<<"\n airConditioning available:(1 or 0)";
    cin>>cars[num].airConditioning_available;
    cout<<"Please Enter\n number of price km/h:";
    cin>>cars[num].price_kilo;
    cout <<"\n car " <<cars[num].id <<" added"<< endl;
num++;}}
void add_bus(int &num,Bus bus[100],int U,Driver drivers[100]){
int x;
if (U==-5){
    cout<<"enter number of buses to add \n";
    cin>>x;
}else x=1;
for (int i=0;i < x; i++) {
    cout<<"Please Enter\n model:";
    cin>>bus[num].model;
    cout<<"\n ID:";
    cin>>bus[num].id;
    cout<<"Please Enter\n color:";
    cin>>bus[num].color;
    cout<<"Please Enter\n brand:";
    cin>>bus[num].brand;
    if (U=-5){
        cout<<"Please Enter\n driver name:";
        cin>>bus[num].driver_name;
        cout<<"\n location:(1 to 5)";
        cin>>bus[num].location;
        cout<<"\n available:(1 or 0)";
        cin>>bus[num].is_available;
    }else{
        bus[num].driver_name=drivers[U].name;
        bus[num].location=drivers[U].find_location();
        bus[num].is_available=drivers[U].driver_decision();
    }
    cout<<"Please Enter\n number of seats:";
    cin>>bus[num].seats;
    cout<<"\n time:";
    cin>>bus[num].time;
    cout<<"\n station:";
    cin>>bus[num].station;
    cout<<"Please Enter\n number of price km/h:";
    cin>>bus[num].price_kilo;
    cout <<"\n bus " <<bus[num].id <<" added"<< endl;
num++;}}
void add_scooters(int &num,Scooter scooter[100],int U,Driver drivers[100]){
int x;
if (U==-5){
    cout<<"enter number of scooters to add \n";
    cin>>x;
}else x=1;

for (int i=0;i < x; i++) {
    cout<<"Please Enter\n model:";
    cin>>scooter[num].model;
    cout<<"\n ID:";
    cin>>scooter[num].id;
    if (U==-5){
        cout<<"Please Enter\n driver name:";
        cin>>scooter[num].driver_name;
        cout<<"\n location:(1 to 5)";
        cin>>scooter[num].location;
        cout<<"\n available:(1 or 0)";
        cin>>scooter[num].is_available;
    }else{
        scooter[num].driver_name=drivers[U].name;
        scooter[num].location=drivers[U].find_location();
        scooter[num].is_available=drivers[U].driver_decision();
    }
    cout<<"Please Enter\n color:";
    cin>>scooter[num].color;
    cout<<"Please Enter\n brand:";
    cin>>scooter[num].brand;
    cout<<"Please Enter\n number of seats:";
    cin>>scooter[num].seats;
    cout<<"Please Enter\n number of price km/h:";
    cin>>scooter[num].price_kilo;
    cout <<"\n scooter " <<scooter[num].id <<" added"<< endl;
num++;}
}

void up_customers(Customer customers[100]){
int x;
cout<<"enter index of customers to update\n";
cin>>x;
cout<<"Please Enter\n name:";
cin>>customers[x].name;
cout<<"Please Enter\n password:";
string pass;
cin>>pass;
customers[x].set_pass(pass);
cout<<"\n ID:";
cin>>customers[x].id;
cout<<"\n age:";
cin>>customers[x].age;
cout<<"\n gender:";
cin>>customers[x].gender;
cout<<"\n location:(1 to 5)";
int loc;
cin>>loc;
customers[x].add_location(loc);
cout <<"\n customer " <<customers[x].name <<" updated"<< endl;
}
void up_drivers(Driver drivers[100]){
int x;
cout<<"enter number of drivers to update \n";
cin>>x;
cout<<"Please Enter\n name:";
cin>>drivers[x].name;
cout<<"Please Enter\n password:";
string pass;
cin>>pass;
drivers[x].set_pass(pass);
cout<<"\n ID:";
cin>>drivers[x].id;
cout<<"\n age:";
cin>>drivers[x].age;
cout<<"\n gender:";
cin>>drivers[x].gender;
cout<<"\n location:(1 to 5)";
int loc;
cin>>loc;
drivers[x].add_location(loc);
cout<<"\n experience:(1 to 5)";
cin>>drivers[x].experience;
cout<<"\n rate:(1 to 5)";
cin>>drivers[x].rate;
cout<<"\n available:(1 or 0)";
bool available;
cin>>available;
available=drivers[x].driver_decision();
cout <<"\n driver " <<drivers[x].name <<" updated"<< endl;
}
void up_cars(Car cars[100]){
int x;
cout<<"enter index of car to update \n";
cin>>x;
cout<<"Please Enter\n model:";
cin>>cars[x].model;
cout<<"\n ID:";
cin>>cars[x].id;
cout<<"Please Enter\n driver name:";
cin>>cars[x].driver_name;
cout<<"\n location:(1 to 5)";
cin>>cars[x].location;
cout<<"Please Enter\n color:";
cin>>cars[x].color;
cout<<"Please Enter\n brand:";
cin>>cars[x].brand;
cout<<"Please Enter\n number of seats:";
cin>>cars[x].seats;
cout<<"\n available:(1 or 0)";
cin>>cars[x].is_available;
cout<<"\n wifi available:(1 or 0)";
cin>>cars[x].wifi_available;
cout<<"\n airConditioning available:(1 or 0)";
cin>>cars[x].airConditioning_available;
cout<<"Please Enter\n number of price km/h:";
cin>>cars[x].price_kilo;
cout <<"\n car " <<x<<" updated"<< endl;
}
void up_bus(Bus bus[100]){
int x;
cout<<"enter index of bus to update \n";
cin>>x;
cout<<"Please Enter\n model:";
cin>>bus[x].model;
cout<<"\n ID:";
cin>>bus[x].id;
cout<<"Please Enter\n driver name:";
cin>>bus[x].driver_name;
cout<<"\n location:(1 to 5)";
cin>>bus[x].location;
cout<<"Please Enter\n color:";
cin>>bus[x].color;
cout<<"Please Enter\n brand:";
cin>>bus[x].brand;
cout<<"Please Enter\n number of seats:";
cin>>bus[x].seats;
cout<<"\n available:(1 or 0)";
cin>>bus[x].is_available;
cout<<"\n time:";
cin>>bus[x].time;
cout<<"\n station:";
cin>>bus[x].station;
cout<<"Please Enter\n number of price km/h:";
cin>>bus[x].price_kilo;
cout <<"\n bus " <<bus[x].id <<" updated"<< endl;
}
void up_scooters(Scooter scooter[100]){
int x;
cout<<"enter index of scooters to update \n";
cin>>x;
cout<<"Please Enter\n model:";
cin>>scooter[x].model;
cout<<"\n ID:";
cin>>scooter[x].id;
cout<<"Please Enter\n driver name:";
cin>>scooter[x].driver_name;
cout<<"\n location:(1 to 5)";
cin>>scooter[x].location;
cout<<"Please Enter\n color:";
cin>>scooter[x].color;
cout<<"Please Enter\n brand:";
cin>>scooter[x].brand;
cout<<"Please Enter\n number of seats:";
cin>>scooter[x].seats;
cout<<"\n available:(1 or 0)";
cin>>scooter[x].is_available;
cout<<"Please Enter\n number of price km/h:";
cin>>scooter[x].price_kilo;
cout <<"\n scooter " <<scooter[x].id <<" updated"<< endl;
}

void del_customers(Customer customers[100],int num){
int x;
cout<<"enter index of customers to delete\n";
cin>>x;
while(x<num){
        customers[x].name=customers[x+1].name;
        customers[x].id=customers[x+1].id;
        customers[x].age=customers[x+1].age;
        customers[x].gender=customers[x+1].gender;
        customers[x].add_location(customers[x+1].find_location());
        customers[x].set_pass(customers[x+1].get_pass());
        x++;
      }
cout <<"\n customer deleted"<< endl;
}
void del_drivers(Driver drivers[100],int num){
int x,d;
cout<<"enter number of drivers to delete \n";
cin>>x;
while(x<num){
        drivers[x].name=drivers[x+1].name;
        drivers[x].id=drivers[x+1].id;
        drivers[x].age=drivers[x+1].age;
        drivers[x].experience=drivers[x+1].experience;
        drivers[x].rate=drivers[x+1].rate;
        drivers[x].gender=drivers[x+1].gender;
        drivers[x].add_location(drivers[x+1].find_location());
        drivers[x].set_pass(drivers[x+1].get_pass());
        d=drivers[x+1].driver_decision();
        if(d)drivers[x].accept_mode(); else drivers[x].reject_mode();
        x++;
      }
cout <<"\n driver deleted"<< endl;
}
void del_cars(Car cars[100],int num){
int x;
cout<<"enter index of car to delete \n";
cin>>x;
while(x<num){
        cars[x].model=cars[x+1].model;
        cars[x].id=cars[x+1].id;
        cars[x].driver_name=cars[x+1].driver_name;
        cars[x].location=cars[x+1].location;
        cars[x].color=cars[x+1].color;
        cars[x].brand=cars[x+1].brand;
        cars[x].seats=cars[x+1].seats;
        cars[x].is_available=cars[x+1].is_available;
        cars[x].wifi_available=cars[x+1].wifi_available;
        cars[x].airConditioning_available=cars[x+1].airConditioning_available;
        cars[x].price_kilo=cars[x+1].price_kilo;
        x++;
      }

cout <<"\n car deleted"<< endl;
}
void del_bus(Bus bus[100],int num){
int x;
cout<<"enter index of bus to delete \n";
cin>>x;
while(x<num){
        bus[x].model=bus[x+1].model;
        bus[x].id=bus[x+1].id;
        bus[x].driver_name=bus[x+1].driver_name;
        bus[x].location=bus[x+1].location;
        bus[x].color=bus[x+1].color;
        bus[x].brand=bus[x+1].brand;
        bus[x].seats=bus[x+1].seats;
        bus[x].is_available=bus[x+1].is_available;
        bus[x].time=bus[x+1].time;
        bus[x].station=bus[x+1].station;
        bus[x].price_kilo=bus[x+1].price_kilo;
        x++;
      }

cout <<"\n bus deleted"<< endl;
}
void del_scooters(Scooter scooter[100],int num){
int x;
cout<<"enter index of scooters to delete \n";
cin>>x;
while(x<num){
        scooter[x].model=scooter[x+1].model;
        scooter[x].id=scooter[x+1].id;
        scooter[x].driver_name=scooter[x+1].driver_name;
        scooter[x].location=scooter[x+1].location;
        scooter[x].color=scooter[x+1].color;
        scooter[x].brand=scooter[x+1].brand;
        scooter[x].seats=scooter[x+1].seats;
        scooter[x].is_available=scooter[x+1].is_available;
        scooter[x].price_kilo=scooter[x+1].price_kilo;
        x++;
      }
cout <<"\n scooter deleted"<< endl;
}

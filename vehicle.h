#include <iostream>
#include <string>
#include <bits/stdc++.h>
#include <conio.h>
#include <stdlib.h>
using namespace std;


class Vehicle{
public:
string model;
int id;
string driver_name;
int location;
int seats;
string color;
string brand;
int is_available;
int price_kilo;

};
class Car : public Vehicle{
public:
int wifi_available;
int airConditioning_available;
};
class Bus : public Vehicle{
public:
string time;
string station;
};
class Scooter : public Vehicle{

};
Car cars[100];
Bus bus[100];
Scooter scooter[100];
int num_cars=0;///////
int num_scooters=0;////
int num_bus=0;///////

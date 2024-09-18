// You are given a structure Car having name, year and mileage as attributes. This structure also contains a function purchase, this function will print "YES" if year is greater than 2018 and mileage is greater than 10, else print "NO".




#include <iostream>
using namespace std;

struct Car {
    string name;
    int year;
    int mileage;

    void purchase(){
        if(year>2018 && mileage>10) cout<<"YES";
        else cout<<"NO";
    }
};


int main() {
    Car obj;
    cin>>obj.name>>obj.year>>obj.mileage;
    obj.purchase();

    return 0;
}

#include <iostream>

class House{
private:
    int rent;
public:
    House () {
        rent = 50,000;
    }    
    friend class Hussnain;
};

class Appartment{
private:
    int rent_1;
public:
    Appartment () {
        rent_1 = 30,000;
    }
    friend class Hussnain;
};

class Hussnain {
private:
    int total;
public:
    int sum (Appartment &A, House &H){
        total = A.rent_1 + H.rent;
        return total;
    }
};

int main(){
    House h1;
    Appartment a;
    Hussnain h;
    std::cout << "The total rent is: " << h.sum (a, h1) << std::endl;
}
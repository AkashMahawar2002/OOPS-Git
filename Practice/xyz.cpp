#include<iostream>
using namespace std;


class A{
    public:
    A(){
        cout<<"A";
    }
    ~A(){
        cout<<"B";
    }
};

int main(){

    A a1;

    {
        A b1;
    }

    A c1;
    {
        A d1;
    }
}




#include <iostream>

// Celsius class
class Celsius {
private:
    float temperature;
public:
    Celsius(float temp) : temperature(temp) {}

    operator Fahrenheit();
};
class Fahrenheit {
private:
    float temperature;
public:
    Fahrenheit(float temp) : temperature(temp) {}
    operator Celsius(); 

    void display() const {
        std::cout << "Temperature in Fahrenheit: " << temperature << "°F" << std::endl;
    }
};

Celsius::operator Fahrenheit() {
    return Fahrenheit((temperature * 9.0 / 5.0) + 32); 
}


Fahrenheit::operator Celsius() {
    return Celsius((temperature - 32) * 5.0 / 9.0); 
}

int main() {
    Celsius celsiusTemp(25.0);

    Fahrenheit fahrenheitTemp = celsiusTemp; 
    fahrenheitTemp.display(); 

    Fahrenheit fahrTemp(77.0);

    Celsius celsiusTempFromFahr = fahrTemp;
    cout << "Temperature in Celsius: " << (celsiusTempFromFahr) << "°C" << endl;

    return 0;
}



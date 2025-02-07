// Convert temperature from Celsius to Fahrenheit.

#include <iostream>
using namespace std;

int main(){
    float temperature;
    cout<<"Enter temperature in Celsius: ";
    cin>>temperature;
    temperature = (9.0*temperature/5) + 32;
    cout<<"Temperature in Farenheit is: "<<temperature;
    return 0;
}
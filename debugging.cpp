#include <iostream>
using namespace std;

int main() {
    int suhu = 80; 
    bool air_coolant = false;
    
    if (suhu > 70) {
        if (air_coolant == true) {
            cout << "Aman";
        } else {
            cout << "Bahaya Overheat";
        }
    }
    
}
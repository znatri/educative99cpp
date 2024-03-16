#include <iostream>
#include <string>
#include <cmath>
#include <vector>
#include <algorithm>

using namespace std;

int datatypes(){
    int age = 30;
    float cost = 29.12;
    double price = 921.24124;
    char a = 'J';
    string name = "Hardik Goel";
    bool dope = true;
    return 0;
}

int control_structures(){
    int i = 0;

    for (i = 0; i < 10; i++){
        cout << "The loop is at i = " << i << '\n';
    }

    if (i == 10) {
        cout << "The loop has finished \n";
    }
    return 0;
}

int add(int x, int y){
    return x + y;
}

int subtract(int x, int y){
    return x - y;
}

class Car{
    public:
        string brand;
        int speed;
        void honk(){
            cout << "Beep beep! \n";
        }
        void checkSpeeding(){
            if (speed > max_speed){
                cout << "Slow down mf you're overspeeding GSP's gonna get on your ass! Your current speed is " << speed << "mph. It's " << subtract(speed, max_speed) << "mph over the limit. \n";
            } else {
                cout << "Continue cruising choom, you're under speed limit. You're new speed is " << speed <<"mph. \n";
            }
        }
    private:
        int max_speed = 100;
};

int main(){
    datatypes();
    control_structures();

    int a = 5;
    int b = 10;

    cout << "a is " << a << " and b is " << b << '\n';
    cout << "The sum of a and b is " << add(a, b) << '\n';
    cout << "The difference a - b is " << subtract(a, b) << '\n';

    Car new_car;
    new_car.brand = "Hyundai";
    new_car.speed = 148;
    cout << "You car make is " << new_car.brand << '\n';
    new_car.honk(); 
    new_car.checkSpeeding();
    new_car.speed = 80;
    new_car.checkSpeeding();

    vector<int> vec = {4, 1, 3, 5, 2};
    cout << "Sorting in action, unsorted vector: \n";
    for(int n : vec) {
        cout << n << ' ';
    }
    cout << '\n';

    sort(vec.begin(), vec.end());
    cout << "Sorted vector: \n";
    for(int n : vec) {
        cout << n << ' ';
    }
    cout << '\n';

    cin.clear(); // reset any error flags
    cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // ignore any characters in the input buffer until we find a newline
    cin.get(); // get one more char from the user (waits for user to press enter)
    return 0;
}
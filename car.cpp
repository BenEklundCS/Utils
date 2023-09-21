#include <String>
#include <iostream>

class Car {
    private:
        int top_speed;
        int doors;
        std::string brand;
    public:
        Car(int top_speed_input, int doors_input, std::string brand_input) {
            top_speed = top_speed_input;
            doors = doors_input;
            brand = brand_input;
        }
        void car_details() {
            std::cout << "Top Speed: " << top_speed << std::endl 
                      << "Doors:     " << doors << std::endl
                      << "Brand:     " << brand << std::endl;
        }
};
int main() {
    Car two_door_mazda = Car(120, 2, "Mazda");
    Car four_door_ford = Car(105, 4, "Ford");
    two_door_mazda.car_details();
}

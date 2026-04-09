class Vehicle {
public:
    virtual string getType() = 0;
};

class Car : public Vehicle {
public:
    string getType() override {
        return "Car";
    }
};

class Bike : public Vehicle {
public:
    string getType() override {
        return "Bike";
    }
};

class Truck : public Vehicle {
public:
    string getType() override {
        return "Truck";
    }
};

class VehicleFactory {
public:
    virtual Vehicle* createVehicle() = 0;
};

class CarFactory : public VehicleFactory {
    // Write your code here
    Vehicle* createVehicle(){
        Car* mycar = new Car();
        return mycar;
    }
};

class BikeFactory : public VehicleFactory {
    // Write your code here
    Vehicle* createVehicle(){
        Bike* mybike = new Bike();
        return mybike;
    }
};

class TruckFactory : public VehicleFactory {
    // Write your code here
    Vehicle* createVehicle(){
        Truck* mytruck = new Truck();
        return mytruck;
    }
    
};

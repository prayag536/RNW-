#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    string name;
    int rollNumber;

public:
    
    Student(string n, int r)
    {
        name = n;
        rollNumber = r;
    }

 
    void display() {
        cout << "Name: " << name << ", Roll Number: " << rollNumber << endl;
    }
};

int main() {
    
    Student students[] = {
        Student("Alice", 101),
        Student("Bob", 102),
        Student("Charlie", 103)
    };

   
    int size = sizeof(students) / sizeof(students[0]);

   
    for (int i = 0; i < size; i++)
    {
        students[i].display();
    }

    return 0;
}

--------------------------------------------------------------

#include <iostream>
using namespace std;

class Car
{
private:
    string model;
    int year;
    int speed;

public:
    
    void setModel(string m)
    {
        model = m;
    }

    void setYear(int y)
    {
        year = y;
    }

    void setSpeed(int s)
    {
        speed = s;
    }

   
    string getModel() 
    {
        return model;
    }

    int getYear()
    {
        return year;
    }

    int getSpeed()
    {
        return speed;
    }
};

int main() 
{
    Car myCar;

   
    myCar.setModel("Toyota camry");
    myCar.setYear(2024);
    myCar.setSpeed(120);

     cout << "Car Details:" << endl;
    cout << "Car Model: " << myCar.getModel() << endl;
    cout << "Car Year: " << myCar.getYear() << endl;
    cout << "Car Speed: " << myCar.getSpeed() << " km/h" << endl;

    return 0;
}

-------------------------------------------------------------

#include <iostream>
using namespace std;


class Device 
{
private:
    string brand;
    int powerConsumption;

public:
    
    void setBrand(string b) { brand = b; }
    void setPowerConsumption(int p) { powerConsumption = p; }

    string getBrand() { return brand; }
    int getPowerConsumption() { return powerConsumption; }

    
    virtual void displayInfo() = 0; 
};


class Laptop : public Device 
{
private:
    int batteryLife;

public:
    void setBatteryLife(int bl) { batteryLife = bl; }
    int getBatteryLife() { return batteryLife; }

   
    void displayInfo() override
    {
        cout << "Laptop Brand: " << getBrand() << endl;
        cout << "Power Consumption: " << getPowerConsumption() << "W" << endl;
        cout << "Battery Life: " << batteryLife << " hours" << endl;
    }
};


class Smartphone : public Device
{
private:
    int cameraResolution;

public:
    void setCameraResolution(int cr) { cameraResolution = cr; }
    int getCameraResolution() { return cameraResolution; }

   
    void displayInfo() override
    {
        cout << "Smartphone Brand: " << getBrand() << endl;
        cout << "Power Consumption: " << getPowerConsumption() << "W" << endl;
        cout << "Camera Resolution: " << cameraResolution << " MP" << endl;
    }
};

int main()
{
    
    Laptop myLaptop;
    Smartphone myPhone;

    
    myLaptop.setBrand("acer nitro 16");
    myLaptop.setPowerConsumption(95);
    myLaptop.setBatteryLife(5);

    myPhone.setBrand("Samsung s 24 ultra");
    myPhone.setPowerConsumption(20);
    myPhone.setCameraResolution(108);

   
    Device* devices[] = {&myLaptop, &myPhone};
    
    for (Device* dev : devices)
    {
        dev->displayInfo();
        cout << "-------------------" << endl;
    }

    return 0;
}

-------------------------------------------------------------

#include <iostream>
using namespace std;

class Device 
{
public:
    virtual double calculateDiscount() const = 0; 
    virtual void display() const = 0; 
    virtual ~Device() {} 
};


class Laptop : public Device
{
    double price;
public:
    Laptop(double p) : price(p) {}
    double calculateDiscount() const override
    {
        return price * 0.10; 
    }
    void display() const override
    {
        cout << "Laptop - Discount: $" << calculateDiscount() << endl;
    }
};


class Smartphone : public Device 
{
    double price;
public:
    Smartphone(double p) : price(p) {}
    double calculateDiscount() const override
    {
        return price * 0.15; 
    }
    void display() const override 
    {
        cout << "Smartphone - Discount: $" << calculateDiscount() << endl;
    }
};

int main()
{
   
    Device* devices[] =
    {
        new Laptop(1000),
        new Smartphone(800),
    };

    for (int i = 0; i < 2; ++i)
    {
        devices[i]->display();
        delete devices[i]; 
    }
    
    return 0;
}

-------------------------------------------------------------

#include <iostream>
#include <stdexcept>

class MathOperations
{
public:
    double divide(double numerator, double denominator) 
    {
        if (denominator == 0)
        {
            throw std::runtime_error("Error: Division by zero is not allowed.");
        }
        if (numerator < 0 || denominator < 0) 
        {
            throw std::invalid_argument("Error: Negative numbers are not allowed in division.");
        }
        return numerator / denominator;
    }
};

int main()
{
    MathOperations mathOps;
    double num1, num2;

    try 
    {
        std::cout << "Enter numerator: ";
        std::cin >> num1;
        std::cout << "Enter denominator: ";
        std::cin >> num2;

        double result = mathOps.divide(num1, num2);
        std::cout << "Result: " << result << std::endl;
    } catch (const std::exception &e)
    {
        std::cerr << e.what() << std::endl;
    }

    return 0;
}

-------------------------------------------------------------

#include <iostream>
using namespace std;

class Animal 
{
private:
    string name;
    string sound;

public:
    void setName(string name) 
    {
        this->name = name; 
    }
    void setSound(string sound) 
    {
        this->sound = sound; 
    }

    string getName() 
    {
        return name; 
    }
    string getSound() 
    {
        return sound; 
    }
};

class lion : public Animal

{
    
public:
    void makeSound() 
    
    {
        
        setSound("roar!");
        cout << "lion says: " << getSound() << endl;
        
    }
    
};

class fish : public Animal 
{
public:
    void makeSound() 
    {
        setSound("bumps!");
        cout << "fish says: " << getSound() << endl;
    }
};

int main() 
{
    lion d;
    d.setName("Buddy");
    d.makeSound();

    fish c;
    c.setName("Whiskers");
    c.makeSound();

    return 0;
}

--------------------------------------------------------------


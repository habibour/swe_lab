// #include <iostream>

// using namespace std;

// class burger
// {
// public:
//     virtual void create() = 0;
//     virtual string name() = 0;
// };

// class VegBurger : public burger
// {
// public:
//     void create()
//     {
//         cout << "Created VegBurger!!!" << endl;
//     }

//     string name()
//     {
//         return "Vegi burger";
//     }
// };

// class NonVegBurger : public burger
// {
//     void create()
//     {
//         cout << "Created Non-vegBurger!!!" << endl;
//     }

//     string name()
//     {
//         return "Non-veg burger";
//     }
// };

// class pizza
// {
// public:
//     virtual void create() = 0;
//     virtual string name() = 0;
// };

// class VegPizza : public pizza
// {
//     void create()
//     {
//         cout << "Created Veg Pizza!!!" << endl;
//     }

//     string name()
//     {
//         return "Veg pizza";
//     }
// };

// class NonVegPizza : public pizza
// {
//     void create()
//     {
//         cout << "Created NonVeg Pizza!!!" << endl;
//     }

//     string name()
//     {
//         return "NonVeg pizza";
//     }
// };

// class Restaurant
// {
// public:
//     virtual burger *prepareBurger() = 0;
//     virtual pizza *preparePizza() = 0;
// };

// class VegRestaurant : public Restaurant
// {
//     burger *prepareBurger()
//     {
//         burger *b = new VegBurger();
//         return b;
//     }

//     pizza *preparePizza()
//     {
//         pizza *p = new VegPizza();
//         return p;
//     }
// };

// class NonVegRestaurant : public Restaurant
// {
//     burger *prepareBurger()
//     {
//         burger *b = new NonVegBurger();
//         return b;
//     }

//     pizza *preparePizza()
//     {
//         pizza *p = new NonVegPizza();
//         return p;
//     }
// };

// // int main()
// // {
// //     Restaurant *f = new VegRestaurant();
// //     burger *b = f->prepareBurger();
// //     b->create();
// //     return 0;
// // }

// my_code.cpp
#include <iostream>
#include <string>
using namespace std;

class Shape
{
public:
    virtual void draw() = 0;
    virtual string name() = 0;
};

class Circle : public Shape
{
public:
    void draw()
    {
        cout << "Drawing Circle" << endl;
    }
    string name()
    {
        return "Circle";
    }
};

class Rectangle : public Shape
{
public:
    void draw()
    {
        cout << "Drawing Rectangle" << endl;
    }
    string name()
    {
        return "Rectangle";
    }
};

class ShapeFactory
{
public:
    Shape *getShape(string shapeType)
    {
        if (shapeType == "circle")
            return new Circle();
        if (shapeType == "rectangle")
            return new Rectangle();
        return nullptr;
    }
};

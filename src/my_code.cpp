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
// #include <iostream>
// #include <string>
// using namespace std;

// class Shape
// {
// public:
//     virtual void draw() = 0;
//     virtual string name() = 0;
// };

// class Circle : public Shape
// {
// public:
//     void draw()
//     {
//         cout << "Drawing Circle" << endl;
//     }
//     string name()
//     {
//         return "Circle";
//     }
// };

// class Rectangle : public Shape
// {
// public:
//     void draw()
//     {
//         cout << "Drawing Rectangle" << endl;
//     }
//     string name()
//     {
//         return "Rectangle";
//     }
// };

// class ShapeFactory
// {
// public:
//     Shape *getShape(string shapeType)
//     {
//         if (shapeType == "circle")
//             return new Circle();
//         if (shapeType == "rectangle")
//             return new Rectangle();
//         return nullptr;
//     }
// };

// absteract_factory.cpp

// #include <iostream>
// #include <string>
// using namespace std;

// class Chair
// {
// public:
//     virtual string getType() = 0;
// };

// class VictorianChair : public Chair
// {
// public:
//     string getType()
//     {
//         return "Victorian Chair";
//     }
// };

// class ModernChair : public Chair
// {
// public:
//     string getType()
//     {
//         return "Modern Chair";
//     }
// };

// class Sofa
// {
// public:
//     virtual string getStyle() = 0;
// };

// class VictorianSofa : public Sofa
// {
// public:
//     string getStyle()
//     {
//         return "Victorian Sofa";
//     }
// };

// class ModernSofa : public Sofa
// {
// public:
//     string getStyle()
//     {
//         return "Modern Sofa";
//     }
// };

// class FurnitureFactory
// {
// public:
//     virtual Chair *createChair() = 0;
//     virtual Sofa *createSofa() = 0;
// };

// class VictorianFurnitureFactory : public FurnitureFactory
// {
// public:
//     Chair *createChair()
//     {
//         return new VictorianChair();
//     }

//     Sofa *createSofa()
//     {
//         return new VictorianSofa();
//     }
// };

// class ModernFurnitureFactory : public FurnitureFactory
// {
// public:
//     Chair *createChair()
//     {
//         return new ModernChair();
//     }

//     Sofa *createSofa()
//     {
//         return new ModernSofa();
//     }
// };

#include <iostream>
#include <string>

using namespace std;

// Abstract Product: Window
class Window
{
public:
    virtual void render() = 0;
    virtual ~Window() {}
};

// Concrete Product: Windows Window
class WindowsWindow : public Window
{
public:
    void render() override
    {
        cout << "Rendering Windows Window" << endl;
    }
};

// Concrete Product: Linux Window
class LinuxWindow : public Window
{
public:
    void render() override
    {
        cout << "Rendering Linux Window" << endl;
    }
};

// Abstract Product: Scrollbar
class Scrollbar
{
public:
    virtual void render() = 0;
    virtual ~Scrollbar() {}
};

// Concrete Product: Windows Scrollbar
class WindowsScrollbar : public Scrollbar
{
public:
    void render() override
    {
        cout << "Rendering Windows Scrollbar" << endl;
    }
};

// Concrete Product: Linux Scrollbar
class LinuxScrollbar : public Scrollbar
{
public:
    void render() override
    {
        cout << "Rendering Linux Scrollbar" << endl;
    }
};

// Abstract Factory
class GUIFactory
{
public:
    virtual Window *createWindow() = 0;
    virtual Scrollbar *createScrollbar() = 0;
    virtual ~GUIFactory() {}
};

// Concrete Factory: Windows
class WindowsFactory : public GUIFactory
{
public:
    Window *createWindow() override
    {
        return new WindowsWindow();
    }

    Scrollbar *createScrollbar() override
    {
        return new WindowsScrollbar();
    }
};

// Concrete Factory: Linux
class LinuxFactory : public GUIFactory
{
public:
    Window *createWindow() override
    {
        return new LinuxWindow();
    }

    Scrollbar *createScrollbar() override
    {
        return new LinuxScrollbar();
    }
};

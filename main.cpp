#include <iostream>

class Animal{
    protected:
        std::string dna;
        void move(){
            std::cout << "Call func move" << std::endl;
        }
        void breath(){
            std::cout << "Call func breath" << std::endl;
        }
        void eat(){
            std::cout << "Call func eat" << std::endl;
        }
        void reproduce(){
            std::cout << "Call func reproduce" << std::endl;
        }
    public:
        Animal(){
            breath();
        };
};

class Aerial:public Animal{
    protected:
        int wing;
        int feather;
        void fly(){
            std::cout << "Call func fly" << std::endl;
        }
    public:
        Aerial(){
            fly();
        }
};

class Aquatic:public Animal{
    protected:
        double gills;
        void breath_underwater(){
            std::cout << "Call func breath underwater" << std::endl;
        }
        void swim(){
            std::cout << "Call func swim" << std::endl;
        }
    public:
        Aquatic(){
            breath_underwater();
            swim();
        }
};

class Mammal:public Animal{
    protected:
        double mammary_gland;
        void walk(){
            std::cout << "Call func walk" << std::endl;
        }
        void run(){
            std::cout << "Call func run" << std::endl;
        }
    public:
        Mammal(){
            walk();
        }
};

class Dog:public Mammal{
    protected:
        void bark(){
            std::cout << "Call func bark" << std::endl; 
        }
    public:
        Dog(){
            bark();
        }
};

class Cat:public Mammal{
    protected:
        void meow(){
            std::cout << "Call func meow" << std::endl; 
        }
    public:
        Cat(){
            meow();
        }
};

class Eagle:public Aerial{
    protected:
        void peal(){
            std::cout << "Call func peal" << std::endl; 
        }
    public:
        Eagle(){
            peal();
        }
};

class Owl:public Aerial{
    protected:
        void hoot(){
            std::cout << "Call func hoot" << std::endl; 
        }
    public:
        Owl(){
            hoot();
        }
};

class Frog:public Aquatic{
    protected:
        void croak(){
            std::cout << "Call func croak" << std::endl; 
        }
    public:
        Frog(){
            croak();
        }
};

class Whale:public Aquatic{
    protected:
        void whistle(){
            std::cout << "Call func whistle" << std::endl; 
        }
    public:
        Whale(){
            whistle();
        }
};

int main(){
    std::cout << "Dog:\n";
    Dog d;
    std::cout << "Cat:\n";
    Cat c;
    std::cout << "Eagle:\n";
    Eagle e;
    std::cout << "Owl:\n";
    Owl o;
    std::cout << "Frog:\n";
    Frog f;
    std::cout << "Whale:\n";
    Whale w;
    return 0;
}
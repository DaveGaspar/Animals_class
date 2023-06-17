#include <iostream>

class Animal{
    protected:
        int dna_size;
        std::string* p_dna;
        virtual void voice(){
            std::cout << "I'm an animal" << std::endl;
        }
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
            voice();
        };
        Animal(int size){
            dna_size = size;
            p_dna = new std::string[dna_size];
            breath();
            voice();
        };
        Animal (const Animal& obj){
            this->dna_size = obj.dna_size;
            p_dna = new std::string[dna_size];
            for (int i = 0; i < dna_size; i++)
                this->p_dna = obj.p_dna;
        }
        Animal& operator = (const Animal& obj){
            if (this != &obj){
                delete[] this->p_dna;
                p_dna = nullptr;
                this->dna_size = obj.dna_size;
                p_dna = new std::string[dna_size];
                for (int i = 0; i < dna_size; i++)
                    this->p_dna = obj.p_dna;
            }
            return *this;
        }
        ~Animal(){
            delete[] p_dna;
            p_dna = nullptr;
        }
};

class Aerial:public Animal{
    protected:
        int feather_size;
        int wing;
        int* p_feather;
        virtual void voice(){
            std::cout << "I'm an aerial animal" << std::endl;
        } 
    public:
        Aerial(){
            feather_size = 5;
            p_feather = new int[feather_size];
            fly();
            voice();
        }
        Aerial(int size){
            feather_size = size;
            p_feather = new int[size];
            fly();
            voice();
        }
        Aerial (const Aerial& obj){
            this->feather_size = obj.feather_size;
            p_feather = new int[feather_size];
            for (int i = 0; i < feather_size; i++)
                this->p_feather = obj.p_feather;
        }
        Aerial& operator = (const Aerial& obj){
            if (this != &obj){
                delete[] this->p_feather;
                p_feather = nullptr;
                this->feather_size = obj.feather_size;
                p_feather = new int[feather_size];
                for (int i = 0; i < feather_size; i++)
                    this->p_feather = obj.p_feather;
            }
            return *this;
        }
        ~Aerial(){
            delete[] p_feather;
            p_feather = nullptr;
        }
        void fly(){
            std::cout << "Call func fly" << std::endl;
        }
};

class Aquatic:public Animal{
    protected:
        int gil_size;
        int* p_gill;
        int fin;
        virtual void voice(){
            std::cout << "I'm an aquatic animal" << std::endl;
        }
    public:
        Aquatic(){
            gil_size = 5;
            p_gill = new int[gil_size];
            breath_underwater();
            swim();
            voice();
        }
        Aquatic(int size){
            gil_size = size;
            p_gill = new int[gil_size];
            breath_underwater();
            swim();
            voice();
        }
        Aquatic (const Aquatic& obj){
            this->gil_size = obj.gil_size;
            p_gill = new int[gil_size];
            for (int i = 0; i < gil_size; i++)
                this->p_gill = obj.p_gill;
        }
        Aquatic& operator = (const Aquatic& obj){
            if (this != &obj){
                delete[] this->p_gill;
                p_gill = nullptr;
                this->gil_size = obj.gil_size;
                p_gill = new int[gil_size];
                for (int i = 0; i < gil_size; i++)
                    this->p_gill = obj.p_gill;
            }
            return *this;
        }
        ~Aquatic(){
            delete[] p_gill;
            p_gill = nullptr;
        }
        void breath_underwater(){
            std::cout << "Call func breath underwater" << std::endl;
        }
        void swim(){
            std::cout << "Call func swim" << std::endl;
        }
};

class Mammal:public Animal{
    protected:
        int hair_size;
        std::string* p_hair;
        int mammary_gland;
        virtual void voice(){
            std::cout << "I'm a mammal animal" << std::endl;
        }
    public:
        Mammal(){
            hair_size = 5;
            p_hair = new std::string[hair_size];
            walk();
            voice();
        }
        Mammal(int size){
            hair_size = size;
            p_hair = new std::string[hair_size];
            walk();
            voice();
        }
        Mammal (const Mammal& obj){
            this->hair_size = obj.hair_size;
            p_hair = new std::string[hair_size];
            for (int i = 0; i < hair_size; i++)
                this->p_hair = obj.p_hair;
        }
        Mammal& operator = (const Mammal& obj){
            if (this != &obj){
                delete[] this->p_hair;
                p_hair = nullptr;
                this->hair_size = obj.hair_size;
                p_hair = new std::string[hair_size];
                for (int i = 0; i < hair_size; i++)
                    this->p_hair = obj.p_hair;
            }
            return *this;
        }
        ~Mammal(){
            delete[] p_hair;
            p_hair = nullptr;
        }
        void walk(){
            std::cout << "Call func walk" << std::endl;
        }
        void run(){
            std::cout << "Call func run" << std::endl;
        }
};

class Dog:public Mammal{
    protected:
        int sweat_gland_size;
        int* p_sweat_gland;
        virtual void voice(){
            std::cout << "I'm a dog" << std::endl; 
        }
    public:
        Dog(){
            sweat_gland_size = 5;
            p_sweat_gland = new int[sweat_gland_size];
            voice();
        }
        Dog(int size){
            sweat_gland_size = size;
            p_sweat_gland = new int[sweat_gland_size];
            voice();
        }
        Dog (const Dog& obj){
            this->sweat_gland_size = obj.sweat_gland_size;
            p_sweat_gland = new int[sweat_gland_size];
            for (int i = 0; i < sweat_gland_size; i++)
                this->p_sweat_gland = obj.p_sweat_gland;
        }
        Dog& operator = (const Dog& obj){
            if (this != &obj){
                delete[] this->p_sweat_gland;
                p_sweat_gland = nullptr;
                this->sweat_gland_size = obj.sweat_gland_size;
                p_sweat_gland = new int[sweat_gland_size];
                for (int i = 0; i < sweat_gland_size; i++)
                    this->p_sweat_gland = obj.p_sweat_gland;
            }
            return *this;
        }
        ~Dog(){
            delete[] p_sweat_gland;
            p_sweat_gland = nullptr;
        }
        void wag_tail(){
            std::cout << "Call func wag tail" << std::endl; 
        }
};

class Lion:public Mammal{
    protected:
        int mane_size;
        int* p_mane;
        virtual void voice(){
            std::cout << "I'm a lion" << std::endl; 
        }
    public:
        Lion(){
            mane_size = 5;
            p_mane = new int[mane_size];
            voice();
        }
        Lion(int size){
            mane_size = size;
            p_mane = new int[mane_size];
            voice();
        }
        Lion (const Lion& obj){
            this->mane_size = obj.mane_size;
            p_mane = new int[mane_size];
            for (int i = 0; i < mane_size; i++)
                this->p_mane = obj.p_mane;
        }
        Lion& operator = (const Lion& obj){
            if (this != &obj){
                delete[] this->p_mane;
                p_mane = nullptr;
                this->mane_size = obj.mane_size;
                p_mane = new int[mane_size];
                for (int i = 0; i < mane_size; i++)
                    this->p_mane = obj.p_mane;
            }
            return *this;
        }
        ~Lion(){
            delete[] p_mane;
            p_mane = nullptr;
        }
        void attack(){
            std::cout << "Call func attack" << std::endl; 
        }
};

class Cat:public Mammal{
    protected:
        int r_claws_size;
        int* p_rectable_claws;
        virtual void voice(){
            std::cout << "I'm a cat" << std::endl; 
        }
    public:
        Cat(){
            r_claws_size = 5;
            p_rectable_claws = new int[r_claws_size];
            voice();
        }
        Cat(int size){
            r_claws_size = size;
            p_rectable_claws = new int[r_claws_size];
            voice();
        }
        Cat (const Cat& obj){
            this->r_claws_size = obj.r_claws_size;
            p_rectable_claws = new int[r_claws_size];
            for (int i = 0; i < r_claws_size; i++)
                this->p_rectable_claws = obj.p_rectable_claws;
        }
        Cat& operator = (const Cat& obj){
            if (this != &obj){
                delete[] this->p_rectable_claws;
                p_rectable_claws = nullptr;
                this->r_claws_size = obj.r_claws_size;
                p_rectable_claws = new int[r_claws_size];
                for (int i = 0; i < r_claws_size; i++)
                    this->p_rectable_claws = obj.p_rectable_claws;
            }
            return *this;
        }
        ~Cat(){
            delete[] p_rectable_claws;
            p_rectable_claws = nullptr;
        }
        void purr(){
            std::cout << "Call func purr" << std::endl; 
        }
};

class Eagle:public Aerial{
    protected:
        virtual void voice(){
            std::cout << "I'm an eagle" << std::endl; 
        }
    public:
        Eagle(){
            voice();
        }
};

class Owl:public Aerial{
    protected:
        int r_toe_size;
        int* p_reversible_toe;
        virtual void voice(){
            std::cout << "I'm an owl" << std::endl; 
        }
    public:
        Owl(){
            r_toe_size = 2;
            p_reversible_toe = new int[r_toe_size];
            voice();
        }
        Owl(int size){
            r_toe_size = size;
            p_reversible_toe = new int[r_toe_size];
            voice();
        }
        Owl (const Owl& obj){
            this->r_toe_size = obj.r_toe_size;
            p_reversible_toe = new int[r_toe_size];
            for (int i = 0; i < r_toe_size; i++)
                this->p_reversible_toe = obj.p_reversible_toe;
        }
        Owl& operator = (const Owl& obj){
            if (this != &obj){
                delete[] this->p_reversible_toe;
                p_reversible_toe = nullptr;
                this->r_toe_size = obj.r_toe_size;
                p_reversible_toe = new int[r_toe_size];
                for (int i = 0; i < r_toe_size; i++)
                    this->p_reversible_toe = obj.p_reversible_toe;
            }
            return *this;
        }
        ~Owl(){
            delete[] p_reversible_toe;
            p_reversible_toe = nullptr;
        }
};

class Hummingbird:public Aerial{
    protected:
        virtual void voice(){
            std::cout << "I'm an hummingbird" << std::endl; 
        }
    public:
        Hummingbird(){
            voice();
        }
};

class Frog:public Aquatic{
    protected:
        int v_sacs_size;
        std::string* p_vocal_sacs;
        virtual void voice(){
            std::cout << "I'm a frog" << std::endl; 
        }
    public:
        Frog(){
            v_sacs_size = 2;
            p_vocal_sacs = new std::string[v_sacs_size];
            voice();
        }
            Frog(int size){
            v_sacs_size = size;
            p_vocal_sacs = new std::string[v_sacs_size];
            voice();
        }
        Frog (const Frog& obj){
            this->v_sacs_size = obj.v_sacs_size;
            p_vocal_sacs = new std::string[v_sacs_size];
            for (int i = 0; i < v_sacs_size; i++)
                this->p_vocal_sacs = obj.p_vocal_sacs;
        }
        Frog& operator = (const Frog& obj){
            if (this != &obj){
                delete[] this->p_vocal_sacs;
                p_vocal_sacs = nullptr;
                this->v_sacs_size = obj.v_sacs_size;
                p_vocal_sacs = new std::string[v_sacs_size];
                for (int i = 0; i < v_sacs_size; i++)
                    this->p_vocal_sacs = obj.p_vocal_sacs;
            }
            return *this;
        }
        ~Frog(){
            delete[] p_vocal_sacs;
            p_vocal_sacs = nullptr;
        }
};

class Whale:public Aquatic{
    protected:
        virtual void  voice(){
            std::cout << "I'm a whale" << std::endl; 
        }
    public:
        Whale(){
            voice();
        }
};

class Shark:public Aquatic{
    protected:
        virtual void voice(){
            std::cout << "I'm a shark" << std::endl; 
        }
    public:
        Shark(){
            voice();
        }
};

int main(){
    Mammal* m = new Mammal;
    std::cout << std::endl;
    Aquatic* aq = new Aquatic;
    std::cout << std::endl;
    Aerial* ae = new Aerial;
    std::cout << std::endl;
    Dog* d = new Dog;
    std::cout << std::endl;
    Cat* c = new Cat(4);
    std::cout << std::endl;
    Lion* l = new Lion(3);
    std::cout << std::endl;
    Eagle* e = new Eagle;
    std::cout << std::endl;
    Owl* o = new Owl;
    Hummingbird* h = new Hummingbird;
    std::cout << std::endl;
    Frog* f = new Frog;
    std::cout << std::endl;
    Whale* w = new Whale;
    std::cout << std::endl;
    Shark* s = new Shark;
    std::cout << std::endl;

    Animal* arr[100];
    arr[0] = m;
    arr[1] = aq;
    arr[2] = ae;
    arr[3] = d;
    arr[4] = c;
    arr[5] = l;
    arr[6] = e;
    arr[7] = o;
    arr[8] = h;
    arr[9] = f;
    arr[10] = w;
    arr[11] = s;

    return 0;
}
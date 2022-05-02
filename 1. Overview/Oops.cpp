#include <iostream>

class HumanBeing
{
    public:
        HumanBeing(std::string n): name(n){}

        std::string getName() const
        {
            return name;
        }

        void changeName(const std::string& newName)
        {
            name = newName;
        }
    
    private:
        std::string name;
};

class Man : public HumanBeing
{ using HumanBeing::HumanBeing;
    public:
        std::string getSex() const
        {
            return "Male";
        }
};

class Woman : public HumanBeing
{
    public:
        std::string getSex() const
        {
            return "Female";
        }
};

int main()
{
    Man man("Kalpak");
    std::cout << "Name: " << man.getName() << std::endl;
    man.changeName("Kalpak Seal");

    std::cout << "New Name: " << man.getName() << std::endl;
    std::cout << "Sex: " << man.getSex() << std::endl;
}
#include<iostream>

using namespace std;

class phone
{
    private:
        string name;
        int RAM;
        string processor;
        int battery;

    public:

        phone()
        {
            name = "NULL";
            RAM = 0;
            processor = "NULL";
            battery = 0;
        }

        phone(string Name , int ram , string Pro, int Bat)
        {
            name = Name;
            RAM = ram;
            processor = Pro;
            battery = Bat;

        }

        phone(phone &mob)
        {
            name = mob.name;
            RAM = mob.RAM;
            processor = mob.processor;
            battery = mob.battery;

        }

        void get_data();
        
};

void phone::get_data()
        {
            cout<<name<<endl;
            cout<<RAM<<endl;
            cout<<processor<<endl;
            cout<<battery<<endl;
        }

int main()
{
    phone redmi, moto("Motorola",128,"Snapdragon",4000), realme(moto);
    moto.get_data();
    redmi.get_data();
    realme.get_data();

    return 0;

}
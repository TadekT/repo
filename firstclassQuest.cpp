#include<iostream>
#include<string>
#include<vector>

class Ship{
private:
    int id_{-1};
    std::string name_;
    int speed_;
    int maxCrew_;
    int capacityc_;

public:
//constructor
    Ship()
    :id_(-1){};
    Ship(int id, std::string name, int speed, int maxCrew,int capacityc)
     : id_(id)
     , name_(name)
     , speed_(speed)
     , maxCrew_(maxCrew)
     , capacityc_(capacityc)
    {}
    Ship(int id, std::string name, int speed, int maxCrew)
    :Ship(id,"",speed,maxCrew,0){}
    //method
    void setName(const std::string &name)
    {
        name_=name;
    }
};

int main(){

    return 0;
}
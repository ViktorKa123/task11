#include <iostream>

void scene1(std::string Item , int cost) {
    std::string b;

    std::cout << "you want to buy a" + Item + "?" << std::endl;
    std::cin >> b;
    if (b == "yes") {
        std::cout << "The price is ";
        std::cout << cost;
        std::cout << " do you buy it?" << std::endl;
        std::cin >> b;
        if (b == "yes") {
            std::cout << "you bought a " + Item + "and are happy" << std::endl;
        } else if (b == "no") {
            while (true) {
                std::cout << "do you leave?" << std::endl;
                std::cin >> b;
                if (b == "yes") {
                    break;
                } else if (b == "no") {

                }
            }

        } else if (b == "no") {
            while (true) {
                std::cout << "you wonder why did you enter a" + Item + "store when you didnt want a " + Item +
                             ", do you leave?"
                          << std::endl;
                std::cin >> b;
                if (b == "yes") {
                    break;
                } else if (b == "no") {

                }
            }
        }
    }
}

void scene2(std::string Name, int Cal){
std::string b;
std::cout << "you are hungry you want to make food?" << std::endl;
std::cin >> b;
if(b == "yes")
{
    std::cout <<"the only thing you can make is " + Name + " do you cook it?" << std::endl;
    std::cin >> b;
    if(b == "yes")
    {
        std::cout <<"the " + Name + " has been cooked and it has " ;
        std::cout << Cal;
        std::cout << " calories do you eat it?" << std::endl;
        if(b == "yes"){
            std::cout << "you enjoy your meal" << std::endl;
        }
        else if(b == "no"){
            std::cout << "you starve" << std::endl;
        }
    }
    else if(b == "no")
    {
       std::cout <<"you decide to starve" << std::endl;
    }
}
else if(b == "no"){
    std::cout <<"then you are not hungry" << std::endl;
}
}

struct product{
    std::string name;
    int price;
};

struct food{
    std::string name;
    int calories;
};

int main() {
    product productItem[1];
    productItem[0] = {"phone", 200};

    food foodItem[1];
    foodItem[0] = {"streak", 1500};


    int a =0;

std::cout << "choose a struct 1-3" << std::endl;
std::cin >> a;
if(a == 1){
 scene1(productItem[0].name, productItem[0].price);
}
else if(a == 2)
{
    scene2(foodItem[0].name,foodItem[0].calories);
}
    return 0;
}

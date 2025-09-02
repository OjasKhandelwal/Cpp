#include<iostream>
using namespace std;

class car{


    int price;
};

class hero{
    public:   
    int health;

    private:  
    int level;

    void lev(){
        cout<<level<<endl;  
    }



    public:
    
    int getLevel(){ 
        return level;
    }

    void setLevel(int lv){
        level = lv;

    }
//a constructor is a special member function of a class that is automatically called when an object of the class is created.
//Its main purpose is to initialize the object’s data members.

//vese to jab hum object create karte hai to by default constructor bhi call ho jata hai
//but if we create out own constructor then there will be no default constructor , phir wahi rehega jo humne banaya hai 
    hero(){   
        cout<<"constructor called"<<endl;
    }


    //parameterized constructor
    hero(int level){
        level = level;   //yaha par ye line 45 ko line 45 par hi return kar raha hai 
        //but hum chahte hai ki line 15 me current line ki level value dall jaaye , so we use "this" keyword
        this-> level = level;

    }
};

int main(){
    hero h1;  //jitni baar hum object declare karenge , utni baar constructor call hoga 
    hero h2;
}
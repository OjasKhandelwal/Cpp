#include<iostream>
using namespace std;

class car{

    //properties
    int price;
};

class hero{

    public:    //class ke andar & class ke bahar kahi bhi access akr sakte hai 
    int health;

    private:   //sirf class ke andar access kar sakte hai & class ke bahar nahi
    int level;

    void lev(){
        cout<<level<<endl;   //yaha error nahi aayega as we are accessing level inside class
    }



    public:
    //to access private property outside class , we use getter & setter
    int getLevel(){  ///getter
        return level;
    }

    void setLevel(int lv){
        level = lv;

    }


    hero(){   //vese to jab hum object create karte hai to by default constructor bhi ho jata hai
        cout<<"constructor called"<<endl;
    }
};


int main(){
    
    //object - instance of class
    car p1;

    cout<<"size :"<<sizeof(p1)<<endl; //it will return 4 as int has 4 bytes size
    //if the class was empty , i.e. no int price line still it would return 1...
    //because to keep the track of class created it is given 1 bytes
    


    
    hero h1;  //static allocation

    h1.health = 80; 

    cout<<"health : "<<h1.health<<endl;
    // cout<<"level : "<<h1.level<<endl;     this line will give error as level is private


    h1.setLevel(99);  //using setter
    cout<<"level : " << h1.getLevel()<<endl;  //accessing private property using getter


    hero *b = new hero;  //dynamic allocation

    b->setLevel(39);
    b->health = 72;

//there are 2 ways to access class members
//1st way    
    cout<<"health : "<<(*b).health<<endl;
    cout<<"level : " << (*b).getLevel()<<endl;

    //2nd way
    cout<<"health : "<<b -> health<<endl;
    cout<<"level : " << b -> getLevel()<<endl;


    return 0;
}
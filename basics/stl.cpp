#include<bits/stdc++.h>
using namespace std;



void explainPair(){
    pair<int,int> p = {1,3};  //used to store 2 variables at once
    cout << p.first <<" " << p.second;

    //if we wanna store 3 variables
    pair<int , pair<int,int>> p = {1,{3,4}};  //nested pair
    cout << p2.first <<" " << p2.second.first <<" " << p2.second.second << endl;


    pair<int,int> arr[] = {{1,2},{3,4},{5,6}};
    cout<<arr[1].second;


}




void explainVector(){
    //unlike array , we can always increase the size of a vector , i.e. its dynamic in nature
    vector<int> v;
    
    v.push_back(1); //as vec is empty , this pushes 1 into the vector
    v.emplace_back(2); //as the size of vec is 1 , this increases the size dynamically and pushes 2 into the vec

    //we can always increase the size of vec by using push/emplace_back

    vector<pair<int,int>>vec;
    
    vec.push_back({1,2});
    vec.emplace_back(1,2); //we dont need to use {} here 

    vector<int> v1(5,20);   //v1 = {20,20,20,20,20}
    vector<int> v2(5);  //v2 = {0,0,0,0,0}

    //we can access the elements of vec by using index like v[0] , v[3] , etc..
    //the other way is using iterators

    //iterators points to memory address
    vector<int>::iterator x = v.begin();  //begin points directly to memory
    x++; //shifts to next memory address
    cout<<*(x)<<" "; // to access the element at memory address , we use *

    //v.end() - points to a memory location right after the last element , so we use v-- here

    //v.back() - last element


    //to print the vector we use for loop

    //method 1
    for(auto x = v.begin(); x!= v.end(); x++){
//auto is used so we dont write long syntax of iterator
//we dont need to define datatype while using auto , as it auto assigns it        
        cout<<*(x)<<" ";
    }

    //method 2
    for(auto x : v){ //access directly the element values
         cout<<x<<" ";
    }

    //deletion in the vector
    v.erase(v.begin()+1);  //v.erase(location) ,this erases single element
    //v.erase(start,end) , this erases multiple elements


    //insert function
    //v.insert(location , element)
    v.insert(v.begin() , 300); //inserts 300 at the beginning

    //v.insert(location , no.ofelements , element) - insert multiple elements
    //assume we have vect = {300,100,100}
    v.insert(v.begin()+1,2,10); //now vect = {300,10,10,100,100}

    v.size(); //tells how many elements are there in the vector as off now
    v.pop_back();  //pops out the last element 
    v1.swap(v2); //swaps v1 with v2
    v.clear(); //erases the entire vector
    v.empty() ; // returns true or false

}





void explainList(){ 
    list<int> ls;

    ls.push_back(2); //{2}
    ls.emplace_back(4); //{2,4}
    ls.push_front(5); //{5,2,4}
    ls.emplace_front();
    
    //rest functions are same as vector

}





void explainDeque(){
    deque<int> dq;

    //same as list & vector
}




void explainStack(){
    stack<int> st; //uses LIFO

    st.push(1); //{1}
    st.push(2); //{2,1}
    st.push(3); //{3,2,1}
    st.emplace(5); //{5,3,2,1}

//we cant use indexing in index

    st.top(); //prints 5 , i.e. the last element that went in

    st.pop(); //{3 , 2 , 1}

    //rest funcs - size , empty , swap

    //time complexity of all operations in stack => O(1)

}




void explainQueue(){
    queue<int> q;  //uses FIFO

    q.push(1); //{1}
    q.push(2); //{1,2}
    q.emplace(5); //{1,2,5}

// emplace , front , back , pop


}



void explainPQ(){
    priority_queue<int> pq;  //max heap  
    //the largest element stays at the top

    pq.push(5); //{5}
    pq.push(2); //{5,2}
    pq.push(8); //{8,5,2}
    pq.emplace(10); //{10,8,5,2}

    //swap , pop , emplace , top

    //if we want pq with smallest element at the top
    priority_queue<int , vector<int> , greater<int>> pq;  //min heap
    pq.push(5); //{5}
    pq.push(2); //{2,5}
    pq.push(8); //{2,5,8}
    pq.emplace(10); //{2,5,8,10}

   //push , pop => O(log n)
   //top => O(1) 

}




void explainSet(){
    //stores everyting in sorted manner & unique
    set<int> st;
    st.insert(1); // {1}
    st.emplace(2); // {1, 2}
    st.insert(2); // does not stores 2 so : {1, 2}  
    st.insert(4); // {1, 2, 4}
    st.insert(3); // {1, 2, 3, 4}

    // Functionality of insert in vector
    // can be used also, that only increases
    // efficiency

    // begin(), end(), rbegin(), rend(), size(),
    // empty() and swap() are same as those of above

    // {1, 2, 3, 4, 5}
    auto it = st.find(3); //it = iterator

    // {1, 2, 3, 4, 5}
    auto it = st.find(6); //if the element is not in the set , it will always return st.end() 

    // {1, 4, 5} // erases 5 // takes logarithmic time
    st.erase(5);

    int cnt = st.count(1); // 1 or 0



    //erase , size , empty , etc..

    auto it = st.lower_bound(2);
    auto it = st.upper_bound(3);

}




void explainMultiSet(){
     // Everything is same as set
    // only stores duplicate elements also

    multiset<int> ms;
    ms.insert(1); // {1}
    ms.insert(1); // {1, 1}
    ms.insert(1); // {1, 1, 1}
    ms.insert(1); // {1, 1, 1, 1}

    ms.erase(1); // all 1's erased

    int cnt = ms.count(1);

    // only a single one erased
    ms.erase(ms.find(1));

    ms.erase(ms.find(1), ms.find(1)+2);

    // rest all function same as set

}




void explainUSet() {
    unordered_set<int> st;  //randomized order(not sorted) with unique elements

    // lower_bound and upper_bound function
    // does not works, rest all functions are same
    // as above, it does not stores in any
    // particular order it has a better complexity
    // than set in most cases, except some when collision happens
}




void explainMap() {

    map<int, int> mpp;

    map<int, pair<int, int>> mpp;

    map<pair<int, int>, int> mpp;

    //map[key] = values; key can be any datatype
    mpp[1] = 2;
    mpp.emplace(3, 1);
    mpp.insert({2, 4}); //{key,values}

    //map stores unique keys in sorted order

    mpp[{2,3}] = 10;

    {
        {1, 2}
        {2, 4}
        {3, 1}
    }

    for(auto it : mpp) {
        cout << it.first << " " << it.second << endl;
    }

    cout << mpp[1];
    cout << mpp[5];

    auto it = mpp.find(3);
    cout << (*it).second;

    auto it = mpp.find(5);

    //lower/upper_bound , erase , swap , size , empty



}




void explainMultimap() {
    // Everything same as map, only it can store multiple keys
    // only mpp[key] cannot be used here
}




void explainUnorderedMap() {
    // same as set and unordered_set difference.
}





bool comp(pair<int,int> p1, pair<int,int> p2) {
    if(p1.second < p2.second)
        return true;
    else if(p1.second == p2.second) {
        if(p1.first > p2.second) return true;
    }
    return false;
}





void explainExtra() {

    sort(a, a + n);  //sorting in increasing order 
    sort(v.begin(), v.end());

    sort(a+2, a+4);
    
    sort(a, a+n, greater<int>); //sorting in descending order

    pair<int,int> a[] = {{1,2}, {2,1}, {4,1}};

    // sort it according to second element
    // if second element is same, then sort
    // it according to first element but in descending

    sort(a, a+n, comp);

    // {4,1}, {2,1}, {1,2}

    int num = 7;
    int cnt = __builtin_popcount(num);

    long long num = 165786578687;
    int cnt = __builtin_popcountll(num);

    string s = "123";

    do {
        cout << s << endl;
    } while(next_permutation(s.begin(), s.end()));

    int maxi = *max_element(a,a+n);

}



int main(){
    
    //stl => algorithms , containers , functions , iterators
    
    return 0; 
}





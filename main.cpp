#include <iostream>

using namespace std;

namespace counternamepsace{
int upperbound;
int lowerbound;

class counter{
    int count;
public:
    counter(int n){
        if (n<=upperbound) count =n;
        else count=upperbound;
    }
    void reset(int n){
        if (n<=upperbound) count=n;
    }

    int run(){
        if (count>lowerbound) return count--;
        else return lowerbound;
    }
};
}

int main()
{
    counternamepsace::upperbound=8;
    counternamepsace::lowerbound=0;

    counternamepsace::counter ob1(10);
    int i;
    do{
        i=ob1.run();
        cout<<i<<"";
    }
    while(i>counternamepsace::lowerbound);
    cout<<endl;
    counternamepsace::counter ob2(20);
    do{
        i=ob2.run();
        cout<<i<<"";
    }while(i>counternamepsace::lowerbound);
    cout<<endl;

    ob2.reset(100);
    counternamepsace::lowerbound=90;
    do{
        i=ob2.run();
        cout<<i<<"";
    }while(i>counternamepsace::lowerbound);
    return 0;
}

#include <iostream> 
using namespace std;

class Rating{
 public:
    Rating(int a,int b,int c);
    void modify_rating(double a);
    int get_rateA();
    int get_rateB();
    

 private:
    int K;
    int rateA;
    int rateB;
    double expectA;
    double expectB;
};



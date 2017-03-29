#include "rating.h"
#include <iostream> 
#include <math.h>
using namespace std;

Rating::Rating(int a,int b,int c){
  K=a;
  rateA=b;
  rateB=c;

}

void Rating::modify_rating(double a){

  expectA=1/(1+pow(10,(rateB-rateA)/400));
  expectB=1/(1+pow(10,(rateA-rateB)/400));
  rateA=rateA+32*(a-expectA);
  rateB=rateB+32*((1-a)-expectB);
  
}

int Rating::get_rateA(){
   return rateA;
}


int Rating::get_rateB(){
   return rateB;
}


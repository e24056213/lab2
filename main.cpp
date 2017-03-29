#include "rating.h"
#include <iostream> 
#include <math.h>
#include <string> 
#include <fstream>
#include <cstdlib>
using namespace std;

int main(){


ifstream inFile("file.in", ios::in); 
if(!inFile) { 
cerr << "Failed opening" << endl; 
exit(1);   
}

double a[9];
inFile >> a[0]>> a[1]>> a[2]>> a[3] >> a[4] >> a[5] >> a[6] >> a[7] >> a[8];
cout << a[0] << "\t" << a[1] << "\t" << a[2] << "\t" << a[3] << "\t"<< a[4]<< "\t" << a[5] << "\t"<< a[6] << "\t" << a[7] << "\t" << a[8] << endl;


ofstream outFile("file.out", ios::out);
if(!outFile) {
cerr<< "Failed opening" << endl; 
exit(1);
}


Rating test(a[0],a[1],a[2]);

for(int i=3;i<=8;i++){

outFile << test.get_rateA() << "\t" << test.get_rateB() << endl; 

test.modify_rating(a[i]);
}

outFile << test.get_rateA() << "\t" << test.get_rateB() << endl; 


return 0;
}

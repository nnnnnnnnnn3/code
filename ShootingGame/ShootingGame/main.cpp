#include <iostream>
#include <math.h>
#include <string>
#include <iomanip>
using namespace std;

using namespace std;
class MyClass {
public:double findProbability(int p){
    double pAlice = p / pow (10.0, 6.0);
    double complement = (1-pAlice);
    std::cout << "HERE "<<complement;
    return (double)complement<0.01 ? -1.0: complement;
}

};

int main()
{
    MyClass *m= new MyClass();
    double pb= m->findProbability(400000);
    std::cout << fixed << setprecision(10) << pb;

    std::cout << pb;
    return 0;
}

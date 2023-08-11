#include <iostream>
#include <math.h>

using namespace std;


double Heights (double p, double a, double b, double c) {
    
    double ha, hb, hc;
    ha=(2/a)*sqrt(p*(p-a)*(p-b)*(p-c));    
    hb=(2/b)*sqrt(p*(p-a)*(p-b)*(p-c));    
    hc=(2/c)*sqrt(p*(p-a)*(p-b)*(p-c));
    return ha, hb, hc;
}

int main()
{
    
    
    double p, a, b, c, ha, hb, hc;

    cout<<"Type number a: " << endl;
    cin >> a;
    cout << "Type number b: " << endl;
    cin >> b;
    cout << "Type number c: " << endl;
    cin >> c;
    p = (a+b+c)/2;
    cout << "The p is equal: " << p << endl;
    ha = Heights (p, a, b, c);
    cout << "ha is equal: " << ha << endl;
    hb = Heights (p, a, b, c);
    cout << "hb is equal: " << hb << endl;
    hc = Heights (p, a, b, c);
    cout << "hc is equal: " << hc << endl;


    return 0;
}

// Chef is looking to buy a TV and has shortlisted two models. The first one costs A rupees, while the second one costs B rupees. Since there is a huge sale coming up on Chefzon, Chef can get a flat discount of C rupees on the first TV, and a flat discount of D rupees on the second one. Help Chef determine which of the two TVs would be cheaper to buy during the sale.




#include <iostream>
using namespace std;

int main() {
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    
    float p = a - c; 
    float q = b - d; 
    
    if(p<q) cout<<"First"<<endl;
    else if(p>q) cout<<"Second"<<endl;
    else if(p==q) cout<<"Any"<<endl;
}
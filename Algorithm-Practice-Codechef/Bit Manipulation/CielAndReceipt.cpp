// Tomya is a girl. She loves Chef Ciel very much. Tomya likes a positive integer p, and now she wants to get a receipt of Ciel's restaurant whose total price is exactly p. The current menus of Ciel's restaurant are shown the following table.

// Name of Menu	                                  price
// eel flavored water	                            1
// deep-fried eel bones	                            2
// clear soup made with eel livers	                4
// grilled eel livers served with grated radish	    8
// savory egg custard with eel	                   16
// eel fried rice (S)	                           32
// eel fried rice (L)	                           64
// grilled eel wrapped in cooked egg	          128
// eel curry rice	                              256
// grilled eel over rice	                      512
// deluxe grilled eel over rice	                 1024
// eel full-course                      	     2048


// So please find the minimum number of menus whose total price is exactly p. Note that if she orders the same menu twice, then it is considered as two menus are ordered. (See Explanations for details)




#include <bits/stdc++.h>
using namespace std;
int main() {
	int testCase;
    // cout<<"Enter the no. of test cases : ";
    cin>>testCase;
    while(testCase--){
        int noOfItems;
        // cout<<"Enter the no. of items : ";
        cin>>noOfItems;

        int arr[] = {2048,1024,512,256,128,64,32,16,8,4,2,1};
        int minNumber = 0;
        
        for(int i = 0;i < 12;i++){
            minNumber += noOfItems / arr[i];
            noOfItems %= arr[i];
        }

        cout<<minNumber<<endl;
    }
}
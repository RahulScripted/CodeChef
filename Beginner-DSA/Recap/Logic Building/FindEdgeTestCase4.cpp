// Chef recently graduated Computer Science in university, so he was looking for a job. He applied for several job offers, but he eventually settled for a software engineering job at ShareChat. Chef was very enthusiastic about his new job and the first mission assigned to him was to implement a message encoding feature to ensure the chat is private and secure. Chef has a message, which is a string S with length N containing only lowercase English letters. It should be encoded in two steps as follows:

// 1.  Swap the first and second character of the string S, then swap the 3rd and 4th character, then the 5th and 6th character and so on. If the length of S is odd, the last character should not be swapped with any other.

// 2.  Replace each occurrence of the letter 'a' in the message obtained after the first step by the letter 'z', each occurrence of 'b' by 'y', each occurrence of 'c' by 'x', etc, and each occurrence of 'z' in the message obtained after the first step by 'a'. The string produced in the second step is the encoded message. Help Chef and find this message.





#include<iostream>
#include<string>
using namespace std;
int main(){
    int t,n;
    string s;
    cin>>t;
    while(t--){
        cin>>n;
        cin>>s;
        for(int i =0;i<n;i+=2){
            if( (i+1)<n ) swap(s[i],s[i+1]);
        }
        
        for(int i=0;i<n;i++) s[i] = 'a'+ 'z'-s[i];
        cout<<s<<endl;
    }
}
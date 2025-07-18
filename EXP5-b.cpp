#include <iostream>
using namespace std;
int main(){
    char a ;
    cout << "Enter the character: ";
    cin >> a ; //input
    if (a == 'a' || a == 'e' || a == 'i' || a == 'o' || a == 'u' || a == 'A' || a == 'E' || a == 'I' || a == 'O' || a == 'U'   ){//if condition
        cout << "The character is a vowel." ;//output for vowel
} 
else{
    cout << "The character is a consonant." ;
}
return 0;
}

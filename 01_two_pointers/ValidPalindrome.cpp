#include <iostream>
#include <string>

using namespace std;

bool IsPalindrome(string inputString){
    int i = 0;
    int j = inputString.length() - 1;
    while (i <= j) {
        while (i <= j && !isalnum(inputString[i])){
            i++;
        }
        while (i <= j && !isalnum(inputString[j])){
            j--;
        }
        if (i <= j && tolower(inputString[i]) != tolower(inputString[j])) {
            return false;
        } else {
            i++;
            j--;
        }

    }
    return true;
}

int main(){
    string testString1 = "znatrirtanz";
    cout << "Testing string \"" << testString1 << "\" if it's a palindrome.\n";
    cout << "Expected Result: 1\n";
    cout << "Result: " << IsPalindrome(testString1) << "\n\n";

    string testString2 = "hello";
    cout << "Testing string \"" << testString2 << "\" if it's a palindrome.\n";
    cout << "Expected Result: 0\n";
    cout << "Result: " << IsPalindrome(testString2) << "\n\n";

    string testString3 = "";
    cout << "Testing an empty string if it's a palindrome.\n";
    cout << "Expected Result: 1\n";
    cout << "Result: " << IsPalindrome(testString3) << "\n\n";

    string testString4 = "a";
    cout << "Testing string \"" << testString4 << "\" if it's a palindrome.\n";
    cout << "Expected Result: 1\n";
    cout << "Result: " << IsPalindrome(testString4) << "\n\n";

    string testString5 = "race car";
    cout << "Testing string \"" << testString5 << "\" if it's a palindrome.\n";
    cout << "Expected Result: 1\n";
    cout << "Result: " << IsPalindrome(testString5) << "\n\n";

    string testString6 = "A man, a plan, a canal, Panama!";
    cout << "Testing string \"" << testString6 << "\" if it's a palindrome.\n";
    cout << "Expected Result: 1\n";
    cout << "Result: " << IsPalindrome(testString6) << "\n\n";

    string testString7 = "Not a palindrome";
    cout << "Testing string \"" << testString7 << "\" if it's a palindrome.\n";
    cout << "Expected Result: 0\n";
    cout << "Result: " << IsPalindrome(testString7) << "\n\n";

    return 0;
}
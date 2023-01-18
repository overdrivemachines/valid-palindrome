#include <iostream>
#include <cctype>
#include <algorithm>

using namespace std;

bool isPalindrome(string s) {

  string::iterator it1, it2;

  // A = 65, Z = 90, a = 97, z = 122

  // Remove non alpha numeric characters
  s.erase(std::remove_if(s.begin(), s.end(), [](char c) { return !isalnum(c); }), s.end());

  // Remove non alpha numeric characters
  // for (it1 = s.begin(); it1 != s.end(); it1++) {
  //   if (!(((*it1 >= 65) && (*it1 <= 90)) || ((*it1 >= 97) && (*it1 <= 122)) || ((*it1 >= 48) && (*it1 <= 57)))) {
  //     s.erase(it1);
  //     it1--;
  //   }
  //   else {
  //     *it1 = tolower(*it1);
  //   }
  // }

  // cout << s << "\n";

  int sLength = s.length();
  for (int i = 0; i < sLength; i++) {
    if (tolower(s[i]) != tolower(s[sLength - i - 1])) {
      return false;
    }
  }

  return true;

}



int main(int argc, char const *argv[]) {
  string s = "A man, a plan, a canal: Panama";
  cout << s << "\n" << isPalindrome(s) << "\n";

  return 0;
}

class Solution:
    def isPalindrome(self, s: str) -> bool:
        if len(s) == 1:
            return True

        i = 0
        j = len(s) - 1

        front = back = ""
        while (i < j):
            if not s[i].isalnum():
                i += 1
            if not s[j].isalnum():
                j -= 1
            if (s[i].isalnum()) and (s[j].isalnum()):
                if s[i].lower() != s[j].lower():
                    return False
                else:
                    i += 1
                    j -= 1

        return True


s = Solution()

print(s.isPalindrome("A man, a plan, a canal: Panama"))
# print(s.isPalindrome("madam"))

# print(s.isPalindrome("Hello"))

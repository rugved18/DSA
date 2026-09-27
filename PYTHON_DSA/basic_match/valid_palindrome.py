s= "madam"
n =len(s)

left = 0
right =n-1

while left <right:
    if s[left] != s[right]:
        print(" not a valid palindrome")
        break
    left = left +1
    right =right-1
    
else:
 print("valid palindrome")

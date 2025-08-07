def check_anagram(str1, str2):
    if len(str1) != len(str2):
        return False
    
    char_count = {}
    for ch in str1:
        char_count[ch] = char_count.get(ch, 0) + 1

    for ch in str2:
        if ch not in char_count:
            return False
        
        char_count[ch] -=1

        if char_count[ch]<0:
            return False
    return True

s1='listen'
s2='silent'

result = check_anagram(s1,s2)

if result == True:
    print("It is anagram")
else:
    print("It is not an anagram")

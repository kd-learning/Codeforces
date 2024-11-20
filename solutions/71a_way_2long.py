def to_short_words(word):
    if len(word) > 10:
        word = word[0] + str(len(word) - 2) + word[-1]
    return word

n = int(input())    
for i in range(n):    
    print(to_short_words(input()))
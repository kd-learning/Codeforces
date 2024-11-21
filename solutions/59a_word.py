word = input()
n_upper = 0
for letter in word:
    if letter.isupper():
        n_upper += 1
if n_upper > len(word)/2:
    word = word.upper()
else:
    word = word.lower()
print(word)
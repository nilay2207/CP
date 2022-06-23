
from cv2 import sort


col=["add","book","break"]
count = []
for word in col:
        word = list(word)
        count = 0
        i = 0
        while i < len(word)-1:
            if word[i] == word[i+1]:
                count += 1
                i += 1
            i += 1
            
        count.append(count)
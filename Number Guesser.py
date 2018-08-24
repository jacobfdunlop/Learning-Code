import random

x = random.randrange(1,10000)


z=int(0)
b=int(0)

while (z<1):
    
    y = input("I'm thinking of a number between 1 and 10,000! Enter a guess: ")
    y=int(y)
    
    if (x>y):
        print("too low")
        b=b+1
        continue

    elif (x<y):
        print("too high")
        b=b+1
        continue

    else:
        print("correct")
        b=b+1
        break


print("Game over! It only took you", b, "guesses!")

        

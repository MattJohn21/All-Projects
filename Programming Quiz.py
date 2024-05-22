print("Welcome to my Programming quiz!")

playing = input("do you want to play? ")

if playing.lower() != "yes":
    quit()

print("Okay! Let's play :)")
score = 0

answer = input("What does the # symbol do in Python? ")
if answer.lower() == "comment":
    print('Correct!')
    score += 1
else:
    print("Incorrect!")

answer = input("What does HTML stands for? ")
if answer.lower() == " hypertext markup language":
    print('Correct!')
    score += 1
else:
    print("Incorrect!")

answer = input("What does CSS stands for? ")
if answer.lower() == "cascading style sheets":
    print('Correct!')
    score += 1
else:
    print("Incorrect!")
    
answer = input("What does GPU stands for? ")
if answer.lower() == "graphics processing unit":
    print('Correct!')
    score += 1
else:
    print("Incorrect!")

print("You Got " + str(score) + " questions correct!")
    
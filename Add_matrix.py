matOne = []

print("Enter 9 Elements for First Matrix: ")

for i in range(3):

    matOne.append([])

    for j in range(3):

        num = int(input())

        matOne[i].append(num)

matTwo = []

print("Enter 9 Elements for Second Matrix: ")

for i in range(3):

    matTwo.append([])

    for j in range(3):

        num = int(input())

        matTwo[i].append(num)

matThree = []

for i in range(3):

    matThree.append([])

    for j in range(3):

        matThree[i].append(matOne[i][j]+matTwo[i][j])

print("\nAddition Result of Two Given Matrix is:")

for i in range(3):

    for j in range(3):

        print(matThree[i][j], end=" ")

    print()

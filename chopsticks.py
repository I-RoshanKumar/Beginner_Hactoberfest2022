class game:
    left = 1
    right = 1

    def spcheck(self, hand, left_hand, right_hand):
        if hand == 'L':
            if self.left != 0 and right_hand == self.right + (self.left-left_hand):
                return 1
            else:
                return 0
        elif hand == 'R':
            if self.right != 0 and left_hand == self.left + (self.right-right_hand):
                return 1
            else:
                return 0

    def atcheck(self, str1):
        if str1 == 'L' and self.left != 0:
            return 1
        elif str1 == 'R' and self.right != 0:
            return 1
        else:
            return 0

    def attacked(self, str1, str2):
        if self.atcheck(str1) != 0:
            if str1 == 'L':
                self.left += str2
            elif str1 == 'R':
                self.right += str2
        else:
            return 0

    def split(self, hand, left_hand, right_hand):
        if self.spcheck(hand, left_hand, right_hand) == 1:
            if hand == 'L':
                self.left = left_hand
                self.right = right_hand
                return 1
            elif hand == 'R':
                self.left = left_hand
                self.right = right_hand
                return 1
        else:
            return 0

    def status(self):
        if self.left >= 5:
            self.left = 0
        elif self.right >= 5:
            self.right = 0

    def display(self):
        print(self.left, self.right)

    def loser(self):
        if (self.left or self.right) == 0:
            return 1


def final():
    p1.status()
    p2.status()
    print("current fingers of "+play1+" :")
    p1.display()
    print("current fingers of "+play2+" :")
    p2.display()


print("""                                       \"WELCOME TO THE CHOPSTICKS GAME\"
ENTER THE PLAYERS' NAMES
""")
play1 = input("Enter the name for player one :")
play2 = input("Enter the name for player two :")
start = 1
p1 = game()
p2 = game()
print("initial status\n"+play1+" "+"1 1\n"+play2+" "+"1 1")
while(start != 0):
    print("here u go"+" "+play1+" "+"choose your move")
    print("Attack or Split('A' for attack and 'S' for split)")
    move = input()
    comb = ""
    if move == 'A':
        comb = input("enter the combination for attack:")
        if comb[0] == 'L':
            while p2.attacked(comb[1], p1.left) == 0:
                print("you cannot attack a dead hand")
                comb = input("enter your combination again:")
        else:
            while p2.attacked(comb[1], p1.right) == 0:
                print("you cannot attack a dead hand")
                comb = input("enter your combination again:")
    else:
        comb = input("enter the combination for split:")
        while p1.split(comb[0], int(comb[1]), int(comb[2])) == 0:
            print("splitting combination is illegal give correct parameters")
            comb = input("enter your combination again:")
    final()
    if p1.loser() == 1:
        print("congrats" + " " + play2 + " you are the winner")
        break
    if p2.loser() == 1:
        print("congrats" + " " + play1 + " you are the winner")
        break

    print("here u go"+" "+play2+" "+"choose your move")
    print("Attack or Split")
    move = input()
    comb = ""
    if move == 'A':
        comb = input("enter the combination for attack:")
        if comb[0] == 'L':
            while p1.attacked(comb[1], p2.left) == 0:
                print("you cannot attack a dead hand")
                comb = input("enter your combination again:")
        else:
            while p1.attacked(comb[1], p2.right) == 0:
                print("you cannot attack a dead hand")
                comb = input("enter your combination again:")

    else:
        comb = input("enter the combination for split:")
        while p2.split(comb[0], int(comb[1]), int(comb[2])) == 0:
            print("splitting combination is illegal give correct parameters")
            comb = input("enter your combo again:")
    final()
    if p1.loser() == 1:
        print("congrats" + " " + play2 + " you are the winner")
        break
    if p2.loser() == 1:
        print("congrats" + " " + play1 + " you are the winner")
        break
print("""
GAMERS NEVER DIE
THEY RESPAWN....!!!
HOPE YOU ENJOYED......DO GIVE IT ANOTHER TRY
THANK YOU """)

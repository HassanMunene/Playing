#!/usr/bin/python3

MAX_LINES = 3
MAX_BET = 10000
MIN_BET = 10


#THE AMOUNT THE USER WANTS TO DEPOSIT FOR BETTING
print("A code to deposit the amount")
def deposit():

    while True:
        amount = input("Enter the amount you want to deposit:Ksh ")
        if amount.isdigit():
            amount = int(amount)
            if amount == 0:
                print("Please enter an amount greater than zero")
                continue
            else:
                break
        else:
            print("Your must a numerical number")
    return amount
deposit()


#THE NUMBER OF LINES THE USER WANTS TO BET ON
def get_lines():
    while True:
        lines = input("Enter the number of lines you would like to play(btn 1 and 3) ")
        if lines.isdigit():
            lines = int(lines)
            if lines > 0 and lines < 4:
                break
            else:
                print("The number of lines must be between 1 and 3")
                continue
        else:
            print("Please enter a valid number")
    return lines

get_lines()

#CHECK THE AMOUNT THE USER WANTS TO USE
def get_bet():
    while True:
        amount = input("How much would you like to bet? ksh ")
        if amount.isdigit():
            amount = int(amount)
            if MIN_BET <= amount <= MAX_BET:
                break
            else:
                print(f"Amount must be between ${MIN_BET} - ${MAX_BET}.")
        else:
            print("Please enter a valid amount")
    return amount

# TODO
from cs50 import get_float  # importing files from the cs50 library

while True:  # conditions

    dollar = get_float("How much change is the costumer owed? ")

    if dollar > 0:
        break

cents = round(dollar * 100)

coins = 0

while cents >= 25:
    cents = cents - 25
    coins = coins + 1

while cents >= 10:
    cents = cents - 10
    coins = coins + 1

while cents >= 5:
    cents = cents - 5
    coins = coins + 1

while cents >= 1:
    cents = cents - 1
    coins = coins + 1

print(coins)  # print value
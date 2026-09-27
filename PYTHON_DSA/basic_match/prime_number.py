num =9


def prime_number():
    if num < 2:
        return False
    for i in range (2,num):
     if num%i == 0:
        return False
    return True

print(prime_number())
        
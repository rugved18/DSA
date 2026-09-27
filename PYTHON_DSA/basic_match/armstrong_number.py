num =153
temp =num

new_num =0
while temp > 0:
    digit =temp%10
    new_num = new_num+digit*digit*digit
    temp = temp//10

if num == new_num:
    print(True)
else:
    print(False)
        
num = int(input("Enter a integer number: "))

bin_str = ""

if num >= 0:
    if num == 0:
        bin_str += '0'
    else:
        while(num != 0):
            bin_str += str(num & 1)
            num = num >> 1
    bin_str += '0'
else:
    while(~num != 0):
        bin_str += str(num & 1)
        num = num >> 1
    bin_str += '1'

print(bin_str[::-1])

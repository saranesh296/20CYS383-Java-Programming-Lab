import random

def select_array():
    i = random.randint(1, 5)
    if i == 0:
        i += 1
    return i

def get_key():
    key = random.randint(0, 25)
    return key

def generate_password(length):
    password = ""
    alphabet = "abcdefghijklmnopqrstuvwxyz"
    ALPHABET = "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
    s_symbol = "!@#$%&"
    number = "0123456789"
    count_alphabet = 0
    count_ALPHABET = 0
    count_number = 0
    count_s_symbol = 0
    count = 0
    while count < length:
        k = select_array()
        if count == 0:
            k = k % 3
            if k == 0:
                k += 1
        if k == 1:
            if count_alphabet == 2 and (count_number == 0 or count_ALPHABET == 0 or count_ALPHABET == 1 or count_s_symbol == 0):
                continue
            key = get_key()
            password += alphabet[key]
            count_alphabet += 1
            count += 1
        elif k == 2:
            if count_ALPHABET == 2 and (count_number == 0 or count_alphabet == 0 or count_alphabet == 1 or count_s_symbol == 0):
                continue
            key = get_key()
            password += ALPHABET[key]
            count_ALPHABET += 1
            count += 1
        elif k == 3:
            if count_number == 1 and (count_alphabet == 0 or count_alphabet == 1 or count_ALPHABET == 1 or count_ALPHABET == 0 or count_s_symbol == 0):
                continue
            key = get_key()
            key = key % 10
            password += number[key]
            count_number += 1
            count += 1
        elif k == 4:
            if count_s_symbol == 1 and (count_alphabet == 0 or count_alphabet == 1 or count_ALPHABET == 1 or count_ALPHABET == 0 or count_number == 0):
                continue
            key = get_key()
            key = key % 6
            password += s_symbol[key]
            count_s_symbol += 1
            count += 1
    return password

length = 8
password = generate_password(length)
print("----------------------------------")
print("   Random Password Generator")
print("----------------------------------")
print()
print("Generated password: ", password)
print()
#69 lines of code

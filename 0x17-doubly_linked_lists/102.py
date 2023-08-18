#!/usr/bin/python3


def multiply():
    is_palindrome = False

    for i in range(999, 99, -1):
        if is_palindrome:
            break
        for j in range(999, 99, -1):
            res = i * j
            if str(res) == str(res)[::-1]:
                print(i)
                print(j)
                print(res)
                is_palindrome = True
                break


multiply()

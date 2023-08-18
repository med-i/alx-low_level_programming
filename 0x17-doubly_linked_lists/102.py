#!/usr/bin/python3


def largest_palindrome():
    largest = 0

    for i in range(999, 99, -1):
        for j in range(999, 99, -1):
            result = i * j
            if result <= largest:
                break
            if str(result) == str(result)[::-1]:
                largest = result

    return largest


print(largest_palindrome())

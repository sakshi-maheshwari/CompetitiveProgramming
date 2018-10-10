# https://www.hackerrank.com/challenges/python-loops/problem
if __name__ == '__main__':
    n = int(input())
    l = [i**2 for i in range(n)]
    for i in l:
        print(i)

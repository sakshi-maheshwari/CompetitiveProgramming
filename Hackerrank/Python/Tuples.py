n = int(input())
integer_list = map(int, input().split())
tup=tuple(integer_list)
print(hash(tup))



while 1:
    x, y = map(int, input().split())
    if x+y == 0:
        break
    else:
        print(x-(y-x))

def mnozenje(a, b):
    s=0
    for i in range(b):
        s=s+a
    return s
def fact(n):
    if n==0:
        return 1
    return mnozenje(n, fact(n-1))
print(fact(int(input("unesite broj: "))))

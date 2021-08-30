
def main():

    s=input()
    l = s.split(' ')

    n=len(l)

    for i in range(0,n):
        print(l[n-i-1],end='')
        if i!=n-1:
            print(' ',end='')

main()
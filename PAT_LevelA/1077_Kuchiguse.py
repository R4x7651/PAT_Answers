def main():
    s=[]
    minlen = 257
    n=int(input())
    for i in range(n):
        s.append(list(input()))
        s[i].reverse()
        if len(s[i])<minlen: minlen = len(s[i])

    kuchiguse = 0
    nai = False
    for i in range(minlen):
        same = True
        for j in range(1,n):
            if s[j][i] != s[0][i]:
               same = False
               break
        if(same): kuchiguse += 1
        else: break

    if kuchiguse:
        print(''.join(s[0][kuchiguse-1::-1]))
    else:
        print('nai')

main()
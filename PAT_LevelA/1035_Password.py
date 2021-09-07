def main():
    pat=['0', '1', 'l', 'O']
    re=['%', '@','L', 'o']
    data = []
    p = []
    n = int(input())
    for i in range(0,n):
        data.append(input())
        data[i]=data[i].split(' ')

    for i in range(0,n):
        flag = False
        for j in range(0,len(pat)):
            if pat[j] in data[i][1]:
                flag =True
                data[i][1] = data[i][1].replace(pat[j],re[j])
        if flag:p.append(i)
    
    if len(p)!=0:
        print(len(p))
        for i in range(0,len(p)):
            print(data[p[i]][0]+' '+data[p[i]][1])
    else:
        if n==1:
            print('There is 1 account and no account is modified')
        else:
            print("There are {} accounts and no account is modified".format(n))

main()

def main():
    code = ['0', '1', '2', '3', '4', '5', '6', '7', '8', '9','J','Q','K']

    str=list(input())
    a=(str[0:str.index(' ')])
    b=(str[str.index(' ')+1:])
    a.reverse()
    b.reverse()

    if(len(a)>len(b)): b=b+['0']*(len(a)-len(b))

    for i in range(0,min(len(a),len(b))):
        if((i+1)%2!=0):
            b[i] = code[(int(a[i])+int(b[i]))%13]
        else:
            b[i] = (int(b[i])-int(a[i])) if (int(b[i])-int(a[i])>=0) else (int(b[i])-int(a[i])+10)
    
    b.reverse()

    for i in range(0,len(b)):
        print(b[i],end='')

main()
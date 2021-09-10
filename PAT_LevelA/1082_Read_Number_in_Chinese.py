
number = ['ling','yi', 'er', 'san', 'si', 'wu', 'liu', 'qi', 'ba', 'jiu']
s = ['','Shi', 'Bai', 'Qian', 'Wan', 'Yi']
ss = ['','Wan','Yi']

def main():
    
    n = input()
    if int(n)==0: 
        print(number[0])
        return
    if n[0]=='-':
        print('Fu',end=' ')
        n = n[1:]
    
    n = n[::-1]
    base = [n[i:i+4][::-1] for i in range(0,len(n),4)]

    result = ''
    for i in range(len(base)-1,-1,-1):
        if base[i] == '0000': continue    
        result += Pthousand(base[i])+ss[i]
        if int(base[i])%10 == 0 and i!=0: result += ' '+number[0]
        if i!=0: result+=' '
    
    result = result[:-1]        
    print(result)


def Pthousand(a):
    res = ''
    zero = False
    if len(a)==1 and a=='0' : return number[0]
    for i in range(len(a)):
        if(a[i]!='0'): 
            res += number[int(a[i])]+' '
            res += s[len(a)-i-1]
            if i!=len(a)-1: res+=' '
        elif int(a[i:])!=0 and not zero and i!=0:
            zero = True
            res += number[0]+' '
    return res

main()

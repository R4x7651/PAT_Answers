import re

def main():
    str = input()
    num = re.findall('[+-][1-9].[0-9]+',str)[0]
    exp = re.findall('E[+-][0-9]+',str)[0]

    if(str[0]=='-'):print(str[0],end='')
    num = num.replace(num[0],'')
    num = num.replace(num[1],'')
    e = int(exp[2:])

    if(exp[1]=='-'):
        if e==0: print(num[0]+'.'+num[1:])
        else: print("0."+'0'*(e-1)+num)
    else:
        if(len(num)-1<=e):
            print(num+'0'*(e-len(num)+1))
        else:
            if(e==0):e = e+1
            print(num[0:e+1]+'.'+num[e+1:])   
    
main()

def main():
    week={'A':'MON','B':'TUE','C':'WED','D':'THU','E':'FRI','F':'SAT','G':'SUN'}
    strs = []
    for i in range(0,4):
        strs.append(input())

    for i in range(0,min(len(strs[0]),len(strs[1]))):
        if(strs[0][i]==strs[1][i]):
            if(strs[0][i]>='A' and strs[0][i]<='G'):
                w=week[strs[0][i]]
                last = i+1
                break
    
    for i in range(last,min(len(strs[0]),len(strs[1]))):
        if(strs[0][i]==strs[1][i]):
            if((strs[0][i]>='A' and strs[0][i]<='N') or strs[0][i].isdigit()):
                hour = int(strs[0][i]) if strs[0][i].isdigit() else int(ord(strs[0][i]))-int(ord('A'))+10
                break

    for i in range(0,min(len(strs[2]),len(strs[3]))):
        if(strs[2][i] == strs[3][i]):
            if(strs[2][i].isalpha()):
                m = i
                break            
    print("{} {:0>2d}:{:0>2d}".format(w,hour,m))

main()
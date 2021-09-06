
def main():
    char = ['zero','one', 'two', 'three', 'four', 'five', 'six', 'seven', 'eight', 'nine', 'ten']
    num = list(input())
    sum =0
    for i in range(0,len(num)): sum=sum+int(num[i])
    sum = str(sum)
    for i  in range(0,len(sum)): 
        print(char[int(sum[i])],end='')
        if i!= len(sum)-1:
            print(' ',end='')

main()
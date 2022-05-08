N=int(input("Please enter a ODD number"))
M= N*3

for i in range(1,N,2): 
    print((i * ".|.").center(M, "-"))

print("GFG".center(M,"-"))

for i in range(N-2,-1,-2): 
    print((i * ".|.").center(M, "-"))
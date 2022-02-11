x=[]
n=int(input("Enter no of elements in the matrix : "))    
print("Enter the element")
for i in range(n): 
   row=[]                                  
for j in range(n): 
   row.append(int(input()))               
x.append(row)                               
print(x)


y=[]
n=int(input("Enter number of elements in the matrix: "))    
print("Enter the element")
for i in range(n): 
   row=[]                                  
for j in range(n): 
   row.append(int(input()))               
y.append(row)                               
print(y)
 
result = [[0,0,0],
        [0,0,0],
        [0,0,0]]
 
for i in range(len(x)):  
    for j in range(len(x)):
        result[i][j] = x[i][j] + y[i][j]
 
for r in result:
    print(r)










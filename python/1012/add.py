A=[]
B=[]
print("enter the rows and columns of matrix")
row= int(input("rows : " ))
column= int(input("Columns: "))
print("Enter first matrix")
for i in range(0,row):
	r=[]
	for j in range(0,column):
		c=int(input())
		r.append(c)
	A.append(r)
for i in range(0,row):
	print(A[i])
print("Enter second matrix")
for i in range(0,row):
	r=[]
	for j in range(0,column):
		a=int(input())
		r.append(a)
	B.append(r)
for i in range(0,row):
	print(B[i])
result=[]
for i in range(0,row):
	r=[]
	for j in range(0,column):
		z=A[i][j]+B[i][j]
		r.append(z)
	result.append(r)
print("the result: ")
for i in range(0,row):
	print(result[i])

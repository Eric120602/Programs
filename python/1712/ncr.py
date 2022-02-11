def nCr(n,r):
	return (fact(n)/(fact(r)*fact(n-r)))
def fact(n):
	res=1
	for i in range(2,n+1):
		res=res*i
	return res
n=int(input("enter the first number: "))
r=int(input("enter the second number: "))
print(int(nCr(n,r)))


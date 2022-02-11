def fact(n):
	if(n==1):
		return(1)
	else:
		return(n*fact(n-1))
a=int(input("Enter the number: "))
if(a<=0):
	print("Factorial not possible")
else:
	print(fact(a))
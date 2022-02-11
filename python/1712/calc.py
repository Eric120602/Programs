def add(a,b):
	return a+b
def sub(a,b):
	return a-b
def mult(a,b):
	return a*b
def div(a,b):
	return a/b
def exp(a,b):
	return a**b


print("Welcome to simple calculator")
a=int(input("enter the first number: "))
b=int(input("enter the second number: "))
print("OPERATIONS")
print("a.add")
print("b.subtract")
print("c.multiply")
print("d.divide")
print("e.exponent")
choice=input("Enter your operation (a/b/c/d/e): ")

if choice=='a':
	print("result= ",add(a,b))
elif choice=='b':
	print("result= ",sub(a,b))
elif choice=='c':
	print("result= ",mult(a,b))
elif choice=='d':
	print("result= ",div(a,b))
elif choice=='e':
	print("result= ",exp(a,b))
else:
	print("invalid input .. please enter from the above options")
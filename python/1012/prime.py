a = int(input('enter the starting  number : '))
b = int(input('enter the starting  number : '))
flag = 0
if(a<=1 and b>=1):
	print('1 is a prime number \n')
for x in range (a,b+1):
	for y in range(1,x):
		if(x%y==0):
			flag=flag+1
	if(flag==1):
		print(x,'is a prime number \n')
	flag=0

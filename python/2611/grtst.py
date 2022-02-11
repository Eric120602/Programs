a = int(input('enter the 1 number'))
b = int(input('enter the 2 number'))
c = int(input('enter the 3 number'))
if(a>b) and (a>c):
	print(a,'is the greatest')
elif(b>a) and (b>c):
	print(b,'is the greatest')
else:
	print(c,'is the greatest')
if(a<b) and (a<c):
	print(a,'is the smallest')
elif(b<a) and (b<c):
	print(b,'is the smallest')
else:
	print(c,'is the smallest')
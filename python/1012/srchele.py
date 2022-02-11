
list=[]
n=int(input("Enter the number of elements: "))
i=0
flag=0
for i in range (0,n):
	num=int(input("enter the list elements"))
	list.append(num)
print(list)
a=int(input("element to be searched: "))
for i in range(0,n):
	if(list[i]==a):
		flag = flag+1
		break;
if(flag==0):
	print("element not found")
else:		
	print("element found at",i+1)

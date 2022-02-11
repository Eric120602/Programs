list=[]
n=int(input("Enter the number of elements: "))
i=0
for i in range (0,n):
	num=int(input("enter the list elements"))
	list.append(num)
print(list)
sum=0
for i in range(0,n):
	sum=sum+(list[i])
avg=sum/n
print("average is", avg)
for i in list:
	sqr=i*i
	print("the square is",sqr)
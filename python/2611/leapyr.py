a = int(input('enter the year'))
if(a%100==0):
	if(a%400==0):
		print('its a leap year')
	else:
		print('its not a leap year')
elif(a%4 == 0):
	print('it is a leap year')
else:
	print('its not a leap year')


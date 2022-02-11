def upperlower(string):
  
    upper = 0
    lower = 0
  
    for i in string:
          
        if i.isupper():
            upper += 1

        elif i.islower():
            lower += 1
  
    print('Lower case characters = %s' %lower,
          'Upper case characters = %s' %upper)
  
string = 'GeeksforGeeks is a portal for Geeks'
upperlower(string)
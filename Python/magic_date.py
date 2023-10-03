inputMonth = int(input('Enter month (numeric)'))
inputDay = int(input('Enter day:'))
inputYear = int(input('Enter two digit year:'))
if inputMonth*inputDay == inputYear:
    print('This date is magic!')
else:
    print('This date is not magic.')

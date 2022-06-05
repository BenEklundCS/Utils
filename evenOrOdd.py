def even():
  even = []
  amount = int(input('Enter amount of even numbers to print:'))

  # Input validation

  while amount <= 0:
    print('Invalid input!')
    int(input('Enter amount of even numbers to print:'))

  for num in range(1,amount*2+1):
    if(num % 2) == 0:
      x = num
      even.append(x)
  
  print(even)

def odd():
  odd = []
  amount = int(input('Enter amount of odd numbers to print:'))

  # Input alidation

  while amount <= 0:
    print('Invalid input!')
    int(input('Enter amount of odd numbers to print:'))

  for num in range(1,amount*2+1):
    if(num % 2) != 0:
      x = num
      odd.append(x)
  
  print(odd)

def main():
  
  print('-Menu-')
  print('1. Print Even Numbers')
  print('2. Print Odd Numbers')
  x = input()

  # Input validation

  while x != '1' and x != '2':
    print('Please enter "1" or "2."')
    x = input()
  
  if x == '1':
    even()
  else:
    odd()

main()

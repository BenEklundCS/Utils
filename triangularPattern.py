rows = int(input('Enter desired rows:'))
for r in range(rows):
  for c in range(r + 1):
    if c % 2 == 0:
      print('*', end='')
    else:
      print('.',end='')
  print()

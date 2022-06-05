def falling_distance(time):
  distance = 1/2*9.8*time**2
  return distance

for time in range (1,11):
  distance = int(falling_distance(time))
  print('The object has fallen about',distance,'meters after',time,'seconds')

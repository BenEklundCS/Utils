# Define main() function
def main(num1,num2):

  # Input validation loop
  while num1 < 0:
    print('Invalid input!')
    num1 = float(input('Enter consumed carbs in grams:'))
  
  # Call carbs_calories_calculator() function and assign its result to carbcalories
  carbcalories = carbs_calories_calculator(num1)

  # Input validation loop
  while num2 < 0:
    print('Invalid input!')
    num2 = float(input('Enter consumed fats in grams'))

  # Call fats_calories_calculator() function and assign its result to fatscalories
  fatscalories = fats_calories_calculator(num2)

  # Total variable is assigned to the sum of fatscalories and carbscalories
  total = fatscalories+carbcalories
  
  # Print statement which produces desired output from calculations
  print('You consumed a total of',total,'calories from carbs and fats.')


# Define carbs_calories_calculator() function
def carbs_calories_calculator(num1):
  value = num1*9
  return value


# Define fats_calories_calculator() function
def fats_calories_calculator(num2):
  value = num2*4
  return value

main(float(input('Enter consumed carbs in grams:')),float(input('Enter consumed fats in grams')))

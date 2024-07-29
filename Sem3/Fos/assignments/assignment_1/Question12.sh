# 12. Write a shell script for a simple calculator to perform addition, subtraction, multiplication,
# division using case statements.

echo "enter number 1 :"
read number1
echo "enter number 2 : "
read number2

echo "enter 1 for addition \nenter 2 for subtraction \nenter 3 for multiplication \nenter 4 for division" 
echo "enter your choice  :"
read choice

case "$choice" in 

  1) 
  echo "Addition of number 1 and number 2 is :" `expr $number1 + $number2`
  ;;
  2) 
  echo "Subtraction of number 1 and number 2 is :" `expr $number1 - $number2`
  ;;
  3) 
  echo "Multiplication of number 1 and number 2 is :" `expr $number1 \* $number2`
  ;;
  4) 
  echo "Division of number 1 and number 2 is :" `expr $number1 / $number2`
  ;;
esac
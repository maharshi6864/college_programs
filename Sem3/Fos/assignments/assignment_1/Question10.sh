# 10. Write a shell script to find biggest of two numbers.
echo "enter number 1 : "
read number1
echo "enter number 2 : "
read number2

if [ $number1 -gt $number2 ]
then
  echo "number 1 is greater than number 2 ."
else 
  echo "number 2 is greater than number 1 ."
fi
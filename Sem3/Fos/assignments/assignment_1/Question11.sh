# 11. Write a shell script to find biggest of three numbers
echo "enter number 1 : "
read number1
echo "enter number 2 : "
read number2
echo "enter number 3 : "
read  number3

if [ $number1 -gt $number2 ]
then
  if [ $number1 -gt $number3 ]
then
  echo "number 1 is greatest."
else 
  echo "number 3 is greatest."
fi
else 
 if [ $number1 -gt $number2 ]
then
  echo "number 2 is greatest."
else 
  echo "number 3 is greatest."
fi
fi


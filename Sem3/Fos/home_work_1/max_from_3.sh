echo "max from 3 numbers"
echo "enter first number :"
read num1
echo "enter second number :"
read num2
echo "enter third number :"
read num3

if [ $num1 -gt $num2 ]
then 
  if [ $num1 -gt $num3 ]
  then 
    echo "Number 1 is greater then all the numbers entered."
  else
    echo "Number 3 is greater than all the number entered."
  fi
else
  if [ $num2 -gt $num3 ]
  then 
    echo "Number 2 is greater then all the numbers entered."
  else
    echo "Number 3 is greater than all the number entered."
  fi
fi
echo "Example of Arithmatic Operator."
echo "enter value of a :"
read a
echo "enter value of b :"
read b
printf "addition(+) of the a and b :"
echo `expr $a + $b`
printf "subtraction(-) of the a and b :"
echo `expr $a - $b`
printf "multiplication(*) of the a and b :"
echo `expr $a \* $b`
printf "division(/) of the a and b :"
echo `expr $a / $b`
echo "modulas(%) of the a and b :" `expr $a % $b`



echo "enter a number : "
read number

numberOfDigit=0
total=0

while [ $number -gt 0 ]
do 
	newNumber=`expr $number % 10 `
	number=`expr $number / 10 `
	total=`expr $total + $newNumber `
	numberOfDigit=`expr $numberOfDigit + 1`
done

echo "Number of digits are  : $numberOfDigit"

echo "Sum of all the digits is : $total"


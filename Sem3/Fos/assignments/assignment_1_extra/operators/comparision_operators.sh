echo "Example of Comparision Operators."
echo "enter value of a :"
read a
echo "enter value of b :"
read b
printf "greater than (-gt) of the a and b :"
echo `test $a -gt $b`
printf "less than (-gt) of the a and b :"
echo `test $a -lt $b`
printf "equal than (-gt) of the a and b :"
echo `test $a -eq $b`
printf "not equal than (-gt) of the a and b :"
echo `test $a -ne $b`
printf "greater than (-gt) of the a and b :"
echo `test $a -le $b`
printf "greater than (-gt) of the a and b :"
echo `test $a -ge $b`




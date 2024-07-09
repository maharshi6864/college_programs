echo "Calculate Simple interest"
echo "enter principle amount :"
read principle
echo "enter rate of interest :"
read rate
echo "enter number of months :"
read month

year=$(( month / 12 ))
simpleInterest=$(( ( principle * rate * year ) / 100 ))

echo "simple interest is " `expr $simpleInterest`
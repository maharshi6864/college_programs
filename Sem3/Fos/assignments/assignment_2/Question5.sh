read number
counter=0

for i in $(seq 1 $number)
do 
  v=`expr $number % $i`
  if [ $v -eq 0 ]
  then 
    counter=`expr $counter + 1`
  fi
  if [ $counter -eq 3 ]
  then
    break
  fi
done

if [ $counter -eq 2 ]
then 
  echo "prime number"
else
  echo "Not a prime number"
fi
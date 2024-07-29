read n
number=1
for i in $(seq 1 $n)
do
  for j in $(seq 1 $i)
  do 
    printf "$number "
    number=`expr $number + 1`
  done
  echo ""
done

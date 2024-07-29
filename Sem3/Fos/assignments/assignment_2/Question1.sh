read n
for i in $(seq 1 $n)
do
  for j in $(seq 1 $i)
  do 
    printf "$j "
  done
  echo ""
done
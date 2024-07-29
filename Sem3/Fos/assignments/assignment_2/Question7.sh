read n


for i in $(seq 1 10)
do
  echo "$n X $i = " `expr $i \* $n`
done



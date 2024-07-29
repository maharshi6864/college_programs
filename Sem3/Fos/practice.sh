printf "looping statements\n"
n=20
a=0
while [ $a -lt $n ]
do

  c=`expr $n - $a `
  while [ 0 -lt $c ]
  do
    printf " "
    c=`expr $c - 1`
  done

  b=0
  while [ $b -lt $a ]
  do
    printf "* "
    b=`expr $b + 1`
  done
  echo ""
  a=`expr $a + 1`
done
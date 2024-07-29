n=100

until [ $n -le 0 ]
do
   v=`expr $n % 2`
  
if [ $v -eq 0 ]
then 
  continue
else
  echo "$n is a even number"
fi
  n=`expr $n - 1 `
done

# To do check this shit 
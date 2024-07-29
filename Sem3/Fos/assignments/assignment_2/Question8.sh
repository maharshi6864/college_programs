
for k in $(seq 1 100)
do
  v=`expr $k % 2`
  
if [ $v -eq 0 ]
then 
  echo "$k is a even number"
else
  continue
fi
done
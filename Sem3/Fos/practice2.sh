n=20
printingNumber=1
for i in $(seq 1 $n)
do 
  k=`expr $n - $i`
  for j in $(seq 1 $k)
  do 
  
      printf "  "
 
  done

  for j in $(seq 1 $i)
  do 
   if [ $printingNumber -lt 10 ]
   then 
      printf "$printingNumber   "
    
   elif [ $printingNumber -lt 100 -a $printingNumber -gt 9 ]
    then
      printf "$printingNumber  "
      
   else 
      printf "$printingNumber "
   fi
    printingNumber=`expr $printingNumber + 1`
  done
  echo ""
done
t=$(date +%H)

if [ $t -gt 0 -a $t -lt 12 ]
then 
  echo "Good Morning"
elif [ $t -gt 12 -a $t -lt 16 ]
then 
  echo "Good Afternoon"
elif [ $t -gt 16 -a $t -lt 20 ]
then 
  echo "Good evening"
else
  echo "Good Night"
fi
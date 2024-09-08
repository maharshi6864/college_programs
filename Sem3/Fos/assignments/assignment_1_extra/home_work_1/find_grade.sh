echo "find grade from the total marks"
echo "enter Your total marks to know your grade :"
read total
percentage=$(( (total * 100) / 700 ))

if [ $percentage -ge 45 -a $percentage -lt 60 ]; 
then
  echo "Your grade is D."
elif [ $percentage -ge 60 -a $percentage -lt 70 ]; 
then
  echo "Your grade is C."
elif [ $percentage -ge 70 -a $percentage -lt 80 ]; 
then
  echo "Your grade is B."
elif [ $percentage -ge 80 -a $percentage -lt 90 ]; 
then
  echo "Your grade is A."
elif [ $percentage -ge 90 -a $percentage -le 100 ]; 
then
  echo "Your grade is A+."
elif [ $percentage -lt 45 ]; 
then
  echo "You have FAILED."
else
  echo "Invalid total marks input."
fi

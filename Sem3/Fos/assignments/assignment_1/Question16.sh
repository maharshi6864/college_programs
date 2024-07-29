# Write a shell script to accept two strings from user and check if both strings are equal or not

echo "enter string 1 : "
read s1
echo "enter string 2 : "
read s2

if [ $s1 = $s2 ];
then 
  echo "Both strings are equal !!"
else
  echo "strings are not equal !!"
fi
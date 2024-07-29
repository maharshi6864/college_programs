echo "long listing of file : "
ls -l
printf "\nnumber of lines in the file q.sh is : "
wc -m q.sh 
echo "$linesInFile"
printf "number of character in the file q.sh is : "
wc -m q.sh
# linesInFile=$(wc -l < q.sh)
# If you want to store the values in a variable
echo "hidden files in current directory : "
ls -a
ls -al
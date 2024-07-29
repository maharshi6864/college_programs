ls -l >file_list.txt
cat file_list.txt

if [ -r file_list.txt ]
then
  echo "\nFile is readable"
else
  echo "\nFile is not readable"
fi

if [ -w file_list.txt ]
then
  echo "\nFile is writeable"
else
  echo "\nFile is not writeable"
fi

if [ -x file_list.txt ]
then
  echo "\nFile is executable"
else
  echo "\nFile is not executable"
fi

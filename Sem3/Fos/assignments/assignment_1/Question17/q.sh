echo "enter file name : "
read fileName
echo "enter content inside file : "
cat >"$fileName"
chmod a-w "$fileName"
chmod a-r "$fileName"
chmod a-x "$fileName"
# Remember in WSL the read and write permission wont work because of windows interference.

if [ -r "$fileName" ]
then
  echo "\nFile is readable"
else
  echo "\nFile is not readable"
fi

if [ -w "$fileName" ]
then
  echo "\nFile is writeable"
else
  echo "\nFile is not writeable"
fi

if [ -x "$fileName" ]
then
  echo "\nFile is executable"
   chmod a-x "$fileName"
  ls -l
else
  echo "\nFile is not executable"
  chmod a+x "$fileName"
  ls -l
fi


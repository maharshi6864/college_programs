# Accept a file and check if the words in that file are greater than 20 print “Enough Words” else
# print “More words to enter”.

echo "enter file name : "
read fileName
echo "Enter file Content : "
cat >"$fileName"

wordsInFile=$(wc -w < "$fileName")

if [ $wordsInFile -gt 20 ]
then 
  echo "\nEnough words."
else
  echo "\nMore words to enter."
fi
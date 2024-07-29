echo "enter file name : "
read fileName

numberOfLines=$(wc -l < "$fileName")

if [ "$numberOfLines" -gt 10 ]
then 
	echo "Enough Lines."
else 
	echo "More Lines Needed."
fi

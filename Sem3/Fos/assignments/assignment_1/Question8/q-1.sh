# echo "enter content for file 1 : "
# cat >f1.txt 
# echo "enter content for file 2 : "
# cat >f2.txt


echo "comparision between two files is : \n"
cmp f1.txt f2.txt
echo "\n"
echo "difference between two files is : \n"
diff f1.txt f2.txt
echo "\n"
echo "common between two files is : \n"
comm -12 f1.txt f2.txt



echo "-----------------------------------------------------------------"
echo "File manuplation:"
echo "1. Concatenate the contents of file1.txt and file2.txt, and display the output on the terminal."
touch file1.txt
echo "file1.txt created."
echo "enter content in file1.txt(press ctrl+d when you are done)."
cat >file1.txt
touch file2.txt
echo "file2.txt created."
echo "enter content in file2.txt."
cat >file2.txt
echo "\ncontent of file1.txt and file2.txt(press ctrl+d when you are done)."
cat file1.txt
cat file2.txt
echo "-----------------------------------------------------------------"
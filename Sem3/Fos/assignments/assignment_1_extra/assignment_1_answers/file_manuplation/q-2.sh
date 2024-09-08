echo "-----------------------------------------------------------------"
echo "File manuplation:"
echo "2. Copy file1.txt to a new file named file1_copy.txt in the same directory."
touch file1_copy.txt
echo "file1_copy.txt created."
cat file1.txt>file1_copy.txt
echo "Content from file1.txt copied into file1_copy.txt"
echo "file1_copy.txt content"
cat file1_copy.txt
echo "-----------------------------------------------------------------"
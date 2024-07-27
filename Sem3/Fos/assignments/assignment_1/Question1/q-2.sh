echo "creating a demo folder and a file inside it to demonstrate the removing of the folder with file inside it."
mkdir test_dir
cd test_dir
echo "New directory(folder created) enter some text in new file."
cat >hello.txt
cd ..
rm -r test_dir

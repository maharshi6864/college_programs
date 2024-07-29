# Write a shell script to find volume of cube. (side*side*side).

echo "enter side of a cube :"
read side

echo "volume of a cude is :" `expr $side \* $side \* $side `
# Write a shell script to accept the temp in Celsius and convert it into Fahrenheit(c=F-32/1.8).
echo "enter side of a celcius :"
read celsius
f=$(echo "scale=2; ( $celsius *  9.0 / 5.0 ) + 32" | bc)
echo "celcius to fahrenheit is : $f" 
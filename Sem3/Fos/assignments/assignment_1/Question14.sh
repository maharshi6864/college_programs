# . An employee Basic salary is input through keyboard where da is 40% of basic salary and hra is
# 20% of basic salary. Write a program to calculate gross salary.

echo "enter Basic salary of the employee : "
read basicSalary

da=$(echo "scale=2; ((40 * $basicSalary) / 100) " | bc)
hra=$(echo "scale=2; ((20 * $basicSalary) / 100) " | bc)

echo "DA is $da"
echo "HRA is $da"
echo "Gross salary is " $(echo "scale=2; ($da + $hra + $basicSalary) " | bc)
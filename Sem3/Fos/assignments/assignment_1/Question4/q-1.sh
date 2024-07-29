#!/bin/bash
#to install bc use command : sudo apt-get install bc
# Prompt the user to enter the basic salary
echo "Enter the basic salary:"
read BASIC

# Calculate the components
DA=$(echo "scale=2; 0.60 * $BASIC" | bc)
HRA=$(echo "scale=2; 0.20 * $BASIC" | bc)
MA=100
IT=$(echo "scale=2; 0.15 * $BASIC" | bc)

# Calculate the gross salary
GROSS_SALARY=$(echo "$BASIC + $DA + $HRA + $MA - $IT" | bc)

# Display the results
echo "Basic Salary: $BASIC"
echo "Dearness Allowance (DA): $DA"
echo "House Rent Allowance (HRA): $HRA"
echo "Medical Allowance (MA): $MA"
echo "Income Tax (IT): $IT"
echo "Gross Salary: $GROSS_SALARY"

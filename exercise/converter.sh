#!/usr/bin/bash
read -p $'Enter your value in inches: ' inches

rate = 0.394
let "centimeter = $(($inches/$rate))"

echo "The corresponding value in inches is: $centimeter"

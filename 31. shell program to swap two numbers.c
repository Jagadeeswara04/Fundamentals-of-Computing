echo “ enter a first number”
read first
echo “ enter a  second number”
read second
temp=$first
first=$second
second=$temp
  
echo "After swapping, numbers are:"
echo "first = $first, second = $second"

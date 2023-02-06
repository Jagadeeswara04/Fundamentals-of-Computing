echo "enter first number"
read x
echo "enter second"
read y
echo "Addition of x and y"  
echo $(( $x + $y ))  
echo "Subtraction of x and y"  
echo $(( $x - $y ))  
echo "Multiplication of x and y"  
echo $(( $x * $y ))  
echo "Division of x by y"  
echo $(( $x / $y ))  
echo "Exponentiation of x,y"  
echo $(( $x ** $y ))  
echo "Modular Division of x,y"  
echo $(( $x % $y ))  

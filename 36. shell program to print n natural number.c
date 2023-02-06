echo "Enter a last number"
read n
a=1
echo "Printing numbers:"
while [ $a -le $n ]
do 
echo "$a"
a=`expr $a + 1`
done

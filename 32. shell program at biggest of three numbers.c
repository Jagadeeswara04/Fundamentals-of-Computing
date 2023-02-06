echo "Enter Num1"
read a
echo "Enter Num2"
read b
echo "Enter Num3"
read c
if [ $a -gt $b -a $a -gt $c ]
then
echo $a"is Greatest"
elif [ $b -gt $c -a $b -gt $a ]
then
echo $b "is Greatest"
else
echo $c "is Greatest!"
fi

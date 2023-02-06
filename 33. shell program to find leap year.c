echo -n "Enter year (YYYY): "
read y
a=$(($y%4))
b=$(($y%100))
c=$(($y%400))
if [[$a -eq 0 ] || [[$b -eq 0] && [$c -eq 0]]]
then 
    echo $y" is leap year"
else
    echo $y "is not a leap year"

fi

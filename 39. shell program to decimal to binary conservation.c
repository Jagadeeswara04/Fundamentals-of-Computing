echo "Enter any decimal no:"
read num
rem=1
bno=" "
while [ $num -gt 0 ]
do
rem=`expr $num % 2 `
bno=$bno$rem
num=`expr $num / 2 `
done
i=${#bno}
final=" "
while [ $i -gt 0 ]
do
rev=`echo $bno | awk '{ printf substr( $0,'$i',1 ) }'`
final=$final$rev
i=$(( $i - 1 ))
done
echo "Equivalent Binary no:" $final

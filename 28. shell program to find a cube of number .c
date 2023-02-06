echo enter a number;
  read n;
    if [ $n -ge 0 -a $n -le 50 ];then
      echo "cube= `expr $n * $n * $n`";
    fi;
  echo y to continue  or any to exit;
  read c;

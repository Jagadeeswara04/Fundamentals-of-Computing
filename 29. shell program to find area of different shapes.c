echo "What shape would you like to find the area of?"
echo "1) Square"
echo "2) Rectangle"
echo "3) Triangle"
echo "4) Circle"
read shape

case $shape in
  1)
    echo "Enter the side length:"
    read side
    area=$((side * side))
    echo "The area of the square is $area."
    ;;
  2)
    echo "Enter the length:"
    read length
    echo "Enter the width:"
    read width
    area=$((length * width))
    echo "The area of the rectangle is $area."
    ;;
  3)
    echo "Enter the base:"
    read base
    echo "Enter the height:"
    read height
    area=$((base * height / 2))
    echo "The area of the triangle is $area."
    ;;
  4)
    echo "Enter the radius:"
    read radius
    area=$(echo "scale=2; 3.14159265359 * ($radius * $radius)" | bc)
    echo "The area of the circle is $area."
    ;;
  *)
    echo "Invalid option. Try again."
    ;;
esac

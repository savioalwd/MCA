echo "Enter first number"
read a
echo "Enter second number"
read b
echo "1.Addition 2.Substraction 3.Multiplication 4.Division 5.Remainder 6.Exit"
while :
do 
        echo "Enter the choice"
        read choice
        case $choice in 
        1)      echo "Addition"
                expr $a + $b 
                ;;
        2)      echo "Difference"
                expr $a - $b
                ;;
        3)      echo "Multiplication"
                expr $a \* $b
                ;;
        4)      echo "Quotient"
                expr $a / $b
                ;;
        5)      echo "Remainder"
                expr $a % $b
                ;;
        6)      echo "Exit"
                break
                ;;
        *)      echo "Invalid choice"
                ;;
         esac
 done

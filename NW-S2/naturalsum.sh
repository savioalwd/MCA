echo "Enter number :"
read num
echo "1.Using for loop 2.Using while loop 3.Exit"
while :
do
        echo "Enter the choice :"
        read choice
        case $choice in
        1)      echo "Using for loop"
                a=$num
                total=0
                for ((i=$a;i>=0;i--))
                do 
                        total=`expr $total + $i`
                done
                echo $total
                ;;
         2)     echo " Using while loop "
         
                a=$num
                total=0
                while [ 0 -lt $a ]
                do
                total=`expr $total + $a `
                a=`expr $a - 1 `
                
                done
                echo $total
                
                ;;
          3)    echo "exit"
                break
                ;;
          *)    echo "Invalid choice"
                ;;
          esac
done

is_prime()
{
    local num=$1
    if [ $num -lt 2 ];
    then
        return 1
    fi
    for ((i=2; i<num; i++));
    do
        if [ $((num%i)) -eq 0 ];
        then
            return 1
            
        fi
     done
     return 0
}
echo "Enter the lower limit : "
read lower_limit 
echo "Enter the upper limit : "
read upper_limit
echo "The prime numbers between $lower_limit and $upper_limit are:"
for ((num=$lower_limit; num<=$upper_limit; num++));
do
    if is_prime $num; then
        echo $num
    fi
done

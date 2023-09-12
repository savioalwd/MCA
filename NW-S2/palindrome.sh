echo "Enter the number :"
read s1
n=${#s1}
if [ -z $s1 ]
then
echo "string is empty"
fi
for (( i=$n-1;i>=0;i-- ))
do
   reversed_string="$reversed_string${s1:$i:1}"
done
if [ $s1 = $reversed_string ]
then
echo "Number is palindrome"
else
echo "Number is not palindrome"
fi

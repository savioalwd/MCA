echo "Enter first string"
read str1
echo "Enter second string"
read str2
if [ -z $str1 ] || [ -z $str2 ]
then
echo "String is empty"
elif [ $str1 = $str2 ]
then 
echo "Both are equal"
else
        echo "Both are different"
fi

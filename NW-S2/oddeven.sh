echo "Enter the number:"
read n
rem=$((n%2))
if [ $rem -eq 0  ]
then
    	echo "$n even"
else
	echo "$n odd"
fi

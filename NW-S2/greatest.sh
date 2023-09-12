read -p "Enter the value of i:" i
read -p "Enter the value of j:" j
read -p "Enter the value of k:" k

if [ $i -gt $j ]
then
	if [ $i -gt $k ] 
	then 
		echo "$i is greatest"
	else
		echo "$k is greatest"
	fi
else
	if [ $j -gt $k ]
	then
		echo " $j is greatest"
	else
		echo "$k is greatest"
	fi
	
fi


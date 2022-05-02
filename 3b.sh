echo "Enter the password:"
stty -echo
read p1
stty echo
echo "Confirm the password:"
stty -echo
read p2
stty echo
while [ "$p1" != "$p2" ]
do
echo "password dosenot match.renter the password:"
stty -echo
read p2
stty echo
done
clear
echo "--------Terminal locked--------:"
echo  "Enter the password to unlock:"
stty -echo
read p3
stty echo
while [ "$p1" != "$p3" ]
do
clear
echo  "password dosenot match.renter the password:"
stty -echo
read p3
stty echo
done
echo "--------Terminal unlock--------"

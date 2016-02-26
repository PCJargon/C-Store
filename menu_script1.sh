#!/bin/bash
#Jared Hafer
#11/29/15
#My command menu for common unix commands
#WMorales CS140u

menu_var=0
while test $menu_var = 0 #loop function, loops the menu until 9 changes menu_var
do
	clear
	echo -e "\n	Command Menu\n"
	echo "  1. Display users currently logged in"
	echo "  2. Display a calendar for a specific month and year"
	echo "  3. Display the current directory path"
	echo "  4. Change directory"
	echo "  5. Long listing of visible files in the current directory"
	echo "  6. Display current time and date and calendar"
	echo "  7. Start the vi editor"
	echo "  8. Email a file to a user"
	echo "  9. Quit"
	read -p "Choose your destiny: " answer
	case "$answer" in
	1)#who's online
		who | more
		read -p "Hit enter to continue "
		;;

	2)#Calendar for specific month and year
		echo "Enter the month number: "
		read monthNumber
		echo "Enter the year number: "
		read yearNumber
		if [ "$monthNumber" -ge 0 ] && [ "$monthNumber" -lt 13 ] && [ "$yearNumber" -gt 0 ]
		then
			cal -s $monthNumber $yearNumber
		else
			echo "Invalid entry "
		fi
		read -p "Hit enter to continue "
		;;

	3)#Display the current dir path
		pwd
		read -p "Hit enter to continue "
		;;

	4)#Change dir
		echo "Enter the desired directory: "
		read moveDir
		if [ -d $moveDir ]
		then
			cd $moveDir
		fi
		read -p "Hit enter to continue "
		;;

	5)#list files in dir
		ls | more
		read -p "Hit enter to continue "
		;;

	6)#Display current time and date and calendar
		date
		cal -s
		read -p "Hit enter to continue "
		;;

	7)#Start vi
		echo "Enter existing file or new file name to be created: "
		read viFile
		if [ -e "$viFile" ] && file $viFile | grep ASCII
		then
			vi $viFile
		else
			if [ ! -e "$viFile" ]
			then
				vi $viFile
			else
				echo "Invalid file for editing "
				read -p "Hit enter to continue "
			fi
		fi
		;;

	8)#Mail someone locally
		echo "Enter the user name: "
		read userAddress
		echo
		if id -u "$userAddress" > /dev/null 2>&1
		then
		echo "Enter your mail Subject: "
		read userSubject
		echo
		echo "Enter your message: "
		read userMessage
		echo
		echo "File attachment? y/n" #verify whether users wants to add attachment
		read attachment
		echo
		if [ $attachment == y ] #attachments yes
		then
			echo "Enter your file attachment name: "
			read emailFile
			echo
			if [ -e "$emailFile" ]
			then
				echo $userMessage | mail -s "$userSubject" "$userAddress"<"$emailFile"
			else
				echo "Invalid entry "
			fi
		fi
		if [ $attachment == n ] #attachments no
		then
			echo $userMessage | mail -s "$userSubject" "$userAddress"
		fi
		fi
		read -p "Hit enter to continue "
		;;

	9) #Quit
		menu_var=1
		;;

	*) #For invalid entries
		echo "Invalid Entry"
		read -p "Try again, hit enter to continue "
		;;
	esac
done
	clear
	echo "Goodbye!"

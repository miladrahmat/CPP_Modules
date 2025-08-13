#!/bin/bash

CYAN="\e[1;36m"
YELLOW="\e[1;93m"
GREEN="\e[1;92m"
RED="\e[1;91m"
RESET="\e[0m"

success=0
tests=0
test_case_file="tests.txt"
continue_word="Comparing"
limit_5=7
limit_10=22
limit_100=534
limit_1000=8641

#Compiling the program
make debug

#Checking if the program exists and saving the name
program=$(find . -type f -name "PmergeMe")

if [ -n "$program" ]; then
	printf "\n$GREEN Program compiled! $RESET\n"
else
	printf "\n$RED Compilation failed! $RESET\n"
	exit 1
fi

if [ -f "$test_case_file" ]; then
	rm "$test_case_file"
fi

printf "\n$CYAN Tests with 5 numbers$RESET\n"

for test in {1..5}; do
	# Generate 5 random numbers
	test_case="$(shuf -i 1-10000 -n 5 | sort -R | tr '\n' ' ')"

	# Reset comparison count for each test
	comparison_count=0

	echo "Test case: $test_case" >> $test_case_file
	while read -r line; do
		if [[ $line == *"$continue_word"* ]]; then
			((comparison_count++))
		fi
	done < <($program $test_case)

	printf "\n$YELLOW Comparisons: $comparison_count / $limit_5 $RESET\n"
	echo -e -n "Comparisons: $comparison_count / $limit_5\t" >> $test_case_file
	if [[ $comparison_count -le $limit_5 ]]; then
		printf "\t $GREEN SUCCESS $RESET\n\n"
		((success++))
		echo -e "SUCCESS\n" >> $test_case_file
	else
		printf "\t $RED FAILURE $RESET\n\n"
		echo -e "FAILURE\n" >> $test_case_file
	fi
	((tests++))

done

printf "\n$CYAN Tests with 10 numbers$RESET\n"

for test in {1..10}; do
	# Generate 5 random numbers
	test_case="$(shuf -i 1-10000 -n 10 | sort -R | tr '\n' ' ')"

	# Reset comparison count for each test
	comparison_count=0

	echo "Test case: $test_case" >> $test_case_file
	while read -r line; do
		if [[ $line == *"$continue_word"* ]]; then
			((comparison_count++))
		fi
	done < <($program $test_case)

	printf "\n$YELLOW Comparisons: $comparison_count / $limit_10 $RESET\n"
	echo -e -n "Comparisons: $comparison_count / $limit_10\t" >> $test_case_file
	if [[ $comparison_count -le $limit_10 ]]; then
		printf "\t $GREEN SUCCESS $RESET\n\n"
		((success++))
		echo -e "SUCCESS\n" >> $test_case_file
	else
		printf "\t $RED FAILURE $RESET\n\n"
		echo -e "FAILURE\n" >> $test_case_file
	fi
	((tests++))
done

printf "\n$CYAN Tests with 100 numbers$RESET\n"

for test in {1..10}; do
	# Generate 5 random numbers
	test_case="$(shuf -i 1-10000 -n 100 | sort -R | tr '\n' ' ')"

	# Reset comparison count for each test
	comparison_count=0

	echo "Test case: $test_case" >> $test_case_file
	while read -r line; do
		if [[ $line == *"$continue_word"* ]]; then
			((comparison_count++))
		fi
	done < <($program $test_case)

	printf "\n$YELLOW Comparisons: $comparison_count / $limit_100 $RESET\n"
	echo -e -n "Comparisons: $comparison_count / $limit_100\t" >> $test_case_file
	if [[ $comparison_count -le $limit_100 ]]; then
		printf "\t $GREEN SUCCESS $RESET\n\n"
		((success++))
		echo -e "SUCCESS\n" >> $test_case_file
	else
		printf "\t $RED FAILURE $RESET\n\n"
		echo -e "FAILURE\n" >> $test_case_file
	fi
	((tests++))
done

printf "\n$CYAN Tests with 1000 numbers$RESET\n"

for test in {1..10}; do
	# Generate 5 random numbers
	test_case="$(shuf -i 1-10000 -n 1000 | sort -R | tr '\n' ' ')"

	# Reset comparison count for each test
	comparison_count=0

	echo "Test case: $test_case" >> $test_case_file
	while read -r line; do
		if [[ $line == *"$continue_word"* ]]; then
			((comparison_count++))
		fi
	done < <($program $test_case)

	printf "\n$YELLOW Comparisons: $comparison_count / $limit_1000 $RESET\n"
	echo -e -n "Comparisons: $comparison_count / $limit_1000\t" >> $test_case_file
	if [[ $comparison_count -le $limit_1000 ]]; then
		printf "\t $GREEN SUCCESS $RESET\n\n"
		((success++))
		echo -e "SUCCESS\n" >> $test_case_file
	else
		printf "\t $RED FAILURE $RESET\n\n"
		echo -e "FAILURE\n" >> $test_case_file
	fi
	((tests++))
done

echo -e "\n$CYAN Summary: $RESET"
echo -e "$GREEN Successful tests: $success  / $tests $RESET"
echo -e "\nTests can be found in $test_case_file\n"

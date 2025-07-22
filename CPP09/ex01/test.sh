#!/bin/bash

program=./RPN

valid_case1="6 3 +"
valid_case2="8 2 -"
valid_case3="4 2 * 3 +"
valid_case4="9 3 / 2 *"
valid_case5="7 2 + 5 *"
valid_case6="5 2 3 + *"
valid_case7="8 4 / 6 +"
valid_case8="3 2 + 7 1 - *"
valid_case9="9 2 * 6 /"
valid_case10="2 3 + 4 1 + *"
valid_case11="7 3 - 2 * 5 +"
valid_case12="6 2 3 * + 4 /"
valid_case13="5 1 + 8 4 / -"
valid_case14="3 3 + 2 2 + *"
valid_case15="9 1 - 2 / 5 +"

res_case1=9
res_case2=6
res_case3=11
res_case4=6
res_case5=45
res_case6=25
res_case7=8
res_case8=30
res_case9=3
res_case10=25
res_case11=13
res_case12=3
res_case13=4
res_case14=24
res_case15=9

invalid_case1="5 2 %"
invalid_case2="3 4 ^"
invalid_case3="6 2 &"
invalid_case4="8 2 + - *"
invalid_case5="10 2 +"
invalid_case6="5.5 2 +"
invalid_case7="-1 4 +"
invalid_case8="3 7.1 *"
invalid_case9="9 9 9 9 + +"

CYAN="\e[1;36m"
GREEN="\e[1;92m"
RED="\e[1;91m"
RESET="\e[0m"

make re
if [ $? -eq 0 ]; then
	printf "\n$GREEN Program compiled! $RESET"
else
	exit 1
fi

# Test for valid cases

printf "\n\n$CYAN Valid cases: $RESET\n\n"

printf "$CYAN Test 1: $RESET\n"
echo $res_case1 > expected.txt
$program "$valid_case1" > RPN.txt
diff expected.txt RPN.txt > result.txt
if [ $? -eq 0 ]; then
	printf "\t $GREEN SUCCESS $RESET\n\n"
else
	printf "\t $RED FAILURE $RESET\n\n"
fi
rm -f expected.txt
rm -f RPN.txt
rm -f result.txt

printf "$CYAN Test 2: $RESET\n"
echo $res_case2 > expected.txt
$program "$valid_case2" > RPN.txt
diff expected.txt RPN.txt > result.txt
if [ $? -eq 0 ]; then
	printf "\t $GREEN SUCCESS $RESET\n\n"
else
	printf "\t $RED FAILURE $RESET\n\n"
fi
rm -f expected.txt
rm -f RPN.txt
rm -f result.txt

printf "$CYAN Test 3: $RESET\n"
echo $res_case3 > expected.txt
$program "$valid_case3" > RPN.txt
diff expected.txt RPN.txt > result.txt
if [ $? -eq 0 ]; then
	printf "\t $GREEN SUCCESS $RESET\n\n"
else
	printf "\t $RED FAILURE $RESET\n\n"
fi
rm -f expected.txt
rm -f RPN.txt
rm -f result.txt

printf "$CYAN Test 4: $RESET\n"
echo $res_case4 > expected.txt
$program "$valid_case4" > RPN.txt
diff expected.txt RPN.txt > result.txt
if [ $? -eq 0 ]; then
	printf "\t $GREEN SUCCESS $RESET\n\n"
else
	printf "\t $RED FAILURE $RESET\n\n"
fi
rm -f expected.txt
rm -f RPN.txt
rm -f result.txt

printf "$CYAN Test 5: $RESET\n"
echo $res_case5 > expected.txt
$program "$valid_case5" > RPN.txt
diff expected.txt RPN.txt > result.txt
if [ $? -eq 0 ]; then
	printf "\t $GREEN SUCCESS $RESET\n\n"
else
	printf "\t $RED FAILURE $RESET\n\n"
fi
rm -f expected.txt
rm -f RPN.txt
rm -f result.txt

printf "$CYAN Test 6: $RESET\n"
echo $res_case6 > expected.txt
$program "$valid_case6" > RPN.txt
diff expected.txt RPN.txt > result.txt
if [ $? -eq 0 ]; then
	printf "\t $GREEN SUCCESS $RESET\n\n"
else
	printf "\t $RED FAILURE $RESET\n\n"
fi
rm -f expected.txt
rm -f RPN.txt
rm -f result.txt

printf "$CYAN Test 7: $RESET\n"
echo $res_case7 > expected.txt
$program "$valid_case7" > RPN.txt
diff expected.txt RPN.txt > result.txt
if [ $? -eq 0 ]; then
	printf "\t $GREEN SUCCESS $RESET\n\n"
else
	printf "\t $RED FAILURE $RESET\n\n"
fi
rm -f expected.txt
rm -f RPN.txt
rm -f result.txt

printf "$CYAN Test 8: $RESET\n"
echo $res_case8 > expected.txt
$program "$valid_case8" > RPN.txt
diff expected.txt RPN.txt > result.txt
if [ $? -eq 0 ]; then
	printf "\t $GREEN SUCCESS $RESET\n\n"
else
	printf "\t $RED FAILURE $RESET\n\n"
fi
rm -f expected.txt
rm -f RPN.txt
rm -f result.txt

printf "$CYAN Test 9: $RESET\n"
echo $res_case9 > expected.txt
$program "$valid_case9" > RPN.txt
diff expected.txt RPN.txt > result.txt
if [ $? -eq 0 ]; then
	printf "\t $GREEN SUCCESS $RESET\n\n"
else
	printf "\t $RED FAILURE $RESET\n\n"
fi
rm -f expected.txt
rm -f RPN.txt
rm -f result.txt

printf "$CYAN Test 10: $RESET\n"
echo $res_case10 > expected.txt
$program "$valid_case10" > RPN.txt
diff expected.txt RPN.txt > result.txt
if [ $? -eq 0 ]; then
	printf "\t $GREEN SUCCESS $RESET\n\n"
else
	printf "\t $RED FAILURE $RESET\n\n"
fi
rm -f expected.txt
rm -f RPN.txt
rm -f result.txt

printf "$CYAN Test 11: $RESET\n"
echo $res_case11 > expected.txt
$program "$valid_case11" > RPN.txt
diff expected.txt RPN.txt > result.txt
if [ $? -eq 0 ]; then
	printf "\t $GREEN SUCCESS $RESET\n\n"
else
	printf "\t $RED FAILURE $RESET\n\n"
fi
rm -f expected.txt
rm -f RPN.txt
rm -f result.txt

printf "$CYAN Test 12: $RESET\n"
echo $res_case12 > expected.txt
$program "$valid_case12" > RPN.txt
diff expected.txt RPN.txt > result.txt
if [ $? -eq 0 ]; then
	printf "\t $GREEN SUCCESS $RESET\n\n"
else
	printf "\t $RED FAILURE $RESET\n\n"
fi
rm -f expected.txt
rm -f RPN.txt
rm -f result.txt

printf "$CYAN Test 13: $RESET\n"
echo $res_case13 > expected.txt
$program "$valid_case13" > RPN.txt
diff expected.txt RPN.txt > result.txt
if [ $? -eq 0 ]; then
	printf "\t $GREEN SUCCESS $RESET\n\n"
else
	printf "\t $RED FAILURE $RESET\n\n"
fi
rm -f expected.txt
rm -f RPN.txt
rm -f result.txt

printf "$CYAN Test 14: $RESET\n"
echo $res_case14 > expected.txt
$program "$valid_case14" > RPN.txt
diff expected.txt RPN.txt > result.txt
if [ $? -eq 0 ]; then
	printf "\t $GREEN SUCCESS $RESET\n\n"
else
	printf "\t $RED FAILURE $RESET\n\n"
fi
rm -f expected.txt
rm -f RPN.txt
rm -f result.txt

printf "$CYAN Test 15: $RESET\n"
echo $res_case15 > expected.txt
$program "$valid_case15" > RPN.txt
diff expected.txt RPN.txt > result.txt
if [ $? -eq 0 ]; then
	printf "\t $GREEN SUCCESS $RESET\n\n"
else
	printf "\t $RED FAILURE $RESET\n\n"
fi
rm -f expected.txt
rm -f RPN.txt
rm -f result.txt

printf "\n\n$CYAN Invalid cases: $RESET\n\n"

printf "$CYAN Test 1: $RESET\n"
$program "$invalid_case1" 2> /dev/null
if [ $? -ne 0 ]; then
	printf "\t $GREEN SUCCESS $RESET\n\n"
else
	printf "\t $RED FAILURE $RESET\n\n"
fi

printf "$CYAN Test 2: $RESET\n"
$program "$invalid_case2" 2> /dev/null
if [ $? -ne 0 ]; then
	printf "\t $GREEN SUCCESS $RESET\n\n"
else
	printf "\t $RED FAILURE $RESET\n\n"
fi

printf "$CYAN Test 3: $RESET\n"
$program "$invalid_case3" 2> /dev/null
if [ $? -ne 0 ]; then
	printf "\t $GREEN SUCCESS $RESET\n\n"
else
	printf "\t $RED FAILURE $RESET\n\n"
fi

printf "$CYAN Test 4: $RESET\n"
$program "$invalid_case4" 2> /dev/null
if [ $? -ne 0 ]; then
	printf "\t $GREEN SUCCESS $RESET\n\n"
else
	printf "\t $RED FAILURE $RESET\n\n"
fi

printf "$CYAN Test 5: $RESET\n"
$program "$invalid_case5" 2> /dev/null
if [ $? -ne 0 ]; then
	printf "\t $GREEN SUCCESS $RESET\n\n"
else
	printf "\t $RED FAILURE $RESET\n\n"
fi

printf "$CYAN Test 6: $RESET\n"
$program "$invalid_case6" 2> /dev/null
if [ $? -ne 0 ]; then
	printf "\t $GREEN SUCCESS $RESET\n\n"
else
	printf "\t $RED FAILURE $RESET\n\n"
fi

printf "$CYAN Test 7: $RESET\n"
$program "$invalid_case7" 2> /dev/null
if [ $? -ne 0 ]; then
	printf "\t $GREEN SUCCESS $RESET\n\n"
else
	printf "\t $RED FAILURE $RESET\n\n"
fi

printf "$CYAN Test 8: $RESET\n"
$program "$invalid_case8" 2> /dev/null
if [ $? -ne 0 ]; then
	printf "\t $GREEN SUCCESS $RESET\n\n"
else
	printf "\t $RED FAILURE $RESET\n\n"
fi

printf "$CYAN Test 9: $RESET\n"
$program "$invalid_case9" 2> /dev/null
if [ $? -ne 0 ]; then
	printf "\t $GREEN SUCCESS $RESET\n\n"
else
	printf "\t $RED FAILURE $RESET\n\n"
fi

exit 0

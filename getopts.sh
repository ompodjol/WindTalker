#!/bin/bash

while getopts "brgc:" OPTION; do
    case $OPTION in
    b)
        COLOR=BLUE
        ;;
    r)
        COLOR=RED
        ;;
    g)
        COLOR=GREEN
        ;;
    c)
        COLOR=$OPTARG
        [[ ! $COLOR =~ BLUE|RED|GREEN ]] && {
            echo "Incorrect options provided"
            exit 1
        }
        ;;
    *)
        echo "Incorrect options provided"
        exit 1
        ;;
    esac
done

echo "Color is $COLOR"
exit 0;

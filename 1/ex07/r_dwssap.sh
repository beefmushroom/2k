#!/bin/sh
cat /etc/passwd | grep ':' | awk 'NR%2==0' | cut -d ':' -f1 | rev | sort -r | awk -v a=$FT_LINE1 -v b=$FT_LINE2 'NR==a,NR==b' | tr '\n' ',' | sed 's/,/, /g' | rev | cut -c 2- | rev |  sed 's/,$/./' | tr -d '\n'

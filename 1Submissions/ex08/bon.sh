ldapsearch -LLLx "sn=*bon*" | grep sn: | sort | wc -l | awk '{$1=$1;print}'

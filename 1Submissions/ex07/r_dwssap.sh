cat /etc/passwd | grep -v '#' | cut -d : -f1 | sed -n 'n;p' | rev | sort -r | tail -n +$FT_LINE1 | head -n $((FT_LINE2-FT_LINE1+1)) | sed 's/$/,/' | tr '
' ' ' | rev | sed 's/,/.~/' | rev | tr '~' '
'

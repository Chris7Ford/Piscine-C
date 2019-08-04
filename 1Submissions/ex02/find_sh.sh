find . -name "*.sh" -print | sed "s/\.sh//" | rev | cut -d "/" -f1 | rev

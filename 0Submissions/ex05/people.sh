#!/bin/bash

ldapsearch -LLL "cn=z*" cn | grep -i "cn" | sort -r | cut -d ":" -f2

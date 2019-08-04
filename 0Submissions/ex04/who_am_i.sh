#!/bin/bash

ldapwhoami -Q | cut -d ":" -f2

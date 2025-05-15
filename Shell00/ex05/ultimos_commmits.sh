#!/bin/bash
# Script que exibe os IDs dos 5 últimos commits do repositório Git atual

git log --pretty=format:"%H" -n 5

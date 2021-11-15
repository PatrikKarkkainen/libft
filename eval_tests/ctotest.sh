for f in *.c; do
	mv -- "$f" "${f%.c}.c.test"
done

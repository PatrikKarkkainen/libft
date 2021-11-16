for f in *c.test; do
	mv -- "$f" "${f%.c.test}.c"
done

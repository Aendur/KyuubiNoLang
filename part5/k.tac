.table

.code
func:
	add #0, #0, 1
	return #0

main:
	println 150
	push 150
	call func, 1
	pop $0
	println $0

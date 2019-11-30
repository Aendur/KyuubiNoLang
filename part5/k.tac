.table

.code
func:
	add #0, #0, 1
	return #0

main:
	mov $0, 100
	println $0
	push $0
	call func, 1
	pop $0
	println $0

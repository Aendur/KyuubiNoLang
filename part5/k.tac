.table

.code
func:
	mov $0, #0[0]
	mov $1, #0[1]
	add $0, $0, $1
	return $0

main:
	mema $0, 10
	mov $0[0], 1
	mov $0[1], 2
	push $0
	call func, 1
	pop $1
	println $1

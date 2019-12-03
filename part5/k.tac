.code
main:
	mov $0, 1.5
	mov $1, 5
	
	inttofl $2, $1
	slt $2, $0, $2

	println $2




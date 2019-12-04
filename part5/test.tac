.code
read_i:
	scani  $0
	return $0
read_c:
	scanc  $0
	return $0
read_f:
	scanf  $0
	return $0
write_i:
	println #0
	return
write_c:
	println #0
	return
write_f:
	println #0
	return
abs_f:
	slt $0, #0, 0.000000
	brz if_BfZMfZ1jM_end0, $0
if_BfZMfZ1jM:
	minus $1, #0
	mov #0, $1
if_BfZMfZ1jM_end0:
	return #0
sqrt_f:
	mov $0, 1.000000
do_ULcOZpXgF:
	mul $3, $0, $0
	add $3, $3, #0
	mul $4, 2.000000, $0
	div $3, $3, $4
	mov $1, $3
// error = x - (a2 * a2);
	mul $3, $1, $1
	minus $3, $3
	add $3, $3, #0
	mov $2, $3
	mov $0, $1
	sleq $3, $2, 1.000000
	not $3, $3
	slt $4, $2, -1.000000
	or $3, $3, $4
	brnz do_ULcOZpXgF, $3
	return $1
main_v:
	mov $0, 100
	mov $1, 0.000000
while_UflRwREUP:
	sleq $2, $0, 0
	not $2, $2
	brz while_UflRwREUP_end, $2
	push $1
	call sqrt_f, 1
	pop $3
	push $3
	call write_f, 1
	add $5, $1, 1.000000
	mov $1, $5
	jump while_UflRwREUP
while_UflRwREUP_end:
	return 0

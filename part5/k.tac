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
write_v:
	println
	return
write_i:
	print #0
	return
write_c:
	print #0
	return
write_f:
	print #0
	return
abs_f:
	slt $0, #0, 0.000000
	brz if_aTtoQMss4_end0, $0
if_aTtoQMss4:
	minus $1, #0
	mov #0, $1
if_aTtoQMss4_end0:
	return #0
sqrt_f:
	seq $0, #0, 0.000000
	brz if_Z3J__r72k_end0, $0
if_Z3J__r72k:
	return 0.0
if_Z3J__r72k_end0:
	seq $1, #0, 1.000000
	brz if_h6ZcxRLlG_end0, $1
if_h6ZcxRLlG:
	return 0.0
if_h6ZcxRLlG_end0:
	mov $2, 1.500000
do_PHmJahvcE:
	mul $5, $2, $2
	add $5, $5, #0
	mul $6, 2.000000, $2
	div $5, $5, $6
	mov $3, $5
// error = x - (a2 * a2);
	mul $5, $3, $3
	sub $5, #0, $5
	mov $4, $5
	mov $2, $3
	push $4
	call abs_f, 1
	pop $5
	sleq $6, $5, 0.001000
	not $6, $6
	brnz do_PHmJahvcE, $6
	return $3
main_v:
	mov $0, 0
while_yV5yqBlHq:
	sleq $1, $0, 100
	brz while_yV5yqBlHq_end, $1
	inttofl $3, $0
	mov $2, $3
	push $0
	call write_i, 1
	push ' '
	call write_c, 1
	push $2
	call sqrt_f, 1
	pop $6
	push $6
	call write_f, 1
	call write_v, 0
	add $9, $0, 1
	mov $0, $9
	jump while_yV5yqBlHq
while_yV5yqBlHq_end:
	push $2
	call read_f, 1
	pop $3
	mov $2, $3
	push $2
	call sqrt_f, 1
	pop $4
	push $4
	call write_f, 1
	call write_v, 0
	return 0
main:
	call main_v


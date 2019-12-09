.table
char str_ElamcC8YX[] = "sqrt("
char str_wLhWwYtOz[] = ") = "
char str_yI2UHD0rX[] = "please enter a number: "
char str_rKBbRDUlY[] = "sqrt is not defined "
char str_lYGGqIzZ5[] = "for negative values\n"
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
write_C:
	mov      $0, 0            // $0 = i
__write_C_begin:
	mov      $1, #0[$0]       // $1 = str[i]
	seq      $2, $1, '\0'     // $2 = (str[i] == 0)
	brnz __write_C_end, $2   // if ($2 != false) goto end
	print    $1               // else print str[i]
	add      $0, $0, 1        // ++i
	jump __write_C_begin       // continue
__write_C_end:
	return                    // return
	return
abs_f:
	slt $0, #0, 0.000000
	brz if_qk8VVXHa3_end0, $0
if_qk8VVXHa3:
	minus $1, #0
	mov #0, $1
if_qk8VVXHa3_end0:
	return #0
sqrt_f:
	mov $0, 1.500000
	sleq $3, #0, 0.000000
	brz if_HqiSO36Th_end0, $3
if_HqiSO36Th:
	mov $1, #0
	jump if_HqiSO36Th_end1
if_HqiSO36Th_end0:
do_UTKsO_BtB:
	mul $4, $0, $0
	add $4, $4, #0
	mul $5, 2.000000, $0
	div $4, $4, $5
	mov $1, $4
	mul $4, $1, $1
	sub $4, #0, $4
	mov $2, $4
	mov $0, $1
	push $2
	call abs_f, 1
	pop $4
	sleq $5, $4, 0.001000
	not $5, $5
	brnz do_UTKsO_BtB, $5
if_HqiSO36Th_end1:
	return $1
main_v:
	mov $0, &str_ElamcC8YX
	mov $1, &str_wLhWwYtOz
	mov $2, -1
while_deTHx8NU2:
	add $2, $2, 1
	sleq $3, $2, 100
	brz while_deTHx8NU2_end, $3
	inttofl $5, $2
	mov $4, $5
	push $0
	call write_C, 1
	push $2
	call write_i, 1
	push $1
	call write_C, 1
	push $4
	call sqrt_f, 1
	pop $9
	push $9
	call write_f, 1
	call write_v, 0
	jump while_deTHx8NU2
while_deTHx8NU2_end:
	mov $4, &str_yI2UHD0rX
	mov $5, &str_rKBbRDUlY
	mov $6, &str_lYGGqIzZ5
	push $4
	call write_C, 1
	push $8
	call read_f, 1
	pop $9
	push $9
	call sqrt_f, 1
	pop $10
	mov $8, $10
	slt $11, $8, 0.000000
	brz if_kwFJtcBcH_end0, $11
if_kwFJtcBcH:
	push $5
	call write_C, 1
	push $6
	call write_C, 1
	jump if_kwFJtcBcH_end1
if_kwFJtcBcH_end0:
	push $8
	call write_f, 1
	call write_v, 0
if_kwFJtcBcH_end1:
	return 0
main:
	call main_v


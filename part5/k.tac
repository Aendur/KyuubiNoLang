.table
char str_ts6kSBFDA[] = "sqrt("
char str_PBFOPmjjH[] = ") = "
char str_sAKdUaIxN[] = "please enter a number: "
char str_SEUpTnFTR[] = "sqrt is not defined\n"
char str_xMzuZtEgf[] = "for negative values\n"
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
	brz if_qJOMA2A_M_end0, $0
if_qJOMA2A_M:
	minus $1, #0
	mov #0, $1
if_qJOMA2A_M_end0:
	return #0
sqrt_f:
	slt $0, #0, 0.000000
	brz if_sYkIPdrMF_end0, $0
if_sYkIPdrMF:
	return 0.0
if_sYkIPdrMF_end0:
	seq $1, #0, 0.000000
	brz if_QP1yNPIkt_end0, $1
if_QP1yNPIkt:
	return 0.0
if_QP1yNPIkt_end0:
	mov $2, 1.500000
do_QRFHxjwVX:
	mul $5, $2, $2
	add $5, $5, #0
	mul $6, 2.000000, $2
	div $5, $5, $6
	mov $3, $5
	mul $5, $3, $3
	sub $5, #0, $5
	mov $4, $5
	mov $2, $3
	push $4
	call abs_f, 1
	pop $5
	sleq $6, $5, 0.001000
	not $6, $6
	brnz do_QRFHxjwVX, $6
	return $3
main_v:
	mov $0, &str_ts6kSBFDA
	mov $1, &str_PBFOPmjjH
	mov $2, -1
while_kFsaEG5Vv:
	add $2, $2, 1
	sleq $3, $2, 100
	brz while_kFsaEG5Vv_end, $3
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
	jump while_kFsaEG5Vv
while_kFsaEG5Vv_end:
	mov $4, &str_sAKdUaIxN
	mov $5, &str_SEUpTnFTR
	mov $6, &str_xMzuZtEgf
	push $4
	call write_C, 1
	push $8
	call read_f, 1
	pop $9
	mov $8, $9
	slt $10, $8, 0.000000
	brz if_luae7AOaj_end0, $10
if_luae7AOaj:
	push $5
	call write_C, 1
	push $6
	call write_C, 1
	jump if_luae7AOaj_end1
if_luae7AOaj_end0:
	push $8
	call sqrt_f, 1
	pop $11
	push $11
	call write_f, 1
	call write_v, 0
if_luae7AOaj_end1:
	return 0
main:
	call main_v


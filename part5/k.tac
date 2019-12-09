.table
char str_nuV9H2ps7[] = "min("
char str_ZHXuhNydM[] = ", "
char str_hjcCX1DOg[] = ") = "
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
min_ii:
	sleq $1, #0, #1
	brz if_D11ZkUMVY_end0, $1
if_D11ZkUMVY:
	mov $0, #0
	jump if_D11ZkUMVY_end1
if_D11ZkUMVY_end0:
	mov $0, #1
if_D11ZkUMVY_end1:
	return $0
min_fi:
	inttofl $1, #1
	mov $0, $1
	sleq $3, #0, $0
	brz if_z5tJbizZs_end0, $3
if_z5tJbizZs:
	mov $2, #0
	jump if_z5tJbizZs_end1
if_z5tJbizZs_end0:
	mov $2, $0
if_z5tJbizZs_end1:
	return $2
min_if:
	inttofl $1, #0
	mov $0, $1
	sleq $3, $0, #1
	brz if_W8DVRybny_end0, $3
if_W8DVRybny:
	mov $2, $0
	jump if_W8DVRybny_end1
if_W8DVRybny_end0:
	mov $2, #1
if_W8DVRybny_end1:
	return $2
min_ff:
	sleq $1, #0, #1
	brz if_uksYhoo_2_end0, $1
if_uksYhoo_2:
	mov $0, #0
	jump if_uksYhoo_2_end1
if_uksYhoo_2_end0:
	mov $0, #1
if_uksYhoo_2_end1:
	return $0
main_v:
	mov $0, &str_nuV9H2ps7
	mov $1, &str_ZHXuhNydM
	mov $2, &str_hjcCX1DOg
	push $3
	call read_i, 1
	pop $4
	mov $3, $4
	push $5
	call read_i, 1
	pop $6
	mov $5, $6
	push $7
	call read_f, 1
	pop $8
	mov $7, $8
	push $9
	call read_f, 1
	pop $10
	mov $9, $10
	push $0
	call write_C, 1
	push $3
	call write_i, 1
	push $1
	call write_C, 1
	push $5
	call write_i, 1
	push $2
	call write_C, 1
	push $3
	push $5
	call min_ii, 2
	pop $16
	push $16
	call write_i, 1
	call write_v, 0
	push $0
	call write_C, 1
	push $3
	call write_i, 1
	push $1
	call write_C, 1
	push $9
	call write_f, 1
	push $2
	call write_C, 1
	push $3
	push $9
	call min_if, 2
	pop $24
	push $24
	call write_f, 1
	call write_v, 0
	push $0
	call write_C, 1
	push $7
	call write_f, 1
	push $1
	call write_C, 1
	push $5
	call write_i, 1
	push $2
	call write_C, 1
	push $7
	push $5
	call min_fi, 2
	pop $32
	push $32
	call write_f, 1
	call write_v, 0
	push $0
	call write_C, 1
	push $7
	call write_f, 1
	push $1
	call write_C, 1
	push $9
	call write_f, 1
	push $2
	call write_C, 1
	push $7
	push $9
	call min_ff, 2
	pop $40
	push $40
	call write_f, 1
	call write_v, 0
	return 0
main:
	call main_v


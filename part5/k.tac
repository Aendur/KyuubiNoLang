.table
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
f_i:
	sub $1, #0, 1
	inttofl $1, $1
	mul $1, 2.000000, $1
	mov $0, $1
	add $0, $0, 1.000000
	return $0
main:
	nop


.table
int gx
char str_xu_z_MKxU[] = "awooo"
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
_WRITE_STR_BEGIN:
	mov      $1, #0[$0]       // $1 = str[i]
	seq      $2, $1, '\0'     // $2 = (str[i] == 0)
	brnz _WRITE_STR_END, $2   // if ($2 != false) goto end
	print    $1               // else print str[i]
	add      $0, $0, 1        // ++i
	jump _WRITE_STR_BEGIN     // continue
_WRITE_STR_END:
	println                   // print newline
	return                    // return
	return
main_v:
	mov gx, 5
	push gx
	call write_i, 1
	mov $1, &str_xu_z_MKxU
	push $1
	call write_C, 1
	return 0
main:
	call main_v


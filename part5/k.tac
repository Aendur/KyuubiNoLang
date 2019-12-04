.table
int gx
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
main_v:
	mov gx, 5
	push gx
	call write_i, 1
	call write_v
	return 0
main:
	call main_v


.table
char string0[] = "int?"
char string1[] = "char?"
char string2[] = "float?"
char string3[] = "o hai =3"

.code
__main_void:
	mov $0, &string0
	param $0
	call __write_str, 1

	param $0
	call __read_int, 1
	pop $0
	param $0
	call __write_int, 1


	mov $0, &string1
	param $0
	call __write_str, 1

	param $0
	call __read_char, 1
	pop $0
	param $0
	call __write_char, 1

	
	mov $0, &string2
	param $0
	call __write_str, 1
	
	param $0
	call __read_float, 1
	pop $0
	param $0
	call __write_float, 1


	mov $0, &string3
	param $0
	call __write_str, 1
	return 0

__read_int:
	scani  $0
	return $0
__read_char:
	scanc  $0
	return $0
__read_float:
	scanf  $0
	return $0
__write_int:
__write_char:
__write_float:
	println #0
	return
__write_str:
	mov      $0, 0            // $0 = i
__write_str_begin:
	mov      $1, #0[$0]       // $1 = str[i]
	seq      $2, $1, '\0'     // $2 = (str[i] == 0)
	brnz __write_str_end, $2   // if ($2 != false) goto end
	print    $1               // else print str[i]
	add      $0, $0, 1        // ++i
	jump __write_str_begin     // continue
__write_str_end:
	println                   // print newline
	return                    // return


main:
	call __main_void

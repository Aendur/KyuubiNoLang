.table
char string0[] = "int?"
char string1[] = "char?"
char string2[] = "float?"
char string3[] = "o hai =3"

.code
_READ_INT:
	scani  $0
	return $0
_READ_CHAR:
	scanc  $0
	return $0
_READ_FLOAT:
	scanf  $0
	return $0
_WRITE_INT:
_WRITE_CHAR:
_WRITE_FLOAT:
	println #0
	return
_WRITE_STR:
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


main:
	mov $0, &string0
	param $0
	call _WRITE_STR, 1

	param $0
	call _READ_INT, 1
	pop $0
	param $0
	call _WRITE_INT, 1


	mov $0, &string1
	param $0
	call _WRITE_STR, 1

	param $0
	call _READ_CHAR, 1
	pop $0
	param $0
	call _WRITE_CHAR, 1

	
	mov $0, &string2
	param $0
	call _WRITE_STR, 1
	
	param $0
	call _READ_FLOAT, 1
	pop $0
	param $0
	call _WRITE_FLOAT, 1


	mov $0, &string3
	param $0
	call _WRITE_STR, 1

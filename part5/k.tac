.code
main:
	mov $0, 1.5
	mov $1, 5
	
	inttofl $2, $1
	slt $2, $0, $2

	println $2

%type <list_type> elem
%type <elem_type> elem
%token TOKEN

 // remover especificamente os elems 
%destructor { free($$); } elem
 // remover todo mundo que for do tipo <elem_type>
%destructor { free($$); } <elem_type>

%union {
	struct list * list_type;
	struct elem * elem_type;
}

%%

list
	: elem             { push($1); }
	| elem  ',' list   { push($1); }
	| error ',' list   { 
		// se cair aqui, tudo que foi
		// alocado no error como por
		// exemplo os TOKEN e os elem
		// serão perdidos e vc não terá
		// mais uma referência para
		// conseguir dar free neles
		}
	;

elem
	: TOKEN   { $$ = malloc(...); }
	;

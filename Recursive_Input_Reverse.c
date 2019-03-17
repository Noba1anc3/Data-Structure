void print(){
	char c;
	scanf("%c",&c);
	if( c != '#'){
		print();
		printf("%c",c);
	}
}

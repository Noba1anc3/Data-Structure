int Fib(int i){
	if(i < 2)
		return i == 1 ? 1 : 0;
	return Fib(i-1) + Fib(i-2);
}

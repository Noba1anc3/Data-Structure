public static void findQueen(int row){
	if(row > 7){
		total++;
		PrintQueen();
		return;
	}
	for(int column = 0; column < 8; column++){
		if(check(row, column)){
			array[row][column] = 1;
			findQueue(row+1);
			array[row][column] = 0;
   		}
  	}
}

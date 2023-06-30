#include <iostream>
#include <dos.h>
using namespace std;

void computer(int mat[3][3] , int a , int b){
	
	int cntr[3] , cntc[3] , cntremp[3] , cntcemp[3] ,  cntbs = 0  , cntfs = 0 , cntfsemp = 0 , cntbsemp = 0;
	
	
	for(int p = 0 ; p < 3; p++){
	  
	cntr[p] = 0;
	cntc[p] = 0;
	cntremp[p] = 0;	
	cntcemp[p] = 0;
	//cntfsemp[p] = 0;
	//cntrbsemp[p] = 0;
	//cntfs[p] = 0;
	//cntbs[p] = 0;
	
	}
	
	for(int i = 0; i < 3; i++){
		
		for(int j = 0; j < 3; j++){
			
			if(mat[i][j]  == b){
				cntr[i]++;
			}
			if(mat[i][j] == -1){
				cntremp[i]++;
			}
			
		}
		
	}
	
	for(int k = 0; k < 3; k++){
		
		for(int l = 0; l < 3; l++){
			
			if(mat[l][k] == b){
				cntc[k]++;
			}
			if(mat[l][k] == -1){
				cntcemp[k]++;
			}
			
		}
		
	}
	
	for(int m = 0; m < 3; m++){
		
		if(mat[m][m] == b){
			
			cntbs++;
		 	
		}
		else if(mat[m][m] == -1){
			
			cntbsemp++;
			
		}
		
	}
	
	for(int s = 0; s < 3; s++){
		
		for(int t = 0; t < 3 ; t++){
			
			if(s + t == 2){
			
			
			if(mat[s][t] == b){
				
				cntfs++;
				
			}
			else if(mat[s][t] == -1){
				
				cntfsemp++;
				
			}
			
        	}
			
		}
		
		
		
	}
	
	for(int x = 0; x < 3; x++){
		
		if(cntr[x] == 2 && cntremp[x] == 1){
			
			for(int k = 0; k < 3; k++){
				
				if(mat[x][k] == -1){
					
					mat[x][k] = b;
					return ;
					
				}
				
			}
			
		}
		
		
	}
	
	for(int z = 0; z < 3 ; z++){
		
		if(cntc[z] == 2 && cntcemp[z] == 1){
			
			for(int l = 0; l < 3; l++){
				
				if(mat[l][z] == -1){
					
					mat[l][z] = b;
					return ;
					
				}
				
				
			}
			
		}
		
	}
	
	if(cntbs == 2 && cntbsemp == 1){
		 for(int v = 0; v < 3; v++){
		 	 if(mat[v][v] == -1){
		 	 	 mat[v][v] = b;
		 	 	 return ;
			  }
		 }
	}
	
	if(cntfs == 2 && cntfsemp == 1){
		 for(int x = 0; x < 3; x++){
		 	
		 	 for(int y = 0; y < 3; y++){
		 	 	 if(x + y == 2){
				   
		 	 	
		 	 	 if(mat[x][y] == -1){
		 	 	 	 mat[x][y] = b;
		 	 	 	 return ;
				   }
		     	}
			   
			  }
		 	 
		 }
	}
	
		int cntra[3] , cntca[3] , cntrempa[3] , cntcempa[3] ,  cntbsa = 0  , cntfsa = 0 , cntfsempa = 0 , cntbsempa = 0;
	
	
	for(int p = 0 ; p < 3; p++){
	  
	cntra[p] = 0;
	cntca[p] = 0;
	cntrempa[p] = 0;	
	cntcempa[p] = 0;
	//cntfsemp[p] = 0;
	//cntrbsemp[p] = 0;
	//cntfs[p] = 0;
	//cntbs[p] = 0;
	
	}
	
	for(int i = 0; i < 3; i++){
		
		for(int j = 0; j < 3; j++){
			
			if(mat[i][j]  == a){
				cntra[i]++;
			}
			if(mat[i][j] == -1){
				cntrempa[i]++;
			}
			
		}
		
	}
	
	for(int k = 0; k < 3; k++){
		
		for(int l = 0; l < 3; l++){
			
			if(mat[l][k]  == a){
				cntca[k]++;
			}
			if(mat[l][k] == -1){
				cntcempa[k]++;
			}
			
		}
		
	}
	
	for(int m = 0; m < 3; m++){
		
		if(mat[m][m] == a){
			
			cntbsa++;
		 	
		}
		else if(mat[m][m] == -1){
			
			cntbsempa++;
			
		}
		
	}
	
	for(int s = 0; s < 3; s++){
		
		for(int t = 0; t < 3 ; t++){
			
			if(s + t == 2){
			
			
			if(mat[s][t] == a){
				
				cntfsa++;
				
			}
			else if(mat[s][t] == -1){
				
				cntfsempa++;
				
			}
			
	    	}
			
		}
		
		
		
	}
	
	
	for(int x = 0; x < 3; x++){
		
		if(cntra[x] == 2 && cntrempa[x] == 1){
			
			for(int k = 0; k < 3; k++){
				
				if(mat[x][k] == -1){
					
					mat[x][k] = b;
					return ;
					
				}
				
			}
			
		}
		
		
	}
	
	for(int z = 0; z < 3 ; z++){
		
		if(cntca[z] == 2 && cntcempa[z] == 1){
			
			for(int l = 0; l < 3; l++){
				
				if(mat[l][z] == -1){
					
					mat[l][z] = b;
					return ;
					
				}
				
				
			}
			
		}
		
	}
	
		if(cntbsa == 2 && cntbsempa == 1){
		 for(int v = 0; v < 3; v++){
		 	 if(mat[v][v] == -1){
		 	 	 mat[v][v] = b;
		 	 	 return ;
			  }
		 }
	}
	
	if(cntfsa == 2 && cntfsempa == 1){
		 for(int x = 0; x < 3; x++){
		 	
		 	 for(int y = 0; y < 3; y++){
		 	 	if(x + y == 2){
				  
		 	 	 if(mat[x][y] == -1){
		 	 	 	 mat[x][y] = b;
		 	 	 	 return ;
				   }
				   
			   }
			  }
		 	 
		 }
	}
	
	for(int w = 0; w < 3; w++){
		
		
		for(int y = 0; y < 3; y++){
	          if(mat[w][y] == -1){
	          	 mat[w][y] = b;
	          	 return ;
			  }        		
	    }
	    
	    
    }
	
	
}

int in(int mat[3][3] , int a){
	
	int r  , c;
	
	cout<<"enter rows and columns"<<endl;
	
	cin>>r>>c;
	
	if(r > 2 || c > 2){
		
		cout<<"entered input is out of bounds"<<endl;
		return -1;
		
	}
	else if(mat[r][c] !=  -1){
		
		cout<<"cell already filled"<<endl;
		return -1;
		
	}
	else{
		
		mat[r][c] = a;
		return 1;
		
	}
	
	
}

void input(int mat[3][3] , int d){
	
	int r , c , f;
 
	
	cout<<"enter row and column of cell of your choice"<<endl;
	
		 f = in(mat , d);
		
	
	while(f == -1){
		
		f = in(mat , d);
		
	}
	
}


int check(int mat[3][3] , int a , int b , char ch , char chc){
	
	for(int i = 0; i < 3; i++){
		for(int j = 0; j < 3; j++){
			 if(mat[i][j] == a){
			 	 cout<<ch;
			 	 cout<<" ";
			 }
			 else if(mat[i][j] == b){
			 	cout<<chc;
			 	cout<<" ";
			 }
			 else{
			 	cout<<"_";
			 	cout<<" ";
			 }
		}
		cout<<endl;
	}
	
	
	
	for(int r = 0; r < 3; r++){
		int counta = 0;
		int countb = 0;
		for(int s = 0; s < 3; s++){
		       if(mat[r][s] == a){
		       	  counta++;
			   }
			   else if(mat[r][s] == b){
			   	  countb++;
			   }
			   else;	 
		}
		if(counta == 3){
			cout<<"GAME COMPLETED YOU WON \n CONGRATULATIONS"<<endl;
			return 0;
		}
		else if(countb == 3){
			cout<<"GAME COMPLETED YOU LOSE \n Better luck next time"<<endl;
			return 0;
		}
		
	}
	
	
		for(int r = 0; r < 3; r++){
		int counta = 0;
		int countb = 0;
		for(int s = 0; s < 3; s++){
		       if(mat[s][r] == a){
		       	  counta++;
			   }
			   else if(mat[s][r] == b){
			   	  countb++;
			   }
			   else;	 
		}
		if(counta == 3){
			cout<<"GAME COMPLETED YOU WON \n CONGRATULATIONS"<<endl;
			return 0;
		}
		else if(countb == 3){
			cout<<"GAME COMPLETED YOU LOSE \n Better luck next time"<<endl;
			return 0;
		}
		
	}
	
	int h , g;
	for(int r = 0; r < 3; r++){
		int counta = 0;
		int countb = 0;
		if(mat[r][r] == a){
			counta++;
		}
		else if(mat[r][r] == b){
			countb++;
		}
		else;
		
		h = counta;
		g = countb;
	}
	
	
	if(h == 3){
			cout<<"GAME COMPLETED YOU WON \n CONGRATULATIONS"<<endl;
			return 0;
		
	}
	else if(g == 3){
		   	cout<<"GAME COMPLETED YOU LOSE \n Better luck next time"<<endl;
			return 0;
	}
	else;
	
	for(int r = 0; r < 3; r++){
		int counta = 0;
		int countb = 0;
		for(int s = 0; s  < 3; s++){
			
			if( r+s == 2){
				
			  if(mat[r][s] == a){
			  	 
			  	 counta++;
			  	 
			  }
			  else if(mat[r][s] == b){
			  	 
			  	 countb++;
			  	 
			  }
			  else;
		    }
		}
		h = counta;
		g = countb;	
	}
	
	
	if(h == 3){
			cout<<"GAME COMPLETED YOU WON \n CONGRATULATIONS"<<endl;
			return 0;
		
	}
	else if(g == 3){
		   	cout<<"GAME COMPLETED YOU LOSE \n Better luck next time"<<endl;
			return 0;
	}
	else;
	
	int dec = 0;
	
	for(int z = 0; z < 3; z++){
		
		for(int a = 0; a < 3; a++){
			
			if(mat[z][a] == -1){
				dec = 1;
				break;
			}
			
		}
		
	}
	
		if(dec != 1){
			cout<<"ITS A DRAW Try Again Next Time"<<endl;
			return 0;
		}
	
	
	
return 1;
	
}

int main(){
	
	
	int mat[3][3];
	
	cout<<"select X or O"<<endl;
	
	char ch , chc;
	
	cin>>ch;
	
	int a  , b;
	
	if(ch == 'x' || 'X'){
		
		a = 1;
		b = 0;
		chc = 'o';
		
	}
	else if(ch == 'o' || 'O'){
		a = 1;
		b = 0;
		chc = 'x';
	}
	else{
		
		cout<<"only X and O are accepted"<<endl;
		return 0;
		
	}
	
	cout<<endl;
	
	cout<<"DO YOU WANT TO START THE GAME ?"<<endl;
	cout<<"enter yes (or) no"<<endl;
	
	string str;
	
	cin>>str;
	
	if(str[0] == 'y'){
		cout<<"starting the game"<<endl;
	}
	else if(str[0] == 'n'){
		cout<<"GAME ENDED"<<endl;
		return 0;
	}
	else{
		
		cout<<"sorry expexted yes or no as input in lowercase format"<<endl;
		
		return 0;
		
	}
	
	int cont  = 1;
	
	for(int i = 0; i < 3 ; i++){
		
		for(int j = 0; j < 3; j++){
			
			mat[i][j] = -1;
		}
	}
	
	for(int k = 0; k < 3; k++){
		
		for(int l = 0; l < 3; l++){
			if(mat[k][l] == -1){
				
				cout<<"e";
				cout<<" ";
				
			}
			
		}
		
		cout<<endl;
		
	}
	
	int chance  = 0 , r  , c;
	
	while(cont){
		
		if(chance == 0){
			
			
			input(mat , a);
			
			chance = 1;
			
			int win = check(mat , a , b , ch , chc);
			
			if(win == 0){
				cont = 0;
			}
			
			
		}
		else{
			
			cout<<"KOUSHIKS MOVE"<<endl;
			cout<<endl;
			computer(mat , a , b);
			chance = 0;
			
			int win = check(mat  , a , b , ch , chc);
			
			if(win == 0){
				cont = 0;
			}
			
		}
		
		
		
		
	}
	
	
	
	
	
}

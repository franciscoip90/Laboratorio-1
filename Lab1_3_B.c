#include <stdio.h>
#define M 2 //filas
#define N 2 //columnas 
#define P 3
void Multiplicacion_Matrices(){ 
int i,j,k; 
int Matriz1[M][N] = { {0}};
for ( i = 0; i < M; i++){ 
for ( j = 0; j < N; j++){
printf("\nIntroduzca la entrada (%d,%2d) para la primera matriz \n", i, j);
scanf("%d", &Matriz1[i][j]);}}
int Matriz2[N][P] = {{ 5}};
printf("\nParametros segunda matriz:\n");
for ( i = 0; i < N; i++){ 
for ( j = 0; j < P; j++){ 
printf("\nIntroduzca la entrada (%d,%2d) para la segunda matriz \n", i, j);
scanf("%d", &Matriz2[i][j]);}
} 
int Matriz_Producto[M][P] = {{0}};
for ( k = 0; k < M; k++){
for ( j = 0; j < P; j++){
for ( i = 0; i < N; i++ )
Matriz_Producto[ k ][j ] += Matriz1[k][i]*Matriz2[i][j];
} 
}
for ( i = 0; i < M; i++ ){
for ( k = 0; k < N; k++){
printf("%3d", Matriz1[i][k]);
}
printf("\t\t"); 
for ( j = 0; j < P; j++){ 
if ( i <= (N - 1)) 
printf("%3d", Matriz2[i][j]); 
else 
printf(" ");}
printf ("\t\t"); 
for ( j = 0; j < P; j++ ){ 
printf("%3d", Matriz_Producto[i][j]);} 
printf("\n");}
if ( N > M){
int l = M;
while ( l < N ){ 
for ( i = 0; i < N; i++)
printf(" ");
printf("\t\t\t");      
for ( j = 0; j < P; j++ )
	printf("%3d", Matriz2[l][j]);
	printf("\n");
	l++; 
} 
} 
} 
int main(){
Multiplicacion_Matrices();
return 0;
}


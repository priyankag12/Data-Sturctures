#include<stdio.h> 

int vertices;

void init(int arr[vertices][vertices]){ //Initialise the matrix.
	int i,j;
	for(i=0;i<vertices;i++){
		for(j=0;j<vertices;j++){
			arr[i][j]=0;
		}
	}
}

void addEdge(int arr[vertices][vertices],int i,int j){  //Add edges in the matrix.
	arr[i][j]=1;
	arr[j][i]=1;
}

int main() {
    printf("Enter the number of vertices: ");
    scanf("%d", &vertices);

    int adjacencyMatrix[vertices][vertices];

    init(adjacencyMatrix);

    printf("Enter the details for adjacency matrix :\n");  // Input the adjacency matrix
    printf("Enter the edge as a pair of vertices(eg: 1 4) and enter -1 to exit:");
    int sel; //selection
    int j,k;
    while(sel != -1)
    {
        scanf("%d%d",&j,&k);
        addEdge(adjacencyMatrix,j,k);
        printf("Add more edges? 1(YES) or -1(NO)");
        scanf("%d",&sel);
        printf("Enter the the pair of vertices to add an edge: ");
    }

    printf("Adjacency Matrix:\n");     // Display the adjacency matrix
    for (int i = 0; i < vertices; i++) {
        for (int j = 0; j < vertices; j++) {
            printf("%d ", adjacencyMatrix[i][j]);
        }
        printf("\n");
    }
    return 0;
}

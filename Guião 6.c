//Ficha 6 PI

#define MAX 100
typedef struct queue {
int front, size;
int values [MAX];
} QUEUE;

struct dinQueue {
    int size;
    int front;
    int length;
    int *values;
};
typedef struct dinQueue *DQueue;


//---------A-----------------
void DinitQueue (DQueue q) {
	q->size = 5;
	q->front = 0;
	q->lenght = 0;
	q->values = malloc(5*sizeof(int));
}

//---------B-----------------
int DisEmpty(DQueue q){
	return (q->lenght == 0);
}

//---------C-----------------
int dupQueue(DQueue q){
	int i;
	int *nValues = malloc(2*q->size*sizeof(int));

	if(nValues==NULL) return -1;

	for(i = q->front; i < q->lenght; i++)
	nValues[i] = q->values[(q->front+i)%q->size];

	q->size *= 2;
	q->front = 0;

	q->values = nValues;
	return 0;

}

//----------D---------------
int Denqueue (DQueue q, int x){

	if(q->lenght == q->size){
		int e = dupQueue(q);
		if(e==-1) return -1;
	}

	q->values[(q->lenght + q->front)%q->size] = x;
	q->lenght++;
	return 0;
}

int Ddequeue(DQueue q, int *x){
  if(q->length==0) return -1;
  *x = q->values[q->front];
  q->front = (q->front+1)%q->size;
  q->length--;
  return 0;
  }

//---------E----------------
int Dfront (DQueue q, int *x){
	if(q->length==0) return -1;
  *x = q->values[q->front];
  return 0;
  }

  int main() {
  struct dinQueue r1;
  DQueue R1 = &r1;
  int x;
  
  DinitQueue(R1);
  Denqueue(R1,4);
  Denqueue(R1,7);
  Denqueue(R1,14);
  Denqueue(R1,3);
  Denqueue(R1,5);
  Ddequeue(R1,&x);
  Denqueue(R1,8);
  Denqueue(R1,4);
  Dfront(R1,&x);









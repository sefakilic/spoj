#include <cstdio>
#include <cstdlib>
#include <cstring>
using namespace std;

#define GI ({int t; scanf("%d", &t); t;})

#define MATCH 0
#define INSERT 1
#define DELETE 2
#define MAXLEN 3000

typedef struct {
  int cost;    // cost of reaching this cell
  int parent;  // parent cell
} cell;

cell m[MAXLEN+1][MAXLEN+1]; // dynamic programming table

// table initialization
void row_init(int i) {
  m[0][i].cost = i;
  if (i>0)
    m[0][i].parent = INSERT;
  else
    m[0][i].parent = -1;
}

void column_init(int i) {
  m[i][0].cost = i;
  if (i>0)
    m[i][0].parent = DELETE;
  else
    m[i][0].parent = -1;
}

// penalty costs
int match(char c, char d) {
  if (c==d) return (0);
  else return (1);
}

int indel(char c) {
  return (1);
}

// goal cell identification
void goal_cell(char* s, char* t, int* i, int* j) {
  // Return the indices of the cell marking the endpoint of the solution. For edit
  // distance, this is defined by the length of the two input strings. However, other
  // applications may not have fixed goal locations.
  *i = strlen(s)-1;
  *j = strlen(t)-1;
}

// traceback actions
void insert_out(char *c, int j) {
  printf("I");
}
void delete_out(char *c, int i) {
  printf("D");
}
void match_out(char* s, char* t, int i, int j) {
  if (s[i]==t[j]) printf("M");
  else printf("S");
}


// edit distance by Dynamic programming
int string_compare(char *s, char* t) {
  // make sure both string s and t are padded with initial blank character
  int i,j,k;    // counters
  int opt[3];   // cost of three options

  for (i=0; i<MAXLEN; i++) {
    row_init(i);
    column_init(i);
  }

  int s_len = strlen(s);
  int t_len = strlen(t);
  for (i=1; i<s_len; i++) {
    for (j=1; j<t_len; j++) {
      //opt[MATCH] = m[i-1][j-1].cost + match(s[i], t[j]);
      //opt[INSERT] = m[i][j-1].cost + indel(t[j]);
      //opt[DELETE] = m[i-1][j].cost + indel(s[i]);
      // change function calls to expressions to make it faster?
      opt[MATCH] = m[i-1][j-1].cost + ((s[i]==t[j])?0:1);
      opt[INSERT] = m[i][j-1].cost + 1;
      opt[DELETE] = m[i-1][j].cost + 1;

      m[i][j].cost = opt[MATCH];
      m[i][j].parent = MATCH;
      for (k=INSERT; k<=DELETE; k++) {
	if (opt[k] < m[i][j].cost) {
	  m[i][j].cost = opt[k];
	  m[i][j].parent = k;
	}
      }
    }
  }
  goal_cell(s, t, &i, &j);
  return (m[i][j].cost);
}


int main() {
  int T;
  char A[MAXLEN+1], B[MAXLEN+1];
  T = GI;
  for (int i = 0; i < T; ++i) {
    A[0] = ' ';
    B[0] = ' ';
    scanf("%s", &(A[1]));
    scanf("%s", &(B[1]));
    //printf("%s %d\n", A, strlen(A));
    //printf("%s %d\n", B, strlen(B));
    printf("%d\n", string_compare(A, B));
  }
  return 0;
}

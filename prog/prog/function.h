
//прописываем протитипы функций


#ifdef INTEGER
void fill_arr(int arr[], int size);
void console_arr(int arr[], int size);
void min_el(int arr[], int size);
void max_el(int arr[], int size);
void sort_arr(int arr[], int size);
void reduct_arr(int arr[], int size);

#define FILL(arr, size) fill_arr(arr, size);
#define CONSOLE(arr, size) console_arr(arr, size);
#define MIN(arr, size) min_el(arr, size);
#define MAX(arr, size) max_el(arr, size);
#define SORT(arr, size) sort_arr(arr, size);
#define REDUCT(arr, size) reduct_arr(arr, size)
#endif

#ifdef FLOAT
void fill_arr_fl(float arr[], int size);
void console_arr_fl(float arr[], int size);
void min_el_fl(float arr[], int size);
void max_el_fl(float arr[], int size);
void sort_arr_fl(float arr[], int size);
void reduct_arr_fl(float arr[], int size);

#define FILL(arr, size) fill_arr_fl(arr, size);
#define CONSOLE(arr, size) console_arr_fl(arr, size);
#define MIN(arr, size) min_el_fl(arr, size);
#define MAX(arr, size) max_el_fl(arr, size);
#define SORT(arr, size) sort_arr_fl(arr, size);
#define REDUCT(arr, size) reduct_arr_fl(arr, size);
#endif

#ifdef CHAR
void fill_arr_ch(char arr[], int size);
void console_arr_ch(char arr[], int size);
void min_el_ch(char arr[], int size);
void max_el_ch(char arr[], int size);
void sort_arr_ch(char arr[], int size);
void reduct_arr_ch(char arr[], int size);

#define FILL(arr, size) fill_arr_ch(arr, size);
#define CONSOLE(arr, size) console_arr_ch(arr, size);
#define MIN(arr, size) min_el_ch(arr, size);
#define MAX(arr, size) max_el_ch(arr, size);
#define SORT(arr, size) sort_arr_ch(arr, size);
#define REDUCT(arr, size) reduct_arr_ch(arr, size);
#endif





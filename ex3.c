#include <stdio.h>

void fig1(int n){
    for(int h = 1; h <= n; h++){
        for(int s = n-h; s > 0; s--){
            printf(" ");
        }
        for(int star = 0; star < 2*h-1; star++){
            printf("*");
        }
        printf("\n");
    }
}

void fig2(int n){
    for(int h = 1; h <= 2*n-1; h++){
        if(h <= n) {
            for (int star = 0; star < h; star++) {
                printf("*");
            }
        }
        if(h > n){
            for (int star = 2*n-h; star > 0; star--) {
                printf("*");
            }
        }
        printf("\n");
    }
}

void fig3(int h, int w){
    for(int i = 0; i < h; i++){
        for(int j = 0; j < w; j++){
            printf("*");
        }
        printf("\n");
    }
}
int main(int argc, char *argv[]) {
    int f;
    sscanf(argv[1], "%d", &f);
    if(f == 3){
        int h, w;
        sscanf(argv[2], "%d", &h);
        sscanf(argv[3], "%d", &w);
        fig3(h, w);
    } else{
        int n;
        sscanf(argv[2], "%d", &n);
        if(f == 1) fig1(n);
        if(f == 2) fig2(n);
    }
    return 0;
}

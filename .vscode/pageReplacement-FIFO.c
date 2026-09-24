#include <stdio.h>

int main() {
    int pages[50], frame[10];
    int n, f, i, j, k, pageFault = 0;
    int index = 0, found;

    printf("Enter number of pages: ");
    scanf("%d", &n);

    printf("Enter page reference string: ");
    for(i = 0; i < n; i++) {
        scanf("%d", &pages[i]);
    }

    printf("Enter number of frames: ");
    scanf("%d", &f);

    for(i = 0; i < f; i++) {
        frame[i] = -1;
    }

    printf("\nPage\tFrames\n");

    for(i = 0; i < n; i++) {
        found = 0;

        for(j = 0; j < f; j++) {
            if(frame[j] == pages[i]) {
                found = 1;
                break;
            }
        }

        if(found == 0) {
            frame[index] = pages[i];
            index = (index + 1) % f;
            pageFault++;
        }

        printf("%d\t", pages[i]);
        for(k = 0; k < f; k++) {
            printf("%d ", frame[k]);
        }
        printf("\n");
    }

    printf("\nTotal Page Faults = %d\n", pageFault);

    return 0;
}


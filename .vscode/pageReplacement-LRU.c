#include <stdio.h>

int main() {
    int pages[50], frame[10], time[10];
    int n, f, i, j, pos, pageFault = 0;
    int count = 0, found;

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
                count++;
                time[j] = count;
                found = 1;
                break;
            }
        }

        if(found == 0) {
            int min = 9999;

            for(j = 0; j < f; j++) {
                if(frame[j] == -1) {
                    pos = j;
                    break;
                }

                if(time[j] < min) {
                    min = time[j];
                    pos = j;
                }
            }

            frame[pos] = pages[i];
            count++;
            time[pos] = count;
            pageFault++;
        }

        printf("%d\t", pages[i]);
        for(j = 0; j < f; j++) {
            printf("%d ", frame[j]);
        }
        printf("\n");
    }

    printf("\nTotal Page Faults = %d\n", pageFault);

    return 0;
}

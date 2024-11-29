#include <stdio.h>
#include <stdlib.h>
#include <windows.h>


void crasher(){
    system("taskkill /f /im RobloxPlayerBeta.exe");
    printf("Roblox crashed\n");
}

int main(){
    int delay;
    int crashCount = 0;
    printf("Specify the crash delay in seconds : ");
    scanf("%d", &delay);
    system("cls");
    while (1){
        printf("Roblox crashed %d times\n", crashCount);    
        crasher();
        Sleep(delay * 1000);
        crashCount++;
        system("cls");
    }
    return 0;
}
#include <stdio.h>
#include <windows.h>
#include <direct.h>
#include <Winuser.h>
#include <stdlib.h>

void clearBrowserCache()
{

    int Fahim;
    int a;
    printf("Enter your browser that yo want to clear\n");
    printf("\nPress 1 for Chorme\n");
    printf("\nPress 2 for firefox\n");
    scanf("%d", &a);
    printf("\n\nWarring to you. All data will clear permanently.");
    printf("\nPress 1 for yes that you want.\n press others for exit.\n");
    scanf("%d", &Fahim);
    if (Fahim == 1)
    {

        switch (a)
        {
        case 1:
            clearMozillaCache();

            break;
        case 2:
            clearChromeCache();
            break;

        default:
            break;
        }

        printf("\nData is clear\n")
    }
    else
    {

        printf("exit\n");
        exit(0);
    }
}
void clearMozillaCache()
{
    char path[256] = "C:\\Users\\";
    strcat(path, getenv("USERNAME")); // int getlogin_r(char *buf,size_t bufsize); unistd.h
    strcat(path, "\\AppData\\Roaming\\Mozilla\\Firefox\\");

    char removepath[256] = "";
    strcat(removepath, "rmdir /Q /S "); // rm -rf
    strcat(removepath, path);
    system(removepath);

    char createpath[256] = "";
    strcat(createpath, "mkdir ");
    strcat(createpath, path);
    system(createpath);
}

void clearChromeCache()
{
    char path[256] = "C:\\Users\\";
    strcat(path, getenv("USERNAME"));
    strcat(path, "\\AppData\\Local\\Google\\Chrome\\User Data\\Default\\Cache\\");
    char removepath[256] = "";
    strcat(removepath, "rmdir /Q /S ");
    strcat(removepath, path);
    system(removepath);

    char createpath[256] = "";
    strcat(createpath, "mkdir ");
    strcat(createpath, path);
    system(createpath);
}
int main(void)
{

    prntf("\tWelcome clear Browesr data software:\n");
    clearBrowserCache();
    printf("\n\n__________Developed by Mahady Hasan Fahim____________\n\n\n");

    return 0;
}

#include <stdio.h>

int main() {
    printf("Content-Type: text/html\n\n");
    printf("<html><head><title>Hello from Docker Apache HTTPD :</title></head>");
    printf("<body><h1>Hello World!!</h1>");
    printf("<p>This page is served by Apache HTTPD running inside Docker.</p>");
    printf("</body></html>");
    return 0;
}

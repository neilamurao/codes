#include <stdio.h>

// Function to alert based on the status code
void alertStatusCode(int status) {
    if (status >= 100 && status < 200) {
        printf("Informational response: Status code %d\n", status);
    } else if (status >= 200 && status < 300) {
        printf("Success: Status code %d. The request was successfully received, understood, and accepted.\n", status);
    } else if (status >= 300 && status < 400) {
        printf("Redirection: Status code %d. Further action needs to be taken to complete the request.\n", status);
    } else if (status >= 400 && status < 500) {
        printf("Client Error: Status code %d. The request contains bad syntax or cannot be fulfilled.\n", status);
    } else if (status >= 500 && status < 600) {
        printf("Server Error: Status code %d. The server failed to fulfill an apparently valid request.\n", status);
    } else {
        printf("Unknown status code: %d\n", status);
    }
}

int main() {
    int statusCode;
    
    //My code does two things, it asks for
    //An HTTP status code, and then displays the
    //Appropriate message it is associated with, e.g.:
    
    //Let's enter different HTTP status codes
    printf("Enter HTTP status code: ");
    scanf("%d", &statusCode);

    // Call the function to handle the status code
    alertStatusCode(statusCode);

    return 0;
}
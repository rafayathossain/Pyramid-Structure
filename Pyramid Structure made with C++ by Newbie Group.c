int main() {

    for (int i = 1; i <= 30; i++) {
        // print spaces
        for(int j = 30-i; j >0; j--){

        printf(" ");
       }
         // print stars

        for(int j = 1; j <= i*2-1; j++){
            printf("*");
       }

        printf("\n");

    }
    printf("Thank you everyone!");

    return 0;
}

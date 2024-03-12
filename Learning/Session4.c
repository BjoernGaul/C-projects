int main(){
    char inp;

     while(1){
        printf("***************************\n");
        printf("+       ----Menue----     +\n");
        printf("+ Datei (d)               +\n");
        printf("+ Ausschneiden (a)        +\n");
        printf("+ Einfuegen (v)           +\n");
        printf("+ Beenden (x)             +\n");
        printf("+                         +\n");
        printf("***************************\n");
        printf("Eingabe: \n");
        
        scanf("%c%*c", &inp); //doppelte ausgabe auch mit %s
        
        if(inp == 'd'){
            printf("Du hast Datei ausgewählt.\n");
            continue;
        }else if(inp == 'a'){
            printf("Du hast Ausschneiden ausgewählt.\n");
            continue;
        }else if(inp == 'v'){
            printf("Du hast Einfügen ausgewählt.\n");
            continue;
        }else if(inp == 'x'){
            printf("Du hast Beenden ausgewählt.\n");
            break;
        }else{
            printf("Keine gültige Eingabe!\n");
            continue;
        }
        } 
        
     return 0;
}
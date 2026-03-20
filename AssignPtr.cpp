int main() {
    //null pointer

    float* pexampleptr = nullptr;

    float examplevariable = 2.5f;

    /*use the adress operator to assign
     an address to the pointer*/

     pexampleptr = &examplevariable;

     //another variable

     float anothervariable = 50.0f;

     //reassign the pointer wit a different address
     pexampleptr =&anothervariable;
     return 0;
    
}
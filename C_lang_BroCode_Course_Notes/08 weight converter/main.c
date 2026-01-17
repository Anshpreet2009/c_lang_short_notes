#include <stdio.h>
#include <string.h>

int main(void) {
  int choice = 0;
  float kgs = 0.0f;
  float lbs = 0.0f;
  
  printf("Weight Conversion Calculator\n");
  printf("1. Pounds to Kilograms\n");
  printf("2. Kilograms to Pounds\n");
  printf("Select an option (1 or 2): ");
  scanf("%d", &choice);

  if (choice == 1){
    printf("Enter weight in lbs: ");
    scanf("%f", &lbs);
    kgs = lbs / 2.2046;
    printf("Weight in kg: %.2f\n", kgs);
  }
  else if (choice == 2){
    printf("Enter weight in kgs: ");
    scanf("%f", &kgs);
    lbs = kgs * 2.2046;
    printf("Weight in lbs: %.2f\n", lbs);
  }
  else{
    printf("Invalid choice. Please select 1 or 2.\n");
  }
  return 0;
}

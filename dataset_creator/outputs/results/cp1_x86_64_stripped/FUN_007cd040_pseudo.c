
void FUN_007cd040(void)

{
  int *piVar1;
  int *piVar2;
  
  piVar2 = DAT_0094acf8;
  if (DAT_0094acf8 != (int *)0x0) {
    do {
      if ((*piVar2 == 1) && (*(long *)(piVar2 + 0x82) != 0)) {
        FUN_0078e390();
      }
      piVar1 = *(int **)(piVar2 + 0x84);
      FUN_007104f0(piVar2);
      piVar2 = piVar1;
    } while (piVar1 != (int *)0x0);
  }
  DAT_0094acf8 = (int *)0x0;
  return;
}


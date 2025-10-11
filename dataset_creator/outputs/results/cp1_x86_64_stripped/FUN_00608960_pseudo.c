
undefined8 FUN_00608960(void)

{
  long lVar1;
  long lVar2;
  int *piVar3;
  
  lVar1 = FUN_00608380();
  if ((lVar1 != 0) && (piVar3 = *(int **)(lVar1 + 8), piVar3 != (int *)0x0)) {
    lVar2 = *(long *)(piVar3 + 2);
    if (*piVar3 == 1) {
      if (lVar2 != 0) {
        return 0;
      }
    }
    else if (*piVar3 == 0) {
      if (lVar2 != 0) {
        return 1;
      }
    }
    else if (lVar2 != 0) goto LAB_006089c5;
    lVar2 = FUN_004a7e50();
    *(long *)(piVar3 + 2) = lVar2;
    if (lVar2 != 0) {
      piVar3 = *(int **)(lVar1 + 8);
LAB_006089c5:
      *piVar3 = 0;
      return 1;
    }
  }
  return 0;
}


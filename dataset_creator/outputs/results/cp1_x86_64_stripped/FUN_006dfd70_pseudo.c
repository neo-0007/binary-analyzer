
void FUN_006dfd70(int param_1,long param_2)

{
  int *piVar1;
  long lVar2;
  long lVar3;
  
  piVar1 = (int *)(param_2 + 0x30);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    if (*(int *)(param_2 + 0x18) != 2) {
      lVar2 = *(long *)(&DAT_00946160 + (long)param_1 * 8);
      lVar3 = *(long *)(lVar2 + 0x10);
      while (param_2 != lVar3) {
        lVar2 = *(long *)(lVar2 + 0x18);
        lVar3 = *(long *)(lVar2 + 0x10);
      }
      *(undefined4 *)(lVar2 + 8) = 0;
      *(undefined8 *)(lVar2 + 0x10) = 0;
    }
    FUN_006e03d0();
    return;
  }
  return;
}


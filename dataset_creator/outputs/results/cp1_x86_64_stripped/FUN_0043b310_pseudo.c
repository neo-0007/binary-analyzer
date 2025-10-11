
int FUN_0043b310(undefined8 param_1,int *param_2,undefined8 *param_3,long *param_4)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  code *pcVar4;
  
  iVar1 = FUN_0043b870(param_2);
  if ((iVar1 != 0) && (iVar1 = *param_2, iVar1 != 0)) {
    pcVar4 = (code *)0x0;
    do {
      while (iVar1 != 4) {
        iVar1 = param_2[4];
        param_2 = param_2 + 4;
        if (iVar1 == 0) goto LAB_0043b37c;
      }
      pcVar4 = *(code **)(param_2 + 2);
      iVar1 = param_2[4];
      param_2 = param_2 + 4;
    } while (iVar1 != 0);
LAB_0043b37c:
    if (pcVar4 != (code *)0x0) {
      lVar2 = FUN_00485220();
      *param_4 = lVar2;
      if (lVar2 != 0) {
        lVar2 = FUN_0043be80();
        if (lVar2 != 0) {
          uVar3 = (*pcVar4)(param_1);
          FUN_00485260(*param_4,uVar3);
          FUN_00485270(*param_4,param_1);
          FUN_00485280(*param_4,lVar2);
          *param_3 = &DAT_008eaaa0;
          return 1;
        }
        lVar2 = *param_4;
      }
      FUN_00485240(lVar2);
      *param_4 = 0;
    }
  }
  return iVar1;
}


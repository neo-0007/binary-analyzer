
undefined8 FUN_004cbab0(undefined8 *param_1,long param_2,long *param_3)

{
  int iVar1;
  int iVar2;
  long lVar3;
  
  if (*(int *)(param_1 + 0x11) == -1) {
    return 0;
  }
  iVar1 = FUN_004096f0(*param_1);
  if (-1 < iVar1) {
    if (param_3 != (long *)0x0) {
      *param_3 = (long)iVar1;
    }
    if (param_2 != 0) {
      iVar2 = *(int *)(param_1 + 0x11);
      if (iVar1 == iVar2) {
        if (0 < iVar1) {
          lVar3 = 0;
          do {
            *(byte *)(param_2 + lVar3) =
                 *(byte *)((long)param_1 + lVar3 + 0x68) ^ *(byte *)((long)param_1 + lVar3 + 8);
            lVar3 = lVar3 + 1;
          } while (iVar1 != lVar3);
        }
      }
      else {
        *(undefined1 *)((long)param_1 + (long)iVar2 + 0x68) = 0x80;
        if (1 < iVar1 - iVar2) {
          thunk_FUN_00713720((long)param_1 + (long)iVar2 + 0x69,0,(long)((iVar1 - iVar2) + -1));
        }
        if (0 < iVar1) {
          lVar3 = 0;
          do {
            *(byte *)(param_2 + lVar3) =
                 *(byte *)((long)param_1 + lVar3 + 0x68) ^ *(byte *)((long)param_1 + lVar3 + 0x28);
            lVar3 = lVar3 + 1;
          } while (iVar1 != lVar3);
        }
      }
      iVar2 = FUN_00409710(*param_1,param_2,param_2,iVar1);
      if (iVar2 < 1) {
        FUN_004227b0(param_2,(long)iVar1);
        return 0;
      }
    }
    return 1;
  }
  return 0;
}


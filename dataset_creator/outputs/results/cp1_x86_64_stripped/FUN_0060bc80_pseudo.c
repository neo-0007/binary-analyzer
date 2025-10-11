
bool FUN_0060bc80(long *param_1,long *param_2)

{
  bool bVar1;
  int iVar2;
  
  if (param_1 == (long *)0x0) {
    return true;
  }
  bVar1 = true;
  if (param_1 != param_2) {
    if ((((param_2 != (long *)0x0) && (iVar2 = FUN_0060bc40(), iVar2 == 0)) &&
        (iVar2 = FUN_0060bc40(param_2), iVar2 == 0)) &&
       (iVar2 = FUN_0060a460(*(undefined8 *)(*param_2 + 8),*(undefined8 *)(*param_1 + 8)),
       iVar2 != 0)) {
      iVar2 = FUN_0060a460(*(undefined8 *)(param_2[1] + 8),*(undefined8 *)(param_1[1] + 8));
      return iVar2 != 0;
    }
    bVar1 = false;
  }
  return bVar1;
}


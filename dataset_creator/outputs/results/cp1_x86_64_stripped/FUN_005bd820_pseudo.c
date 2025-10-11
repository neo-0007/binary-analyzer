
int FUN_005bd820(long *param_1,undefined1 *param_2)

{
  long lVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  int iVar5;
  
  lVar1 = *param_1;
  if (lVar1 == 0) {
    return -1;
  }
  uVar4 = FUN_004b7bb0(lVar1);
  if ((uVar4 & 7) == 0) {
    iVar5 = 1;
    if (param_2 == (undefined1 *)0x0) goto LAB_005bd85c;
    *param_2 = 0;
    param_2 = param_2 + 1;
    iVar3 = 1;
  }
  else {
    iVar5 = 0;
    iVar3 = 0;
    if (param_2 == (undefined1 *)0x0) goto LAB_005bd85c;
  }
  iVar5 = iVar3;
  FUN_004b87d0(lVar1,param_2);
LAB_005bd85c:
  iVar2 = FUN_004b7bb0(lVar1);
  iVar3 = iVar2 + 0xe;
  if (-1 < iVar2 + 7) {
    iVar3 = iVar2 + 7;
  }
  return (iVar3 >> 3) + iVar5;
}


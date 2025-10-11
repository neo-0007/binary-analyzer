
int FUN_005a99a0(undefined8 *param_1,undefined8 param_2,int param_3)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  undefined8 *puVar4;
  int iVar5;
  
  if (param_1 != (undefined8 *)0x0) {
    uVar1 = *param_1;
    iVar5 = -1;
    if (-1 < param_3) {
      iVar5 = param_3;
    }
    iVar2 = FUN_00436480(uVar1);
    iVar5 = iVar5 + 1;
    if (iVar5 < iVar2) {
      do {
        puVar4 = (undefined8 *)FUN_004364a0(uVar1,iVar5);
        iVar3 = FUN_00424ba0(*puVar4,param_2);
        if (iVar3 == 0) {
          return iVar5;
        }
        iVar5 = iVar5 + 1;
      } while (iVar2 != iVar5);
    }
  }
  return -1;
}


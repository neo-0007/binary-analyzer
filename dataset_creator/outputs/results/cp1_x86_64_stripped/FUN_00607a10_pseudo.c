
bool FUN_00607a10(int *param_1,long param_2,long param_3,undefined4 param_4)

{
  int iVar1;
  undefined8 uVar2;
  
  if ((param_2 != 0 && param_3 != 0) && (param_1 != (int *)0x0)) {
    if (*param_1 == 0) {
      iVar1 = FUN_006075c0(param_2,*(undefined8 *)(param_1 + 2),param_4,0);
      if (iVar1 != 0) {
        uVar2 = *(undefined8 *)(param_1 + 2);
LAB_00607a5d:
        iVar1 = FUN_006075c0(param_3,uVar2,param_4,0xff);
        return iVar1 != 0;
      }
    }
    else if (*param_1 == 1) {
      iVar1 = FUN_006075c0(param_2,**(undefined8 **)(param_1 + 2),param_4,0);
      if (iVar1 != 0) {
        uVar2 = *(undefined8 *)(*(long *)(param_1 + 2) + 8);
        goto LAB_00607a5d;
      }
    }
  }
  return false;
}



undefined8 FUN_0058f040(undefined8 param_1,undefined8 param_2,undefined4 param_3,long *param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  
  uVar4 = FUN_004ee2d0();
  lVar5 = FUN_0058ee70(uVar4);
  iVar1 = FUN_0040ac10(param_2);
  if ((lVar5 != 0) && (-1 < iVar1)) {
    iVar2 = FUN_004a1f30(0,(int)lVar5 + 1,2);
    iVar1 = FUN_004a1f30(0,iVar1,4);
    iVar3 = FUN_004a1f30(0,param_3,4);
    iVar1 = FUN_004a1f30(1,iVar1 + iVar2 * 2 + iVar3,0x10);
    *param_4 = (long)iVar1;
    return 1;
  }
  return 0;
}


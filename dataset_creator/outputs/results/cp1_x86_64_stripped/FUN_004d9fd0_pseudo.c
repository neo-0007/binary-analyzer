
undefined8
FUN_004d9fd0(long param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,ulong param_5)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  
  lVar1 = *(long *)(param_1 + 0x98);
  uVar3 = FUN_00410c70(*(undefined8 *)(param_1 + 0x88));
  if (*(long *)(lVar1 + 0x18) != 0) {
    iVar2 = FUN_0040ac10();
    if ((long)iVar2 != param_5) {
      return 0;
    }
  }
  uVar3 = FUN_004da940(0,param_4,param_5 & 0xffffffff,param_2,param_3,uVar3);
  return uVar3;
}


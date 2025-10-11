
undefined4 FUN_004ee2f0(long *param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  
  if (((((((long *)param_1[3] != (long *)0x0) && (*(long *)param_1[3] != 0)) &&
        (lVar2 = FUN_004ef7e0(), lVar2 != 0)) &&
       ((iVar1 = FUN_004b7ba0(lVar2), iVar1 == 0 &&
        ((*(code **)(*(long *)param_1[3] + 0x140) == (code *)0x0 ||
         (iVar1 = (**(code **)(*(long *)param_1[3] + 0x140))(param_1,param_2), iVar1 != 0)))))) &&
      ((*(code **)(*param_1 + 0x30) == (code *)0x0 ||
       (iVar1 = (**(code **)(*param_1 + 0x30))(param_1,param_2), iVar1 != 0)))) &&
     (lVar3 = FUN_004b82e0(param_2), lVar3 != 0)) {
    FUN_004b7e70(lVar3,4);
    iVar1 = FUN_004b7380(lVar2);
    lVar2 = FUN_004b8240(lVar3,iVar1 + 2);
    if (lVar2 != 0) {
      FUN_004b7f20(param_1[5]);
      param_1[0xd] = param_1[0xd] + 1;
      param_1[5] = lVar3;
      return 1;
    }
    FUN_004b7f20(lVar3);
    return 0;
  }
  return 0;
}


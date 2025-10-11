
undefined4 FUN_0053a7f0(long *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if ((*(code **)(*param_1 + 0x78) != (code *)0x0) &&
     (iVar1 = (**(code **)(*param_1 + 0x78))(param_1[1]), iVar1 == 0)) {
    return 0;
  }
  uVar2 = FUN_005398e0(param_1);
  if (*(code **)(*param_1 + 0x80) != (code *)0x0) {
    (**(code **)(*param_1 + 0x80))(param_1[1]);
  }
  return uVar2;
}


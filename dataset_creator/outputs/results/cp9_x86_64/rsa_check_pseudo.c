
bool rsa_check(undefined8 param_1,long param_2)

{
  int iVar1;
  
  iVar1 = RSA_test_flags(param_1,0xf000);
  if (iVar1 == 0) {
    return *(int *)(*(long *)(param_2 + 8) + 0x18) == 6;
  }
  if (iVar1 == 0x1000) {
    return *(int *)(*(long *)(param_2 + 8) + 0x18) == 0x390;
  }
  return false;
}


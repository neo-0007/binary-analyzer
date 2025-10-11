
undefined4 EVP_RAND_get_strength(long *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if ((*(code **)(*param_1 + 0x78) != (code *)0x0) &&
     (iVar1 = (**(code **)(*param_1 + 0x78))(param_1[1]), iVar1 == 0)) {
    return 0;
  }
  uVar2 = evp_rand_strength_locked(param_1);
  if (*(code **)(*param_1 + 0x80) != (code *)0x0) {
    (**(code **)(*param_1 + 0x80))(param_1[1]);
  }
  return uVar2;
}


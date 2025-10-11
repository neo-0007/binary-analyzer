
undefined8 siphash_init(long param_1,long param_2,long param_3,long param_4)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  
  iVar2 = ossl_prov_is_running();
  if ((iVar2 != 0) &&
     ((param_4 == 0 || (iVar2 = siphash_set_params_part_0(param_1,param_4), iVar2 != 0)))) {
    if (param_2 == 0) {
      return 1;
    }
    if (param_3 == 0x10) {
      iVar2 = *(int *)(param_1 + 0x4c);
      if (*(int *)(param_1 + 0x4c) == 0) {
        iVar2 = 4;
      }
      iVar1 = *(int *)(param_1 + 0x48);
      if (*(int *)(param_1 + 0x48) == 0) {
        iVar1 = 2;
      }
      uVar3 = SipHash_Init(param_1 + 8,param_2,iVar1,iVar2);
      return uVar3;
    }
  }
  return 0;
}


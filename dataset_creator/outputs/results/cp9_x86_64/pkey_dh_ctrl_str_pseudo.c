
undefined8 pkey_dh_ctrl_str(long param_1,char *param_2,char *param_3)

{
  int iVar1;
  uint uVar2;
  ulong uVar3;
  undefined8 uVar4;
  longlong lVar5;
  long lVar6;
  
  iVar1 = strcmp(param_2,"dh_paramgen_prime_len");
  if (iVar1 == 0) {
    uVar3 = strtoll(param_3,(char **)0x0,10);
    uVar4 = EVP_PKEY_CTX_set_dh_paramgen_prime_len(param_1,uVar3 & 0xffffffff);
    return uVar4;
  }
  iVar1 = strcmp(param_2,"dh_rfc5114");
  if (iVar1 == 0) {
    lVar6 = *(long *)(param_1 + 0x98);
    lVar5 = strtoll(param_3,(char **)0x0,10);
    uVar2 = (uint)lVar5;
    if (uVar2 < 4) {
LAB_004c9a18:
      *(uint *)(lVar6 + 0x20) = uVar2;
      return 1;
    }
  }
  else {
    iVar1 = strcmp(param_2,"dh_param");
    if (iVar1 == 0) {
      lVar6 = *(long *)(param_1 + 0x98);
      uVar2 = OBJ_sn2nid(param_3);
      if (uVar2 != 0) goto LAB_004c9a18;
      ERR_new();
      ERR_set_debug("../crypto/dh/dh_pmeth.c",0xf7,"pkey_dh_ctrl_str");
      ERR_set_error(5,0x6e,0);
    }
    else {
      iVar1 = strcmp(param_2,"dh_paramgen_generator");
      if (iVar1 == 0) {
        uVar3 = strtoll(param_3,(char **)0x0,10);
        uVar4 = EVP_PKEY_CTX_set_dh_paramgen_generator(param_1,uVar3 & 0xffffffff);
        return uVar4;
      }
      iVar1 = strcmp(param_2,"dh_paramgen_subprime_len");
      if (iVar1 == 0) {
        uVar3 = strtoll(param_3,(char **)0x0,10);
        uVar4 = EVP_PKEY_CTX_set_dh_paramgen_subprime_len(param_1,uVar3 & 0xffffffff);
        return uVar4;
      }
      iVar1 = strcmp(param_2,"dh_paramgen_type");
      if (iVar1 == 0) {
        uVar3 = strtoll(param_3,(char **)0x0,10);
        uVar4 = EVP_PKEY_CTX_set_dh_paramgen_type(param_1,uVar3 & 0xffffffff);
        return uVar4;
      }
      iVar1 = strcmp(param_2,"dh_pad");
      if (iVar1 == 0) {
        uVar3 = strtoll(param_3,(char **)0x0,10);
        uVar4 = EVP_PKEY_CTX_set_dh_pad(param_1,uVar3 & 0xffffffff);
        return uVar4;
      }
    }
  }
  return 0xfffffffe;
}


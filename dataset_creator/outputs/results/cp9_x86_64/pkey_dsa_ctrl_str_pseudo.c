
ulong pkey_dsa_ctrl_str(undefined8 param_1,char *param_2,char *param_3)

{
  int iVar1;
  EVP_MD *pEVar2;
  ulong uVar3;
  uint uVar4;
  
  iVar1 = strcmp(param_2,"dsa_paramgen_bits");
  if (iVar1 == 0) {
    uVar3 = strtoll(param_3,(char **)0x0,10);
    uVar3 = EVP_PKEY_CTX_set_dsa_paramgen_bits(param_1,uVar3 & 0xffffffff);
    return uVar3;
  }
  iVar1 = strcmp(param_2,"dsa_paramgen_q_bits");
  if (iVar1 != 0) {
    iVar1 = strcmp(param_2,"dsa_paramgen_md");
    if (iVar1 == 0) {
      pEVar2 = EVP_get_digestbyname(param_3);
      if (pEVar2 != (EVP_MD *)0x0) {
        uVar3 = EVP_PKEY_CTX_set_dsa_paramgen_md(param_1);
        return uVar3;
      }
      ERR_new();
      ERR_set_debug("../crypto/dsa/dsa_pmeth.c",0xca,"pkey_dsa_ctrl_str");
      ERR_set_error(10,0x6a,0);
      uVar4 = 0;
    }
    else {
      uVar4 = 0xfffffffe;
    }
    return (ulong)uVar4;
  }
  uVar3 = strtoll(param_3,(char **)0x0,10);
  uVar3 = EVP_PKEY_CTX_set_dsa_paramgen_q_bits(param_1,uVar3 & 0xffffffff);
  return uVar3;
}


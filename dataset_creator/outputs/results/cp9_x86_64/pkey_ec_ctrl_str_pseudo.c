
ulong pkey_ec_ctrl_str(undefined8 param_1,char *param_2,char *param_3)

{
  int iVar1;
  ulong uVar2;
  EVP_MD *pEVar3;
  uint uVar4;
  
  iVar1 = strcmp(param_2,"ec_paramgen_curve");
  if (iVar1 == 0) {
    iVar1 = EC_curve_nist2nid(param_3);
    if (iVar1 == 0) {
      iVar1 = OBJ_sn2nid(param_3);
      if (iVar1 == 0) {
        iVar1 = OBJ_ln2nid(param_3);
        if (iVar1 == 0) {
          ERR_new();
          ERR_set_debug("../crypto/ec/ec_pmeth.c",0x193,"pkey_ec_ctrl_str");
          ERR_set_error(0x10,0x8d,0);
          uVar4 = 0;
          goto LAB_004e8826;
        }
      }
    }
    uVar2 = EVP_PKEY_CTX_set_ec_paramgen_curve_nid(param_1,iVar1);
    return uVar2;
  }
  iVar1 = strcmp(param_2,"ec_param_enc");
  if (iVar1 == 0) {
    iVar1 = strcmp(param_3,"explicit");
    if (iVar1 == 0) {
LAB_004e8713:
      uVar2 = EVP_PKEY_CTX_set_ec_param_enc(param_1,iVar1);
      return uVar2;
    }
    iVar1 = strcmp(param_3,"named_curve");
    if (iVar1 == 0) {
      iVar1 = 1;
      goto LAB_004e8713;
    }
  }
  else {
    iVar1 = strcmp(param_2,"ecdh_kdf_md");
    if (iVar1 == 0) {
      pEVar3 = EVP_get_digestbyname(param_3);
      if (pEVar3 != (EVP_MD *)0x0) {
        uVar2 = EVP_PKEY_CTX_set_ecdh_kdf_md(param_1);
        return uVar2;
      }
      ERR_new();
      ERR_set_debug("../crypto/ec/ec_pmeth.c",0x1a3,"pkey_ec_ctrl_str");
      ERR_set_error(0x10,0x97,0);
      uVar4 = 0;
      goto LAB_004e8826;
    }
    iVar1 = strcmp(param_2,"ecdh_cofactor_mode");
    if (iVar1 == 0) {
      uVar2 = strtoll(param_3,(char **)0x0,10);
      uVar2 = EVP_PKEY_CTX_set_ecdh_cofactor_mode(param_1,uVar2 & 0xffffffff);
      return uVar2;
    }
  }
  uVar4 = 0xfffffffe;
LAB_004e8826:
  return (ulong)uVar4;
}


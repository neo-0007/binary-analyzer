
undefined4
pkey_set_type(int *param_1,ENGINE *param_2,int param_3,char *param_4,int param_5,long param_6)

{
  int iVar1;
  EVP_PKEY_ASN1_METHOD *pEVar2;
  ENGINE **pe;
  bool bVar3;
  ENGINE *local_40 [2];
  
  local_40[0] = param_2;
  if (param_2 == (ENGINE *)0x0) {
    bVar3 = param_6 == 0;
    if ((param_3 != 0) && (!bVar3)) goto LAB_00530840;
    pe = local_40;
  }
  else {
    if (param_6 != 0) {
LAB_00530840:
      ERR_new();
      ERR_set_debug("../crypto/evp/p_lib.c",0x5cb,"pkey_set_type");
      ERR_set_error(6,0xc0103,0);
      return 0;
    }
    pe = (ENGINE **)0x0;
    bVar3 = true;
  }
  if (param_1 != (int *)0x0) {
    if ((*(long *)(param_1 + 8) == 0) && (*(long *)(param_1 + 0x1a) == 0)) {
      if (((*param_1 != 0) && (param_1[1] == param_3)) && (*(long *)(param_1 + 2) != 0)) {
        return 1;
      }
    }
    else {
      evp_keymgmt_util_clear_operation_cache(param_1,1);
      evp_pkey_free_legacy(param_1);
      if (*(long *)(param_1 + 0x18) != 0) {
        evp_keymgmt_freedata(*(long *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x1a));
        EVP_KEYMGMT_free(*(undefined8 *)(param_1 + 0x18));
        param_1[0x18] = 0;
        param_1[0x19] = 0;
        param_1[0x1a] = 0;
        param_1[0x1b] = 0;
      }
      *param_1 = 0;
    }
    ENGINE_finish(*(ENGINE **)(param_1 + 4));
    param_1[4] = 0;
    param_1[5] = 0;
    ENGINE_finish(*(ENGINE **)(param_1 + 6));
    param_1[6] = 0;
    param_1[7] = 0;
  }
  if (param_4 == (char *)0x0) {
    pEVar2 = (EVP_PKEY_ASN1_METHOD *)0x0;
    if (param_3 != 0) {
      pEVar2 = EVP_PKEY_asn1_find(pe,param_3);
      bVar3 = (bool)(bVar3 & pEVar2 == (EVP_PKEY_ASN1_METHOD *)0x0);
    }
  }
  else {
    pEVar2 = EVP_PKEY_asn1_find_str(pe,param_4,param_5);
    bVar3 = (bool)(bVar3 & pEVar2 == (EVP_PKEY_ASN1_METHOD *)0x0);
  }
  if ((param_1 == (int *)0x0) && (pe != (ENGINE **)0x0)) {
    ENGINE_finish(local_40[0]);
    if (bVar3) {
LAB_00530a53:
      ERR_new();
      ERR_set_debug("../crypto/evp/p_lib.c",0x5fe,"pkey_set_type");
      ERR_set_error(6,0x9c,0);
      return 0;
    }
  }
  else {
    if (bVar3) goto LAB_00530a53;
    if (param_1 != (int *)0x0) {
      if (param_6 == 0) {
        param_1[0x18] = 0;
        param_1[0x19] = 0;
        param_1[1] = param_3;
        *param_1 = param_3;
        *(EVP_PKEY_ASN1_METHOD **)(param_1 + 2) = pEVar2;
      }
      else {
        iVar1 = EVP_KEYMGMT_up_ref(param_6);
        if (iVar1 == 0) {
          ERR_new();
          ERR_set_debug("../crypto/evp/p_lib.c",0x604,"pkey_set_type");
          ERR_set_error(6,0xc0103,0);
          return 0;
        }
        *(long *)(param_1 + 0x18) = param_6;
        param_1[1] = param_3;
        *param_1 = param_3;
      }
      if (pEVar2 == (EVP_PKEY_ASN1_METHOD *)0x0) {
        *param_1 = -1;
      }
      else if (param_3 == 0) {
        *param_1 = *(int *)pEVar2;
      }
      if (((pe == (ENGINE **)0x0) && (local_40[0] != (ENGINE *)0x0)) &&
         (iVar1 = ENGINE_init(local_40[0]), iVar1 == 0)) {
        ERR_new();
        ERR_set_debug("../crypto/evp/p_lib.c",0x626,"pkey_set_type");
        ERR_set_error(6,0x86,0);
        return 0;
      }
      *(ENGINE **)(param_1 + 4) = local_40[0];
    }
  }
  return 1;
}


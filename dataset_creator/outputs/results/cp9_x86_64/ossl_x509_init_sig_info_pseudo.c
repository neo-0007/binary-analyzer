
undefined4 ossl_x509_init_sig_info(long param_1)

{
  int iVar1;
  uint uVar2;
  char *name;
  EVP_MD *pEVar3;
  EVP_PKEY_ASN1_METHOD *pEVar4;
  undefined4 uVar5;
  long in_FS_OFFSET;
  int local_28;
  int local_24;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined8 *)(param_1 + 0xb0) = 0;
  *(undefined8 *)(param_1 + 0xb8) = 0xffffffff;
  iVar1 = OBJ_obj2nid(*(ASN1_OBJECT **)(param_1 + 0x88));
  iVar1 = OBJ_find_sigid_algs(iVar1,&local_24,&local_28);
  if ((iVar1 == 0) || (local_28 == 0)) {
    ERR_new();
    uVar5 = 0;
    ERR_set_debug("../crypto/x509/x509_set.c",0xd1,"x509_sig_info_init");
    ERR_set_error(0xb,0x90,0);
    goto LAB_0058ec60;
  }
  *(int *)(param_1 + 0xb4) = local_28;
  *(int *)(param_1 + 0xb0) = local_24;
  if (local_24 == 0x40) {
    *(undefined4 *)(param_1 + 0xb8) = 0x3f;
    uVar2 = *(uint *)(param_1 + 0xbc);
LAB_0058ed53:
    uVar2 = uVar2 | 2;
  }
  else {
    if (local_24 < 0x41) {
      if (local_24 == 0) {
        pEVar4 = EVP_PKEY_asn1_find((ENGINE **)0x0,local_28);
        if ((pEVar4 != (EVP_PKEY_ASN1_METHOD *)0x0) && (*(code **)(pEVar4 + 0xd8) != (code *)0x0)) {
          iVar1 = (**(code **)(pEVar4 + 0xd8))(param_1 + 0xb0,param_1 + 0x88,param_1 + 0x98);
          if (iVar1 != 0) goto LAB_0058ed33;
        }
        ERR_new();
        ERR_set_debug("../crypto/x509/x509_set.c",0xdd,"x509_sig_info_init");
        ERR_set_error(0xb,0x8e,0);
        uVar5 = 0;
        goto LAB_0058ec60;
      }
      if (local_24 != 4) goto LAB_0058ec8e;
      uVar5 = 0x27;
    }
    else {
      uVar5 = 0x69;
      if (local_24 != 0x329) {
LAB_0058ec8e:
        name = OBJ_nid2sn(local_24);
        pEVar3 = EVP_get_digestbyname(name);
        if (pEVar3 == (EVP_MD *)0x0) {
          ERR_new(0);
          uVar5 = 0;
          ERR_set_debug("../crypto/x509/x509_set.c",0xff,"x509_sig_info_init");
          ERR_set_error(0xb,0x8d,0);
          goto LAB_0058ec60;
        }
        iVar1 = EVP_MD_get_size();
        *(int *)(param_1 + 0xb8) = iVar1 << 2;
LAB_0058ed33:
        uVar2 = *(uint *)(param_1 + 0xbc);
        if ((local_24 == 0x40) || (local_24 - 0x2a0U < 3)) goto LAB_0058ed53;
        goto LAB_0058ec51;
      }
    }
    *(undefined4 *)(param_1 + 0xb8) = uVar5;
    uVar2 = *(uint *)(param_1 + 0xbc);
  }
LAB_0058ec51:
  uVar5 = 1;
  *(uint *)(param_1 + 0xbc) = uVar2 | 1;
LAB_0058ec60:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}


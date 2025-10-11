
uint SCT_validate(int *param_1,undefined8 *param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  EVP_PKEY *pEVar4;
  int iVar5;
  uint uVar6;
  long in_FS_OFFSET;
  X509_PUBKEY *local_40;
  X509_PUBKEY *local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_40 = (X509_PUBKEY *)0x0;
  local_38 = (X509_PUBKEY *)0x0;
  if (*param_1 != 0) {
    param_1[0x18] = 5;
    uVar6 = 0;
    goto LAB_00620b27;
  }
  lVar2 = CTLOG_STORE_get0_log_by_id
                    (param_2[2],*(undefined8 *)(param_1 + 6),*(undefined8 *)(param_1 + 8));
  uVar6 = 0;
  if (lVar2 == 0) {
    param_1[0x18] = 1;
    goto LAB_00620b27;
  }
  lVar3 = SCT_CTX_new(param_2[4],param_2[5]);
  if (lVar3 == 0) {
LAB_00620b9f:
    uVar6 = 0xffffffff;
  }
  else {
    pEVar4 = (EVP_PKEY *)CTLOG_get0_public_key(lVar2);
    iVar1 = X509_PUBKEY_set(&local_38,pEVar4);
    if ((iVar1 != 1) || (iVar1 = SCT_CTX_set1_pubkey(lVar3,local_38), iVar1 != 1))
    goto LAB_00620b9f;
    iVar1 = SCT_get_log_entry_type(param_1);
    if (iVar1 == 1) {
      if (param_2[1] != 0) {
        pEVar4 = (EVP_PKEY *)X509_get0_pubkey();
        iVar1 = X509_PUBKEY_set(&local_40,pEVar4);
        if ((iVar1 != 1) || (iVar1 = SCT_CTX_set1_issuer_pubkey(lVar3,local_40), iVar1 != 1))
        goto LAB_00620b9f;
        goto LAB_00620bef;
      }
LAB_00620c0e:
      iVar5 = 4;
    }
    else {
LAB_00620bef:
      SCT_CTX_set_time(lVar3,param_2[3]);
      iVar1 = SCT_CTX_set1_cert(lVar3,*param_2,0);
      if (iVar1 != 1) goto LAB_00620c0e;
      iVar1 = SCT_CTX_verify(lVar3,param_1);
      iVar5 = (iVar1 != 1) + 2;
      uVar6 = (uint)(iVar1 == 1);
    }
    param_1[0x18] = iVar5;
  }
  X509_PUBKEY_free(local_40);
  X509_PUBKEY_free(local_38);
  SCT_CTX_free(lVar3);
LAB_00620b27:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail_local();
  }
  return uVar6;
}


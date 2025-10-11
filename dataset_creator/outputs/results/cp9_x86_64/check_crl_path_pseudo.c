
uint check_crl_path(undefined8 *param_1,X509 *param_2)

{
  long lVar1;
  undefined8 uVar2;
  int iVar3;
  uint uVar4;
  X509 *a;
  X509 *b;
  long lVar5;
  undefined8 *puVar6;
  long in_FS_OFFSET;
  undefined1 auStack_148 [280];
  long local_30;
  
  uVar4 = 0;
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  lVar1 = param_1[0x1b];
  puVar6 = (undefined8 *)auStack_148;
  for (lVar5 = 0x22; lVar5 != 0; lVar5 = lVar5 + -1) {
    *puVar6 = 0;
    puVar6 = puVar6 + 1;
  }
  if (lVar1 == 0) {
    iVar3 = X509_STORE_CTX_init((X509_STORE_CTX *)auStack_148,(X509_STORE *)*param_1,param_2,
                                (stack_st_X509 *)param_1[2]);
    if (iVar3 == 0) {
      uVar4 = 0xffffffff;
    }
    else {
      auStack_148._24_8_ = param_1[3];
      X509_STORE_CTX_set0_param((X509_STORE_CTX *)auStack_148,(X509_VERIFY_PARAM *)param_1[4]);
      auStack_148._56_8_ = param_1[7];
      auStack_148._216_8_ = param_1;
      uVar4 = X509_verify_cert((X509_STORE_CTX *)auStack_148);
      if (0 < (int)uVar4) {
        uVar2 = param_1[0x13];
        iVar3 = OPENSSL_sk_num(uVar2);
        a = (X509 *)OPENSSL_sk_value(uVar2,iVar3 + -1);
        iVar3 = OPENSSL_sk_num(auStack_148._152_8_);
        b = (X509 *)OPENSSL_sk_value(auStack_148._152_8_,iVar3 + -1);
        iVar3 = X509_cmp(a,b);
        uVar4 = (uint)(iVar3 == 0);
      }
      X509_STORE_CTX_cleanup((X509_STORE_CTX *)auStack_148);
    }
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}


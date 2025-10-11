
X509_OBJECT * X509_OBJECT_retrieve_match(stack_st_X509_OBJECT *h,X509_OBJECT *x)

{
  int iVar1;
  int iVar2;
  int iVar3;
  X509_OBJECT *pXVar4;
  long in_FS_OFFSET;
  X509_OBJECT *local_50;
  X509_OBJECT *local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_50 = x;
  iVar1 = OPENSSL_sk_find();
  if (-1 < iVar1) {
    if (1 < x->type - 1U) {
      pXVar4 = (X509_OBJECT *)OPENSSL_sk_value(h,iVar1);
      goto LAB_0058d6c0;
    }
    iVar2 = OPENSSL_sk_num(h);
    if (iVar1 < iVar2) {
      do {
        local_48 = (X509_OBJECT *)OPENSSL_sk_value(h,iVar1);
        iVar3 = x509_object_cmp(&local_48,&local_50);
        pXVar4 = local_48;
        if (iVar3 != 0) break;
        if (local_50->type == 1) {
          iVar3 = X509_cmp((local_48->data).x509,(local_50->data).x509);
        }
        else {
          if (local_50->type != 2) goto LAB_0058d6c0;
          iVar3 = X509_CRL_match((local_48->data).crl,(local_50->data).crl);
        }
        if (iVar3 == 0) goto LAB_0058d6c0;
        iVar1 = iVar1 + 1;
      } while (iVar2 != iVar1);
    }
  }
  pXVar4 = (X509_OBJECT *)0x0;
LAB_0058d6c0:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail_local();
  }
  return pXVar4;
}


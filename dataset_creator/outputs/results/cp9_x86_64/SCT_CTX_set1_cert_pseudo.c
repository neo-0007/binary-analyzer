
undefined8 SCT_CTX_set1_cert(long param_1,X509 *param_2,X509 *param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined8 uVar6;
  X509 *x;
  X509_EXTENSION *pXVar7;
  X509_NAME *pXVar8;
  X509_EXTENSION *ex;
  ASN1_OCTET_STRING *data;
  long lVar9;
  long lVar10;
  long in_FS_OFFSET;
  uchar *local_50;
  void *local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_50 = (uchar *)0x0;
  local_48 = (void *)0x0;
  uVar1 = X509_get_ext_by_NID(param_2,0x3b8,-1);
  if ((int)uVar1 < 0) {
    if (uVar1 != 0xffffffff) goto LAB_006210f3;
    if (param_3 == (X509 *)0x0) {
      iVar3 = i2d_X509(param_2,&local_50);
      lVar10 = (long)iVar3;
      if (iVar3 < 0) goto LAB_00621083;
      goto LAB_006210f6;
    }
LAB_00621083:
    x = (X509 *)0x0;
  }
  else {
    iVar3 = X509_get_ext_by_NID(param_2,0x3b8,uVar1);
    if (-1 < iVar3) goto LAB_00621083;
LAB_006210f3:
    lVar10 = 0;
LAB_006210f6:
    uVar2 = X509_get_ext_by_NID(param_2,0x3b7,-1);
    if (-1 < (int)uVar2) {
      uVar4 = X509_get_ext_by_NID(param_2,0x3b7,uVar2);
      uVar4 = uVar1 & uVar4;
      uVar1 = uVar2;
      if ((int)uVar4 < 0) goto LAB_006211a0;
      goto LAB_00621083;
    }
    if ((uVar2 != 0xffffffff) || ((int)uVar1 < 0)) {
      lVar9 = 0;
      x = (X509 *)0x0;
LAB_00621125:
      X509_free(x);
      CRYPTO_free(*(void **)(param_1 + 0x28));
      *(long *)(param_1 + 0x30) = lVar10;
      *(uchar **)(param_1 + 0x28) = local_50;
      CRYPTO_free(*(void **)(param_1 + 0x38));
      *(long *)(param_1 + 0x40) = lVar9;
      *(void **)(param_1 + 0x38) = local_48;
      uVar6 = 1;
      goto LAB_006210bb;
    }
LAB_006211a0:
    x = X509_dup(param_2);
    if (x == (X509 *)0x0) goto LAB_00621083;
    pXVar7 = X509_delete_ext(x,uVar1);
    X509_EXTENSION_free(pXVar7);
    if (param_3 == (X509 *)0x0) {
LAB_00621237:
      iVar3 = i2d_re_X509_tbs(x,&local_48);
      lVar9 = (long)iVar3;
      if (0 < iVar3) goto LAB_00621125;
    }
    else {
      uVar1 = X509_get_ext_by_NID(param_3,0x5a,-1);
      if ((int)uVar1 < 0) {
        iVar3 = X509_get_ext_by_NID(x,0x5a,-1);
        if (iVar3 < 0) {
          if ((iVar3 < -1) || (uVar1 != 0xffffffff)) goto LAB_00621086;
          pXVar8 = X509_get_issuer_name(param_3);
          iVar3 = X509_set_issuer_name(x,pXVar8);
joined_r0x0062133b:
          if (iVar3 != 0) goto LAB_00621237;
        }
        else {
          uVar2 = X509_get_ext_by_NID(x,0x5a,iVar3);
          uVar2 = ~uVar1 & uVar2;
joined_r0x006212d0:
          if ((int)uVar2 < 0) {
            pXVar8 = X509_get_issuer_name(param_3);
            iVar5 = X509_set_issuer_name(x,pXVar8);
            if (iVar5 != 0) {
              pXVar7 = X509_get_ext(param_3,uVar1);
              ex = X509_get_ext(x,iVar3);
              if (((pXVar7 != (X509_EXTENSION *)0x0) && (ex != (X509_EXTENSION *)0x0)) &&
                 (data = X509_EXTENSION_get_data(pXVar7), data != (ASN1_OCTET_STRING *)0x0)) {
                iVar3 = X509_EXTENSION_set_data(ex,data);
                goto joined_r0x0062133b;
              }
            }
          }
        }
      }
      else {
        uVar2 = X509_get_ext_by_NID(param_3,0x5a,uVar1);
        iVar3 = X509_get_ext_by_NID(x,0x5a,-1);
        if ((-1 < iVar3) && (uVar4 = X509_get_ext_by_NID(x,0x5a,iVar3), (int)(~uVar1 & uVar4) < 0))
        goto joined_r0x006212d0;
      }
    }
  }
LAB_00621086:
  CRYPTO_free(local_50);
  CRYPTO_free(local_48);
  X509_free(x);
  uVar6 = 0;
LAB_006210bb:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail_local();
  }
  return uVar6;
}


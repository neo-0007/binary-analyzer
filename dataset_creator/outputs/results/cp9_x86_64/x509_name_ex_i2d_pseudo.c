
ulong x509_name_ex_i2d(long *param_1,long *param_2)

{
  undefined8 *puVar1;
  ulong uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  undefined4 extraout_var;
  size_t __n;
  size_t len;
  long in_FS_OFFSET;
  ASN1_VALUE *local_50;
  uchar *local_48;
  long local_40;
  
  puVar1 = (undefined8 *)*param_1;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(int *)(puVar1 + 1) == 0) {
LAB_0059a300:
    uVar2 = *(ulong *)puVar1[2];
    len = uVar2 & 0xffffffff;
    if (param_2 != (long *)0x0) {
      __n = (size_t)(int)uVar2;
      memcpy((void *)*param_2,(void *)((ulong *)puVar1[2])[1],__n);
      *param_2 = *param_2 + __n;
    }
  }
  else {
    local_50 = (ASN1_VALUE *)0x0;
    local_50 = (ASN1_VALUE *)OPENSSL_sk_new_null();
    if (local_50 != (ASN1_VALUE *)0x0) {
      iVar4 = -1;
      lVar7 = 0;
      for (iVar5 = 0; iVar3 = OPENSSL_sk_num(*puVar1), iVar5 < iVar3; iVar5 = iVar5 + 1) {
        lVar6 = OPENSSL_sk_value(*puVar1,iVar5);
        if (*(int *)(lVar6 + 0x10) != iVar4) {
          lVar7 = OPENSSL_sk_new_null();
          if (lVar7 == 0) goto LAB_0059a4a5;
          iVar4 = OPENSSL_sk_push(local_50,lVar7);
          if (iVar4 == 0) {
            OPENSSL_sk_free(lVar7);
            goto LAB_0059a4a5;
          }
          iVar4 = *(int *)(lVar6 + 0x10);
        }
        iVar3 = OPENSSL_sk_push(lVar7);
        if (iVar3 == 0) goto LAB_0059a4a5;
      }
      iVar4 = ASN1_item_ex_i2d(&local_50,(uchar **)0x0,(ASN1_ITEM *)local_it_5,-1,-1);
      len = (size_t)iVar4;
      iVar5 = BUF_MEM_grow((BUF_MEM *)puVar1[2],len);
      if (CONCAT44(extraout_var,iVar5) != 0) {
        local_48 = *(uchar **)(puVar1[2] + 8);
        ASN1_item_ex_i2d(&local_50,&local_48,(ASN1_ITEM *)local_it_5,-1,-1);
        OPENSSL_sk_pop_free(local_50,local_sk_X509_NAME_ENTRY_free);
        *(undefined4 *)(puVar1 + 1) = 0;
        if (iVar4 < 0) goto LAB_0059a324;
        CRYPTO_free((void *)puVar1[3]);
        puVar1[3] = 0;
        iVar4 = OPENSSL_sk_num(*puVar1);
        if (iVar4 == 0) {
          *(undefined4 *)(puVar1 + 4) = 0;
        }
        else {
          iVar4 = x509_name_canon_part_0(puVar1);
          if (iVar4 == 0) {
            len = 0xffffffff;
            goto LAB_0059a324;
          }
        }
        goto LAB_0059a300;
      }
    }
LAB_0059a4a5:
    len = 0xffffffff;
    OPENSSL_sk_pop_free(local_50,local_sk_X509_NAME_ENTRY_free);
    ERR_new();
    ERR_set_debug("../crypto/x509/x_name.c",0x117,"x509_name_encode");
    ERR_set_error(0xd,0xc0100,0);
  }
LAB_0059a324:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail_local();
  }
  return len & 0xffffffff;
}



ulong OSSL_HTTP_REQ_CTX_nbio_d2i(long param_1,undefined8 *param_2,ASN1_ITEM *param_3)

{
  ulong uVar1;
  long len;
  ASN1_VALUE *pAVar2;
  long in_FS_OFFSET;
  uchar *puStack_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *param_2 = 0;
  uVar1 = OSSL_HTTP_REQ_CTX_nbio();
  if ((int)uVar1 == 1) {
    len = BIO_ctrl(*(BIO **)(param_1 + 0x58),3,0,&puStack_38);
    pAVar2 = ASN1_item_d2i((ASN1_VALUE **)0x0,&puStack_38,len,param_3);
    *param_2 = pAVar2;
    uVar1 = (ulong)(pAVar2 != (ASN1_VALUE *)0x0);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}


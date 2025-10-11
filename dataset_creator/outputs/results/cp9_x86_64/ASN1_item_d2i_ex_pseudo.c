
ASN1_VALUE *
ASN1_item_d2i_ex(ASN1_VALUE **param_1,undefined8 param_2,undefined8 param_3,ASN1_ITEM *param_4)

{
  int iVar1;
  ASN1_VALUE *pAVar2;
  long in_FS_OFFSET;
  ASN1_VALUE *local_50;
  undefined1 local_48;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_48 = 0;
  local_50 = (ASN1_VALUE *)0x0;
  if (param_1 == (ASN1_VALUE **)0x0) {
    param_1 = &local_50;
  }
  if (param_4 == (ASN1_ITEM *)0x0) {
    ERR_new();
    ERR_set_debug("../crypto/asn1/tasn_dec.c",0x73,"asn1_item_ex_d2i_intern");
    ERR_set_error(0xd,0xc0102,0);
    pAVar2 = (ASN1_VALUE *)0x0;
  }
  else {
    iVar1 = asn1_item_embed_d2i(param_1);
    if (iVar1 < 1) {
      ASN1_item_ex_free(param_1,param_4);
      pAVar2 = (ASN1_VALUE *)0x0;
    }
    else {
      pAVar2 = *param_1;
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return pAVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}


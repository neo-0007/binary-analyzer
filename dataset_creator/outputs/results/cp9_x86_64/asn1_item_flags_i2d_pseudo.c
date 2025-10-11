
int asn1_item_flags_i2d(ASN1_VALUE *param_1,uchar **param_2,ASN1_ITEM *param_3,int param_4)

{
  int num;
  uchar *puVar1;
  long in_FS_OFFSET;
  ASN1_VALUE *local_50;
  uchar *local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_50 = param_1;
  if ((param_2 == (uchar **)0x0) || (*param_2 != (uchar *)0x0)) {
    num = ASN1_item_ex_i2d(&local_50,param_2,param_3,-1,param_4);
  }
  else {
    num = ASN1_item_ex_i2d(&local_50,(uchar **)0x0,param_3,-1,param_4);
    if (0 < num) {
      puVar1 = (uchar *)CRYPTO_malloc(num,"../crypto/asn1/tasn_enc.c",0x41);
      if (puVar1 == (uchar *)0x0) {
        ERR_new();
        ERR_set_debug("../crypto/asn1/tasn_enc.c",0x42,"asn1_item_flags_i2d");
        num = -1;
        ERR_set_error(0xd,0xc0100,0);
      }
      else {
        local_48 = puVar1;
        ASN1_item_ex_i2d(&local_50,&local_48,param_3,-1,param_4);
        *param_2 = puVar1;
      }
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return num;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}


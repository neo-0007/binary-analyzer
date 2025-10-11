
int i2d_name_canon(undefined8 param_1,uchar **param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  long in_FS_OFFSET;
  ASN1_VALUE *local_38;
  long local_30;
  
  iVar3 = 0;
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  for (iVar4 = 0; iVar2 = OPENSSL_sk_num(param_1), iVar1 = iVar3, iVar4 < iVar2; iVar4 = iVar4 + 1)
  {
    local_38 = (ASN1_VALUE *)OPENSSL_sk_value(param_1,iVar4);
    iVar1 = ASN1_item_ex_i2d(&local_38,param_2,(ASN1_ITEM *)local_it_4,-1,-1);
    if (iVar1 < 0) break;
    iVar3 = iVar3 + iVar1;
  }
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail_local();
  }
  return iVar1;
}


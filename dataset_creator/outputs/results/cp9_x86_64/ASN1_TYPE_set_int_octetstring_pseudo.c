
int ASN1_TYPE_set_int_octetstring(ASN1_TYPE *a,long num,uchar *data,int len)

{
  long lVar1;
  long in_FS_OFFSET;
  ASN1_TYPE *local_40;
  undefined4 local_38 [2];
  int *local_30;
  int local_28 [2];
  uchar *local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_38[0] = (undefined4)num;
  local_30 = local_28;
  local_28[1] = 4;
  local_18 = 0;
  local_40 = a;
  local_28[0] = len;
  local_20 = data;
  lVar1 = ASN1_TYPE_pack_sequence(local_it_3,local_38,&local_40);
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return (int)(lVar1 != 0);
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}



int asn1_i2d_ex_primitive
              (ASN1_VALUE **param_1,uchar **param_2,ASN1_ITEM *param_3,int param_4,int param_5)

{
  bool bVar1;
  int length;
  int constructed;
  long in_FS_OFFSET;
  bool bVar2;
  int local_44;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_44 = (int)param_3->utype;
  length = asn1_ex_i2c(param_1,(uchar *)0x0,&local_44,param_3);
  bVar1 = 1 < local_44 - 0x10U;
  bVar2 = local_44 != -3;
  if (length == -1) {
    length = 0;
    goto LAB_004a2d33;
  }
  constructed = 0;
  if (length == -2) {
    constructed = 2;
    length = 0;
  }
  if (param_4 == -1) {
    param_4 = local_44;
  }
  if (param_2 == (uchar **)0x0) {
LAB_004a2d2f:
    if (!bVar1 || !bVar2) goto LAB_004a2d33;
  }
  else {
    if (bVar1 && bVar2) {
      ASN1_put_object(param_2,constructed,length,param_4,param_5);
    }
    asn1_ex_i2c(param_1,*param_2,&local_44,param_3);
    if (constructed == 0) {
      *param_2 = *param_2 + length;
      goto LAB_004a2d2f;
    }
    ASN1_put_eoc(param_2);
    if (!bVar1 || !bVar2) goto LAB_004a2d33;
  }
  length = ASN1_object_size(constructed,length,param_4);
LAB_004a2d33:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return length;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}


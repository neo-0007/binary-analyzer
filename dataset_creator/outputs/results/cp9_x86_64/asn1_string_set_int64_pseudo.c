
void asn1_string_set_int64(ASN1_STRING *param_1,ulong param_2,uint param_3)

{
  undefined1 *puVar1;
  int iVar2;
  undefined1 *data;
  long in_FS_OFFSET;
  undefined1 local_11;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  param_1->type = param_3;
  iVar2 = 8;
  puVar1 = &local_11;
  if ((long)param_2 < 0) {
    param_2 = -param_2;
    do {
      data = puVar1;
      *data = (char)param_2;
      iVar2 = iVar2 + -1;
      param_2 = param_2 >> 8;
      puVar1 = data + -1;
    } while (param_2 != 0);
    param_1->type = param_3 | 0x100;
  }
  else {
    do {
      data = puVar1;
      *data = (char)param_2;
      iVar2 = iVar2 + -1;
      param_2 = param_2 >> 8;
      puVar1 = data + -1;
    } while (param_2 != 0);
  }
  ASN1_STRING_set(param_1,data,8 - iVar2);
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}


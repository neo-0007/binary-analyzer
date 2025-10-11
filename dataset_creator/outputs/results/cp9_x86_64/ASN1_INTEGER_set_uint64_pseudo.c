
void ASN1_INTEGER_set_uint64(ASN1_STRING *param_1,ulong param_2)

{
  undefined1 *puVar1;
  undefined1 *data;
  int iVar2;
  long in_FS_OFFSET;
  undefined1 local_11;
  long local_10;
  
  iVar2 = 8;
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  param_1->type = 2;
  puVar1 = &local_11;
  do {
    data = puVar1;
    *data = (char)param_2;
    iVar2 = iVar2 + -1;
    param_2 = param_2 >> 8;
    puVar1 = data + -1;
  } while (param_2 != 0);
  ASN1_STRING_set(param_1,data,8 - iVar2);
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}


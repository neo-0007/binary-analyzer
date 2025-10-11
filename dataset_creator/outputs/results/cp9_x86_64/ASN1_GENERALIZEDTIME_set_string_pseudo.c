
int ASN1_GENERALIZEDTIME_set_string(ASN1_GENERALIZEDTIME *s,char *str)

{
  uint uVar1;
  int iVar2;
  size_t sVar3;
  long in_FS_OFFSET;
  ASN1_GENERALIZEDTIME local_38;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_38.type = 0x18;
  sVar3 = strlen(str);
  local_38.length = (int)sVar3;
  local_38.flags = 0;
  local_38.data = (uchar *)str;
  uVar1 = ASN1_GENERALIZEDTIME_check(&local_38);
  if ((uVar1 != 0) && (uVar1 = 1, s != (ASN1_GENERALIZEDTIME *)0x0)) {
    iVar2 = ASN1_STRING_copy(s,&local_38);
    uVar1 = (uint)(iVar2 != 0);
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}


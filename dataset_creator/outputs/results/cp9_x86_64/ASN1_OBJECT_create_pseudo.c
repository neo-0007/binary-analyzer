
ASN1_OBJECT * ASN1_OBJECT_create(int nid,uchar *data,int len,char *sn,char *ln)

{
  ASN1_OBJECT *pAVar1;
  long in_FS_OFFSET;
  ASN1_OBJECT local_38;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_38.flags = 0xd;
  local_38.sn = sn;
  local_38.ln = (char **)ln;
  local_38.nid = nid;
  local_38.length = len;
  local_38.data = data;
  pAVar1 = OBJ_dup(&local_38);
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return pAVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}


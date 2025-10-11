
int OBJ_sn2nid(char *s)

{
  int iVar1;
  long lVar2;
  uint *puVar3;
  long in_FS_OFFSET;
  char **local_60;
  undefined4 local_58 [2];
  char **local_50;
  char *local_48 [5];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_60 = local_48;
  OPENSSL_init_crypto(0x40,0);
  local_48[0] = s;
  if (added != 0) {
    local_58[0] = 1;
    local_50 = local_48;
    lVar2 = OPENSSL_LH_retrieve(added,local_58);
    if (lVar2 != 0) {
      iVar1 = *(int *)(*(long *)(lVar2 + 8) + 0x10);
      goto LAB_0042aae8;
    }
  }
  puVar3 = (uint *)OBJ_bsearch_(&local_60,sn_objs,0x4d7,4,sn_cmp_BSEARCH_CMP_FN);
  if (puVar3 == (uint *)0x0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(&DAT_008d53b0 + (ulong)*puVar3 * 0x28);
  }
LAB_0042aae8:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}


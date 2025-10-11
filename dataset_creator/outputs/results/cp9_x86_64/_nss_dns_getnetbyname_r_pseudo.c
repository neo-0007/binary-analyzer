
/* WARNING: Removing unreachable block (ram,0x007b9ee1) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

int _nss_dns_getnetbyname_r
              (undefined1 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
              undefined4 *param_5,undefined4 *param_6)

{
  int iVar1;
  long lVar2;
  undefined1 *puVar3;
  long in_FS_OFFSET;
  undefined1 auStack_478 [8];
  undefined1 auStack_470 [1024];
  undefined8 local_70;
  undefined1 auStack_68 [8];
  undefined1 *local_60;
  undefined1 *local_58;
  undefined4 *local_50;
  undefined1 *local_48;
  long local_40;
  
  puVar3 = auStack_68;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_70 = 0x7b9ecd;
  local_58 = param_1;
  local_50 = param_6;
  lVar2 = __resolv_context_get();
  if (lVar2 == 0) {
    iVar1 = -1;
    *param_5 = *(undefined4 *)(in_FS_OFFSET + -0x58);
    *local_50 = 0xffffffff;
  }
  else {
    local_60 = auStack_470;
    local_48 = local_60;
    iVar1 = __res_context_search(lVar2,local_58,1,0xc,local_60,0x400);
    puVar3 = auStack_478;
    if (iVar1 < 0) {
      *param_5 = *(undefined4 *)(in_FS_OFFSET + -0x58);
      if (local_48 != local_60) {
        free(local_48);
      }
      __resolv_context_put(lVar2);
      iVar1 = -(uint)(*(int *)(in_FS_OFFSET + -0x58) - 0x60U < 2 ||
                     *(int *)(in_FS_OFFSET + -0x58) == 0x6f);
    }
    else {
      local_58 = local_60;
      iVar1 = getanswer_r(local_48,iVar1,param_2,param_3,param_4,param_5);
      puVar3 = auStack_478;
      if (local_48 != local_58) {
        free(local_48);
      }
      __resolv_context_put(lVar2);
    }
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    *(undefined **)(puVar3 + -8) = &UNK_007ba023;
    __stack_chk_fail_local();
  }
  return iVar1;
}


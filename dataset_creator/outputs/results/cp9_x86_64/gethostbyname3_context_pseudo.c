
/* WARNING: Removing unreachable block (ram,0x007b88d6) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

int gethostbyname3_context
              (undefined8 param_1,char *param_2,int param_3,long param_4,undefined8 param_5,
              undefined8 param_6,undefined4 *param_7,int *param_8,undefined8 param_9,
              undefined8 param_10)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  undefined4 uVar4;
  undefined1 *puVar5;
  long in_FS_OFFSET;
  undefined1 auStack_8a8 [8];
  undefined1 auStack_8a0 [1024];
  undefined8 local_4a0;
  undefined1 auStack_498 [8];
  undefined1 *local_490;
  undefined1 *local_488;
  undefined8 local_480;
  undefined8 local_478;
  undefined8 local_470;
  undefined8 local_468;
  undefined4 local_45c;
  undefined1 *local_450;
  undefined1 local_448 [1032];
  long local_40;
  
  puVar5 = auStack_498;
  local_478 = param_9;
  local_480 = param_10;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_488 = (undefined1 *)CONCAT44(local_488._4_4_,*(undefined4 *)(in_FS_OFFSET + -0x58));
  local_470 = param_6;
  local_468 = param_5;
  if (param_3 == 2) {
    local_45c = 1;
    uVar4 = 4;
  }
  else {
    if (param_3 != 10) {
      *param_8 = 4;
      iVar2 = -1;
      *param_7 = 0x61;
      goto LAB_007b886c;
    }
    local_45c = 0x1c;
    uVar4 = 0x10;
  }
  *(ulong *)(param_4 + 0x10) = CONCAT44(uVar4,param_3);
  local_4a0 = 0x7b88c5;
  pcVar3 = strchr(param_2,0x2e);
  if (pcVar3 == (char *)0x0) {
    local_4a0 = 0x7b8a7f;
    pcVar3 = (char *)__res_context_hostalias(param_1,param_2,local_448,0x401);
    if (pcVar3 != (char *)0x0) {
      param_2 = pcVar3;
    }
  }
  local_490 = auStack_8a0;
  local_450 = local_490;
  iVar2 = __res_context_search(param_1,param_2,1,local_45c,local_490,0x400);
  puVar5 = auStack_8a8;
  if (iVar2 < 0) {
    iVar1 = *(int *)(in_FS_OFFSET + -0x58);
    if (iVar1 < 0x19) {
      if (0x16 < iVar1) {
        iVar2 = -1;
        *(undefined4 *)(in_FS_OFFSET + -0x18) = 0xffffffff;
        *param_8 = -1;
        goto LAB_007b8a53;
      }
      iVar2 = 0;
      if (iVar1 != 3) goto LAB_007b8a41;
      iVar2 = -2;
      *(undefined4 *)(in_FS_OFFSET + -0x18) = 2;
      *param_8 = 2;
LAB_007b8a1b:
      *param_7 = 0xb;
    }
    else {
      iVar2 = -(uint)(iVar1 - 0x6eU < 2);
LAB_007b8a41:
      iVar1 = *(int *)(in_FS_OFFSET + -0x18);
      *param_8 = iVar1;
      if (iVar1 == 2) goto LAB_007b8a1b;
LAB_007b8a53:
      *(undefined4 *)(in_FS_OFFSET + -0x58) = local_488._0_4_;
    }
    if (local_450 == local_490) goto LAB_007b886c;
  }
  else {
    local_488 = local_490;
    iVar2 = getanswer_r_constprop_0(param_1,local_450,iVar2,param_2,local_45c,param_4);
    puVar5 = auStack_8a8;
    if (local_450 == local_488) goto LAB_007b886c;
  }
  puVar5 = auStack_8a8;
  free(local_450);
LAB_007b886c:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  *(undefined **)(puVar5 + -8) = &UNK_007b8ab2;
  __stack_chk_fail_local();
}


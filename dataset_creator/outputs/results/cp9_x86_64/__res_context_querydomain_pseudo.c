
undefined8
__res_context_querydomain
          (long *param_1,char *param_2,char *param_3,undefined4 param_4,undefined4 param_5,
          undefined8 param_6,undefined4 param_7,undefined8 param_8,undefined8 param_9,
          undefined8 param_10,undefined8 param_11,undefined8 param_12)

{
  long lVar1;
  size_t sVar2;
  size_t sVar3;
  char *pcVar4;
  undefined8 uVar5;
  long in_FS_OFFSET;
  char local_448 [1032];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar1 = *param_1;
  sVar2 = strlen(param_2);
  if (param_3 == (char *)0x0) {
    if (0x3ff < sVar2 - 1) goto LAB_007bb420;
  }
  else {
    sVar3 = strlen(param_3);
    if (0x400 < sVar2 + 1 + sVar3) {
LAB_007bb420:
      *(undefined4 *)(lVar1 + 0x1f0) = 3;
      *(undefined4 *)(in_FS_OFFSET + -0x18) = 3;
      uVar5 = 0xffffffff;
      goto LAB_007bb3e6;
    }
    pcVar4 = stpcpy(local_448,param_2);
    *pcVar4 = '.';
    memcpy(pcVar4 + 1,param_3,sVar3 + 1);
    param_2 = local_448;
  }
  uVar5 = __res_context_query(param_1,param_2,param_4,param_5,param_6,param_7,param_8,param_9,
                              param_10,param_11,param_12);
LAB_007bb3e6:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}



long * FUN_006730a0(long *param_1)

{
  long *plVar1;
  int iVar2;
  long lVar3;
  long in_FS_OFFSET;
  char local_11;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  param_1[1] = 0;
  FUN_00672120(&local_11,param_1,1);
  if (local_11 != '\0') {
    plVar1 = *(long **)((long)param_1 + *(long *)(*param_1 + -0x18) + 0xe8);
    if ((ulong)plVar1[2] < (ulong)plVar1[3]) {
      plVar1[2] = plVar1[2] + 1;
    }
    else {
                    /* try { // try from 00673133 to 00673135 has its CatchHandler @ 00673158 */
      iVar2 = (**(code **)(*plVar1 + 0x50))();
      if (iVar2 == -1) {
        lVar3 = *(long *)(*param_1 + -0x18) + (long)param_1;
        FUN_0066ec40(lVar3,*(uint *)(lVar3 + 0x20) | 2);
        goto LAB_006730de;
      }
    }
    param_1[1] = 1;
  }
LAB_006730de:
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}



long * FUN_00676510(long *param_1)

{
  long *plVar1;
  int *piVar2;
  int iVar3;
  long lVar4;
  long in_FS_OFFSET;
  char local_11;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  param_1[1] = 0;
  FUN_006755e0(&local_11,param_1,1);
  if (local_11 != '\0') {
    plVar1 = *(long **)((long)param_1 + *(long *)(*param_1 + -0x18) + 0xe8);
    piVar2 = (int *)plVar1[2];
    if (piVar2 < (int *)plVar1[3]) {
      iVar3 = *piVar2;
      plVar1[2] = (long)(piVar2 + 1);
    }
    else {
                    /* try { // try from 006765c3 to 006765c5 has its CatchHandler @ 006765cd */
      iVar3 = (**(code **)(*plVar1 + 0x50))();
    }
    if (iVar3 == -1) {
      lVar4 = *(long *)(*param_1 + -0x18) + (long)param_1;
      FUN_0066f6e0(lVar4,*(uint *)(lVar4 + 0x20) | 2);
    }
    else {
      param_1[1] = 1;
    }
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}


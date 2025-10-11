
long * FUN_00690330(long *param_1,int param_2)

{
  long *plVar1;
  int *piVar2;
  char cVar3;
  int iVar4;
  long lVar5;
  long in_FS_OFFSET;
  char local_48 [8];
  long *local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00690090(local_48,param_1);
  if (local_48[0] != '\0') {
    plVar1 = *(long **)((long)param_1 + *(long *)(*param_1 + -0x18) + 0xe8);
    piVar2 = (int *)plVar1[5];
    if (piVar2 < (int *)plVar1[6]) {
      *piVar2 = param_2;
      plVar1[5] = (long)(piVar2 + 1);
    }
    else {
                    /* try { // try from 00690435 to 00690437 has its CatchHandler @ 00690442 */
      param_2 = (**(code **)(*plVar1 + 0x68))(plVar1,param_2);
    }
    if (param_2 == -1) {
      lVar5 = *(long *)(*param_1 + -0x18) + (long)param_1;
                    /* try { // try from 00690421 to 00690425 has its CatchHandler @ 0069044e */
      FUN_0066f6e0(lVar5,*(uint *)(lVar5 + 0x20) | 1);
    }
  }
  plVar1 = local_40;
  lVar5 = *(long *)(*local_40 + -0x18);
  if ((*(byte *)((long)local_40 + lVar5 + 0x19) & 0x20) != 0) {
    cVar3 = FUN_006c2f50();
    if ((cVar3 == '\0') && (plVar1 = *(long **)((long)plVar1 + lVar5 + 0xe8), plVar1 != (long *)0x0)
       ) {
      iVar4 = (**(code **)(*plVar1 + 0x30))();
      if (iVar4 == -1) {
        lVar5 = (long)local_40 + *(long *)(*local_40 + -0x18);
        FUN_0066f6e0(lVar5,*(uint *)(lVar5 + 0x20) | 1);
      }
    }
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}


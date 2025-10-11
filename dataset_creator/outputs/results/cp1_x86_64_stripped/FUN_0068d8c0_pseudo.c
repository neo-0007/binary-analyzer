
long * FUN_0068d8c0(long *param_1,undefined1 param_2)

{
  long *plVar1;
  char cVar2;
  int iVar3;
  long lVar4;
  long in_FS_OFFSET;
  char local_38 [8];
  long *local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_0068d620(local_38,param_1);
  if (local_38[0] != '\0') {
    plVar1 = *(long **)((long)param_1 + *(long *)(*param_1 + -0x18) + 0xe8);
    if ((undefined1 *)plVar1[5] < (undefined1 *)plVar1[6]) {
      *(undefined1 *)plVar1[5] = param_2;
      plVar1[5] = plVar1[5] + 1;
    }
    else {
                    /* try { // try from 0068d986 to 0068d988 has its CatchHandler @ 0068d9b7 */
      iVar3 = (**(code **)(*plVar1 + 0x68))(plVar1,param_2);
      if (iVar3 == -1) {
        lVar4 = *(long *)(*param_1 + -0x18) + (long)param_1;
                    /* try { // try from 0068d99f to 0068d9a3 has its CatchHandler @ 0068d9ae */
        FUN_0066ec40(lVar4,*(uint *)(lVar4 + 0x20) | 1);
      }
    }
  }
  plVar1 = local_30;
  lVar4 = *(long *)(*local_30 + -0x18);
  if ((*(byte *)((long)local_30 + lVar4 + 0x19) & 0x20) != 0) {
    cVar2 = FUN_006c2f50();
    if ((cVar2 == '\0') && (plVar1 = *(long **)((long)plVar1 + lVar4 + 0xe8), plVar1 != (long *)0x0)
       ) {
      iVar3 = (**(code **)(*plVar1 + 0x30))();
      if (iVar3 == -1) {
        lVar4 = (long)local_30 + *(long *)(*local_30 + -0x18);
        FUN_0066ec40(lVar4,*(uint *)(lVar4 + 0x20) | 1);
      }
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}



long * FUN_0068d700(long *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  int iVar3;
  long lVar4;
  uint uVar5;
  long in_FS_OFFSET;
  undefined1 local_49;
  char local_48 [8];
  long *local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_0068d620(local_48,param_1);
  if (local_48[0] == '\0') {
    if (param_2 != 0) goto LAB_0068d789;
    lVar4 = *param_1;
    uVar5 = 1;
  }
  else {
    lVar4 = *param_1;
    if (param_2 == 0) {
      uVar5 = 1;
    }
    else {
                    /* try { // try from 0068d75f to 0068d763 has its CatchHandler @ 0068d829 */
      lVar4 = FUN_006c7df0(param_2,*(undefined8 *)((long)param_1 + *(long *)(lVar4 + -0x18) + 0xe8),
                           &local_49);
      if (lVar4 != 0) goto LAB_0068d789;
      lVar4 = *param_1;
      uVar5 = 4;
    }
  }
  lVar4 = *(long *)(lVar4 + -0x18) + (long)param_1;
                    /* try { // try from 0068d80f to 0068d813 has its CatchHandler @ 0068d835 */
  FUN_0066ec40(lVar4,uVar5 | *(uint *)(lVar4 + 0x20));
LAB_0068d789:
  plVar1 = local_40;
  lVar4 = *(long *)(*local_40 + -0x18);
  if ((*(byte *)((long)local_40 + lVar4 + 0x19) & 0x20) != 0) {
    cVar2 = FUN_006c2f50();
    if ((cVar2 == '\0') && (plVar1 = *(long **)((long)plVar1 + lVar4 + 0xe8), plVar1 != (long *)0x0)
       ) {
      iVar3 = (**(code **)(*plVar1 + 0x30))();
      if (iVar3 == -1) {
        lVar4 = (long)local_40 + *(long *)(*local_40 + -0x18);
        FUN_0066ec40(lVar4,*(uint *)(lVar4 + 0x20) | 1);
      }
    }
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}


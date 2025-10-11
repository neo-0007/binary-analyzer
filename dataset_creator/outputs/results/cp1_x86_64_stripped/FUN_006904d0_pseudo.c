
long * FUN_006904d0(long *param_1,undefined8 param_2,long param_3)

{
  long *plVar1;
  char cVar2;
  int iVar3;
  long lVar4;
  long in_FS_OFFSET;
  char local_48 [8];
  long *local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00690090(local_48,param_1);
  if (local_48[0] != '\0') {
    plVar1 = *(long **)((long)param_1 + *(long *)(*param_1 + -0x18) + 0xe8);
                    /* try { // try from 00690524 to 00690526 has its CatchHandler @ 006905c0 */
    lVar4 = (**(code **)(*plVar1 + 0x60))(plVar1,param_2,param_3);
    if (param_3 != lVar4) {
      lVar4 = *(long *)(*param_1 + -0x18) + (long)param_1;
                    /* try { // try from 006905b1 to 006905b5 has its CatchHandler @ 006905c0 */
      FUN_0066f6e0(lVar4,*(uint *)(lVar4 + 0x20) | 1);
    }
  }
  plVar1 = local_40;
  lVar4 = *(long *)(*local_40 + -0x18);
  if ((*(byte *)((long)local_40 + lVar4 + 0x19) & 0x20) != 0) {
    cVar2 = FUN_006c2f50();
    if ((cVar2 == '\0') && (plVar1 = *(long **)((long)plVar1 + lVar4 + 0xe8), plVar1 != (long *)0x0)
       ) {
      iVar3 = (**(code **)(*plVar1 + 0x30))();
      if (iVar3 == -1) {
        lVar4 = (long)local_40 + *(long *)(*local_40 + -0x18);
        FUN_0066f6e0(lVar4,*(uint *)(lVar4 + 0x20) | 1);
      }
    }
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}



long * FUN_00691920(undefined8 param_1,long *param_2)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  char cVar4;
  int iVar5;
  undefined4 uVar6;
  char extraout_DL;
  long lVar7;
  long in_FS_OFFSET;
  char local_48 [8];
  long *local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00690090(local_48,param_2);
  if (local_48[0] != '\0') {
    lVar7 = *(long *)(*param_2 + -0x18) + (long)param_2;
    plVar1 = *(long **)(lVar7 + 0xf8);
    if (plVar1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 00691a7e to 00691a87 has its CatchHandler @ 00691a88 */
      FUN_00403826();
    }
    if (*(char *)(lVar7 + 0xe4) == '\0') {
      plVar2 = *(long **)(lVar7 + 0xf0);
      if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00403826();
      }
                    /* try { // try from 00691a34 to 00691a36 has its CatchHandler @ 00691a88 */
      uVar6 = (**(code **)(*plVar2 + 0x50))(plVar2,0x20);
      *(undefined4 *)(lVar7 + 0xe0) = uVar6;
      lVar3 = *param_2;
      *(undefined1 *)(lVar7 + 0xe4) = 1;
      lVar7 = *(long *)(lVar3 + -0x18) + (long)param_2;
    }
    else {
      uVar6 = *(undefined4 *)(lVar7 + 0xe0);
    }
                    /* try { // try from 006919aa to 006919ac has its CatchHandler @ 00691a88 */
    (**(code **)(*plVar1 + 0x38))
              (param_1,plVar1,*(long *)(lVar7 + 0xe8),*(long *)(lVar7 + 0xe8) == 0,lVar7,uVar6);
    if (extraout_DL != '\0') {
      lVar7 = *(long *)(*param_2 + -0x18) + (long)param_2;
                    /* try { // try from 006919c2 to 006919c6 has its CatchHandler @ 00691a94 */
      FUN_0066f6e0(lVar7,*(uint *)(lVar7 + 0x20) | 1);
    }
  }
  plVar1 = local_40;
  lVar7 = *(long *)(*local_40 + -0x18);
  if ((*(byte *)((long)local_40 + lVar7 + 0x19) & 0x20) != 0) {
    cVar4 = FUN_006c2f50();
    if ((cVar4 == '\0') && (plVar1 = *(long **)((long)plVar1 + lVar7 + 0xe8), plVar1 != (long *)0x0)
       ) {
      iVar5 = (**(code **)(*plVar1 + 0x30))();
      if (iVar5 == -1) {
        lVar7 = (long)local_40 + *(long *)(*local_40 + -0x18);
        FUN_0066f6e0(lVar7,*(uint *)(lVar7 + 0x20) | 1);
      }
    }
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}


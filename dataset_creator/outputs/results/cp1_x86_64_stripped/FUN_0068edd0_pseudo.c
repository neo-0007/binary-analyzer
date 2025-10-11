
long * FUN_0068edd0(long *param_1,undefined8 param_2)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  char cVar4;
  char extraout_DL;
  int iVar5;
  long lVar6;
  long in_FS_OFFSET;
  char local_58 [8];
  long *local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_0068d620(local_58,param_1);
  if (local_58[0] != '\0') {
    lVar6 = *(long *)(*param_1 + -0x18) + (long)param_1;
    plVar1 = *(long **)(lVar6 + 0xf8);
    if (plVar1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0068ef79 to 0068ef82 has its CatchHandler @ 0068ef83 */
      FUN_00403826();
    }
    if (*(char *)(lVar6 + 0xe1) == '\0') {
      plVar2 = *(long **)(lVar6 + 0xf0);
      if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00403826();
      }
      if ((char)plVar2[7] == '\0') {
                    /* try { // try from 0068ef23 to 0068ef4c has its CatchHandler @ 0068ef83 */
        FUN_0063d6f0(plVar2);
        iVar5 = 0x20;
        cVar4 = ' ';
        if (*(code **)(*plVar2 + 0x30) != FUN_00405e50) {
          cVar4 = (**(code **)(*plVar2 + 0x30))(plVar2,0x20);
          iVar5 = (int)cVar4;
        }
      }
      else {
        cVar4 = *(char *)((long)plVar2 + 0x59);
        iVar5 = (int)cVar4;
      }
      *(char *)(lVar6 + 0xe0) = cVar4;
      lVar3 = *param_1;
      *(undefined1 *)(lVar6 + 0xe1) = 1;
      lVar6 = *(long *)(lVar3 + -0x18) + (long)param_1;
    }
    else {
      iVar5 = (int)*(char *)(lVar6 + 0xe0);
    }
                    /* try { // try from 0068ee59 to 0068ee5b has its CatchHandler @ 0068ef83 */
    (**(code **)(*plVar1 + 0x30))
              (plVar1,*(long *)(lVar6 + 0xe8),*(long *)(lVar6 + 0xe8) == 0,lVar6,iVar5,param_2);
    if (extraout_DL != '\0') {
      lVar6 = *(long *)(*param_1 + -0x18) + (long)param_1;
                    /* try { // try from 0068ee71 to 0068ee75 has its CatchHandler @ 0068ef8f */
      FUN_0066ec40(lVar6,*(uint *)(lVar6 + 0x20) | 1);
    }
  }
  plVar1 = local_50;
  lVar6 = *(long *)(*local_50 + -0x18);
  if ((*(byte *)((long)local_50 + lVar6 + 0x19) & 0x20) != 0) {
    cVar4 = FUN_006c2f50();
    if ((cVar4 == '\0') && (plVar1 = *(long **)((long)plVar1 + lVar6 + 0xe8), plVar1 != (long *)0x0)
       ) {
      iVar5 = (**(code **)(*plVar1 + 0x30))();
      if (iVar5 == -1) {
        lVar6 = (long)local_50 + *(long *)(*local_50 + -0x18);
        FUN_0066ec40(lVar6,*(uint *)(lVar6 + 0x20) | 1);
      }
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}


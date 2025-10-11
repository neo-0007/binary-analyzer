
long * FUN_00691b40(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  char cVar4;
  int iVar5;
  undefined4 uVar6;
  undefined8 extraout_RDX;
  undefined8 in_R9;
  long lVar7;
  long in_FS_OFFSET;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  char local_48 [8];
  long *local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00690090(local_48,param_1);
  if (local_48[0] != '\0') {
    lVar7 = *(long *)(*param_1 + -0x18) + (long)param_1;
    plVar1 = *(long **)(lVar7 + 0xf8);
    if (plVar1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 00691c9d to 00691ca6 has its CatchHandler @ 00691ca7 */
      FUN_00403826();
    }
    if (*(char *)(lVar7 + 0xe4) == '\0') {
      plVar2 = *(long **)(lVar7 + 0xf0);
      if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00403826();
      }
                    /* try { // try from 00691c54 to 00691c56 has its CatchHandler @ 00691ca7 */
      uVar6 = (**(code **)(*plVar2 + 0x50))(plVar2,0x20);
      *(undefined4 *)(lVar7 + 0xe0) = uVar6;
      lVar3 = *param_1;
      *(undefined1 *)(lVar7 + 0xe4) = 1;
      lVar7 = *(long *)(lVar3 + -0x18) + (long)param_1;
    }
    else {
      uVar6 = *(undefined4 *)(lVar7 + 0xe0);
    }
                    /* try { // try from 00691bcb to 00691bcd has its CatchHandler @ 00691ca7 */
    (**(code **)(*plVar1 + 0x40))
              (plVar1,*(long *)(lVar7 + 0xe8),*(long *)(lVar7 + 0xe8) == 0,lVar7,uVar6,in_R9,
               in_stack_00000008);
    if ((char)extraout_RDX != '\0') {
      lVar7 = *(long *)(*param_1 + -0x18) + (long)param_1;
                    /* try { // try from 00691be5 to 00691be9 has its CatchHandler @ 00691cb3 */
      FUN_0066f6e0(lVar7,*(uint *)(lVar7 + 0x20) | 1,extraout_RDX,in_stack_00000010);
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
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}


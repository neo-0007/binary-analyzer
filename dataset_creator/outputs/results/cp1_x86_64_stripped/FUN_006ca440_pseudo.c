
long * FUN_006ca440(long *param_1,long param_2)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  char cVar7;
  long in_FS_OFFSET;
  char local_41;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_2 == 1) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      plVar4 = (long *)FUN_00676510();
      return plVar4;
    }
    goto LAB_006ca68b;
  }
  param_1[1] = 0;
  FUN_006755e0(&local_41,param_1,1);
  if ((0 < param_2) && (local_41 != '\0')) {
    plVar4 = *(long **)((long)param_1 + *(long *)(*param_1 + -0x18) + 0xe8);
    if ((int *)plVar4[2] < (int *)plVar4[3]) {
      iVar3 = *(int *)plVar4[2];
    }
    else {
      iVar3 = (**(code **)(*plVar4 + 0x48))(plVar4);
    }
    cVar7 = '\0';
LAB_006ca520:
    do {
      lVar6 = param_1[1];
      while (lVar6 < param_2) {
        if (iVar3 == -1) {
LAB_006ca5c0:
          if (param_2 == 0x7fffffffffffffff) goto LAB_006ca640;
          goto LAB_006ca5cf;
        }
        piVar1 = (int *)plVar4[3];
        piVar2 = (int *)plVar4[2];
        lVar5 = (long)piVar1 - (long)piVar2 >> 2;
        if (param_2 - lVar6 < lVar5) {
          lVar5 = param_2 - lVar6;
        }
        if (lVar5 < 2) {
          param_1[1] = lVar6 + 1;
          if (piVar2 < piVar1) {
            iVar3 = *piVar2;
            plVar4[2] = (long)(piVar2 + 1);
          }
          else {
            iVar3 = (**(code **)(*plVar4 + 0x50))(plVar4);
          }
          if (iVar3 == -1) {
            lVar6 = param_1[1];
            goto LAB_006ca5c0;
          }
          if ((int *)plVar4[2] < (int *)plVar4[3]) {
            iVar3 = *(int *)plVar4[2];
          }
          else {
LAB_006ca660:
                    /* try { // try from 006ca667 to 006ca685 has its CatchHandler @ 006ca69c */
            iVar3 = (**(code **)(*plVar4 + 0x48))(plVar4);
          }
          goto LAB_006ca520;
        }
        piVar2 = piVar2 + lVar5;
        plVar4[2] = (long)piVar2;
        param_1[1] = lVar5 + lVar6;
        if (piVar1 <= piVar2) goto LAB_006ca660;
        iVar3 = *piVar2;
        lVar6 = param_1[1];
      }
      if (param_2 != 0x7fffffffffffffff) {
        local_41 = iVar3 == -1;
LAB_006ca5cf:
        if ((param_2 <= lVar6) || (local_41 == '\0')) break;
        goto LAB_006ca5e8;
      }
      if (iVar3 == -1) goto LAB_006ca640;
      param_1[1] = -0x8000000000000000;
      cVar7 = local_41;
    } while( true );
  }
  goto LAB_006ca498;
LAB_006ca640:
  if (cVar7 != '\0') {
    param_1[1] = 0x7fffffffffffffff;
  }
LAB_006ca5e8:
  lVar6 = *(long *)(*param_1 + -0x18) + (long)param_1;
  FUN_0066f6e0(lVar6,*(uint *)(lVar6 + 0x20) | 2);
LAB_006ca498:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
LAB_006ca68b:
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}


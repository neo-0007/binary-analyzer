
long * FUN_006c6140(long *param_1,int *param_2,long param_3,int param_4)

{
  long *plVar1;
  int iVar2;
  long lVar3;
  int *piVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  int *piVar8;
  int *piVar9;
  long in_FS_OFFSET;
  char local_41;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  param_1[1] = 0;
  FUN_006755e0(&local_41,param_1,1);
  if (local_41 == '\0') {
LAB_006c6193:
    lVar6 = param_1[1];
joined_r0x006c620e:
    if (0 < param_3) {
      *param_2 = 0;
    }
    if (lVar6 != 0) goto LAB_006c61c0;
    uVar5 = 4;
  }
  else {
    plVar1 = *(long **)((long)param_1 + *(long *)(*param_1 + -0x18) + 0xe8);
    if ((int *)plVar1[2] < (int *)plVar1[3]) {
      iVar2 = *(int *)plVar1[2];
    }
    else {
                    /* try { // try from 006c6467 to 006c6469 has its CatchHandler @ 006c64da */
      iVar2 = (**(code **)(*plVar1 + 0x48))(plVar1);
    }
    lVar3 = param_1[1];
    lVar6 = lVar3 + 1;
    if (lVar6 < param_3) {
      piVar4 = param_2;
      if (iVar2 == -1) {
        if (0 < param_3) goto LAB_006c6476;
LAB_006c64ad:
        uVar5 = 2;
      }
      else {
        do {
          param_2 = piVar4;
          if (param_4 == iVar2) goto LAB_006c61f0;
          piVar9 = (int *)plVar1[3];
          piVar8 = (int *)plVar1[2];
          lVar3 = (param_3 - lVar3) + -1;
          lVar7 = (long)piVar9 - (long)piVar8 >> 2;
          if (lVar3 <= lVar7) {
            lVar7 = lVar3;
          }
          if (lVar7 < 2) {
            param_2 = piVar4 + 1;
            *piVar4 = iVar2;
            param_1[1] = lVar6;
            if (piVar8 < piVar9) {
              iVar2 = *piVar8;
              plVar1[2] = (long)(piVar8 + 1);
            }
            else {
                    /* try { // try from 006c6427 to 006c6449 has its CatchHandler @ 006c64bc */
              iVar2 = (**(code **)(*plVar1 + 0x50))(plVar1);
            }
            if (iVar2 == -1) {
              lVar3 = param_1[1];
              break;
            }
            if ((int *)plVar1[2] < (int *)plVar1[3]) {
              iVar2 = *(int *)plVar1[2];
              lVar3 = param_1[1];
            }
            else {
              iVar2 = (**(code **)(*plVar1 + 0x48))(plVar1);
              lVar3 = param_1[1];
            }
          }
          else {
            lVar6 = thunk_FUN_00756540(piVar8,param_4,lVar7);
            if ((lVar6 == 0) || (lVar7 = lVar6 - (long)piVar8 >> 2, lVar7 != 0)) {
              FUN_00771ea0(piVar4,piVar8,lVar7,0x3fffffffffffffff);
              piVar8 = (int *)plVar1[2];
              piVar9 = (int *)plVar1[3];
            }
            lVar3 = lVar7 + param_1[1];
            param_2 = piVar4 + lVar7;
            piVar8 = piVar8 + lVar7;
            plVar1[2] = (long)piVar8;
            param_1[1] = lVar3;
            if (piVar8 < piVar9) {
              iVar2 = *piVar8;
            }
            else {
                    /* try { // try from 006c63af to 006c63b1 has its CatchHandler @ 006c64cb */
              iVar2 = (**(code **)(*plVar1 + 0x48))(plVar1);
              lVar3 = param_1[1];
            }
          }
          lVar6 = lVar3 + 1;
          if (param_3 <= lVar6) goto LAB_006c63c0;
          piVar4 = param_2;
        } while (iVar2 != -1);
        uVar5 = 2;
        if (0 < param_3) {
          *param_2 = 0;
        }
      }
LAB_006c640a:
      if (lVar3 == 0) {
        uVar5 = uVar5 | 4;
      }
    }
    else {
LAB_006c63c0:
      if (iVar2 == -1) {
        lVar3 = param_1[1];
        if (param_3 < 1) goto LAB_006c64ad;
LAB_006c6476:
        *param_2 = 0;
        uVar5 = 2;
        if (lVar3 == 0) {
          uVar5 = 6;
        }
      }
      else {
        if (param_4 == iVar2) {
LAB_006c61f0:
          param_1[1] = lVar6;
          if ((ulong)plVar1[3] <= (ulong)plVar1[2]) {
                    /* try { // try from 006c649b to 006c649d has its CatchHandler @ 006c64e9 */
            (**(code **)(*plVar1 + 0x50))(plVar1);
            goto LAB_006c6193;
          }
          plVar1[2] = plVar1[2] + 4;
          goto joined_r0x006c620e;
        }
        lVar3 = param_1[1];
        if (param_3 < 1) {
          uVar5 = 4;
          goto LAB_006c640a;
        }
        *param_2 = 0;
        uVar5 = 4;
      }
    }
  }
  lVar6 = *(long *)(*param_1 + -0x18) + (long)param_1;
  FUN_0066f6e0(lVar6,uVar5 | *(uint *)(lVar6 + 0x20));
LAB_006c61c0:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}


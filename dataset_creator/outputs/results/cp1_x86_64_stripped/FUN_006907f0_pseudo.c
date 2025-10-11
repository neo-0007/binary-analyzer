
long * FUN_006907f0(long *param_1,undefined8 param_2,long param_3)

{
  long *plVar1;
  int *piVar2;
  long lVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  uint uVar8;
  long lVar9;
  long lVar10;
  long in_FS_OFFSET;
  char local_58 [8];
  long *local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00690090(local_58,param_1);
  if (local_58[0] != '\0') {
    lVar9 = *(long *)(*param_1 + -0x18) + (long)param_1;
    lVar10 = *(long *)(lVar9 + 0x10);
    if (param_3 < lVar10) {
      uVar8 = *(uint *)(lVar9 + 0x18) & 0xb0;
      if (uVar8 == 0x20) {
LAB_006908f9:
        iVar6 = *(int *)(lVar9 + 0x20);
      }
      else {
        lVar7 = lVar10 - param_3;
        if (*(char *)(lVar9 + 0xe4) == '\0') {
          plVar1 = *(long **)(lVar9 + 0xf0);
          if (plVar1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_00403826();
          }
          iVar6 = (**(code **)(*plVar1 + 0x50))(plVar1,0x20);
          *(int *)(lVar9 + 0xe0) = iVar6;
          lVar3 = *param_1;
          *(undefined1 *)(lVar9 + 0xe4) = 1;
          lVar9 = *(long *)(lVar3 + -0x18) + (long)param_1;
        }
        else {
          iVar6 = *(int *)(lVar9 + 0xe0);
        }
        do {
          plVar1 = *(long **)(lVar9 + 0xe8);
          piVar2 = (int *)plVar1[5];
          if (piVar2 < (int *)plVar1[6]) {
            *piVar2 = iVar6;
            plVar1[5] = (long)(piVar2 + 1);
            iVar5 = iVar6;
          }
          else {
                    /* try { // try from 006908c7 to 006908ed has its CatchHandler @ 00690b5a */
            iVar5 = (**(code **)(*plVar1 + 0x68))(plVar1,iVar6);
            lVar9 = *(long *)(*param_1 + -0x18) + (long)param_1;
          }
          if (iVar5 == -1) {
            FUN_0066f6e0(lVar9,*(uint *)(lVar9 + 0x20) | 1);
            lVar9 = *(long *)(*param_1 + -0x18) + (long)param_1;
            goto LAB_006908f9;
          }
          lVar7 = lVar7 + -1;
        } while (lVar7 != 0);
        iVar6 = *(int *)(lVar9 + 0x20);
      }
      if (iVar6 == 0) {
        lVar7 = (**(code **)(**(long **)(lVar9 + 0xe8) + 0x60))
                          (*(long **)(lVar9 + 0xe8),param_2,param_3);
        lVar9 = *param_1;
        if (param_3 != lVar7) {
          lVar9 = *(long *)(lVar9 + -0x18) + (long)param_1;
          FUN_0066f6e0(lVar9,*(uint *)(lVar9 + 0x20) | 1);
          lVar9 = *param_1;
        }
        lVar9 = *(long *)(lVar9 + -0x18) + (long)param_1;
        if ((uVar8 == 0x20) && (*(int *)(lVar9 + 0x20) == 0)) {
          lVar10 = lVar10 - param_3;
          if (*(char *)(lVar9 + 0xe4) == '\0') {
            plVar1 = *(long **)(lVar9 + 0xf0);
            if (plVar1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_00403826();
            }
                    /* try { // try from 00690b10 to 00690b59 has its CatchHandler @ 00690b5a */
            iVar6 = (**(code **)(*plVar1 + 0x50))(plVar1,0x20);
            *(int *)(lVar9 + 0xe0) = iVar6;
            lVar7 = *param_1;
            *(undefined1 *)(lVar9 + 0xe4) = 1;
            lVar9 = *(long *)(lVar7 + -0x18) + (long)param_1;
          }
          else {
            iVar6 = *(int *)(lVar9 + 0xe0);
          }
          do {
            plVar1 = *(long **)(lVar9 + 0xe8);
            piVar2 = (int *)plVar1[5];
            if (piVar2 < (int *)plVar1[6]) {
              *piVar2 = iVar6;
              plVar1[5] = (long)(piVar2 + 1);
              iVar5 = iVar6;
            }
            else {
              iVar5 = (**(code **)(*plVar1 + 0x68))(plVar1,iVar6);
              lVar9 = *(long *)(*param_1 + -0x18) + (long)param_1;
            }
            if (iVar5 == -1) {
              FUN_0066f6e0(lVar9,*(uint *)(lVar9 + 0x20) | 1);
              goto LAB_006909b8;
            }
            lVar10 = lVar10 + -1;
          } while (lVar10 != 0);
        }
      }
    }
    else {
                    /* try { // try from 00690992 to 00690aba has its CatchHandler @ 00690b5a */
      lVar10 = (**(code **)(**(long **)(lVar9 + 0xe8) + 0x60))
                         (*(long **)(lVar9 + 0xe8),param_2,param_3);
      lVar9 = *(long *)(*param_1 + -0x18) + (long)param_1;
      if (param_3 != lVar10) {
        FUN_0066f6e0(lVar9,*(uint *)(lVar9 + 0x20) | 1);
LAB_006909b8:
        *(undefined8 *)((long)param_1 + *(long *)(*param_1 + -0x18) + 0x10) = 0;
        goto LAB_0069090d;
      }
    }
    *(undefined8 *)(lVar9 + 0x10) = 0;
  }
LAB_0069090d:
  plVar1 = local_50;
  lVar10 = *(long *)(*local_50 + -0x18);
  if (((((*(byte *)((long)local_50 + lVar10 + 0x19) & 0x20) != 0) &&
       (cVar4 = FUN_006c2f50(), cVar4 == '\0')) &&
      (plVar1 = *(long **)((long)plVar1 + lVar10 + 0xe8), plVar1 != (long *)0x0)) &&
     (iVar6 = (**(code **)(*plVar1 + 0x30))(), iVar6 == -1)) {
    lVar10 = (long)local_50 + *(long *)(*local_50 + -0x18);
    FUN_0066f6e0(lVar10,*(uint *)(lVar10 + 0x20) | 1);
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    FUN_00771f60();
  }
  return param_1;
}



long * FUN_0068ddc0(long *param_1,undefined8 param_2,long param_3)

{
  long *plVar1;
  char cVar2;
  undefined1 uVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  uint uVar7;
  long lVar8;
  long lVar9;
  long in_FS_OFFSET;
  char local_58 [8];
  long *local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_0068d620(local_58,param_1);
  if (local_58[0] != '\0') {
    lVar5 = *(long *)(*param_1 + -0x18);
    lVar9 = (long)param_1 + lVar5;
    lVar8 = *(long *)(lVar9 + 0x10);
    if (param_3 < lVar8) {
      uVar7 = *(uint *)(lVar9 + 0x18) & 0xb0;
      if (uVar7 == 0x20) {
LAB_0068deba:
        iVar4 = *(int *)(lVar9 + 0x20);
      }
      else {
        lVar6 = lVar8 - param_3;
        if (*(char *)(lVar9 + 0xe1) == '\0') {
          plVar1 = *(long **)(lVar9 + 0xf0);
          if (plVar1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_00403826();
          }
          if ((char)plVar1[7] == '\0') {
                    /* try { // try from 0068e0e8 to 0068e194 has its CatchHandler @ 0068e195 */
            FUN_0063d6f0(plVar1);
            uVar3 = 0x20;
            if (*(code **)(*plVar1 + 0x30) != FUN_00405e50) {
              uVar3 = (**(code **)(*plVar1 + 0x30))(plVar1,0x20);
            }
          }
          else {
            uVar3 = *(undefined1 *)((long)plVar1 + 0x59);
          }
          *(undefined1 *)(lVar9 + 0xe0) = uVar3;
          lVar5 = *param_1;
          *(undefined1 *)(lVar9 + 0xe1) = 1;
          lVar5 = *(long *)(lVar5 + -0x18);
        }
        else {
          uVar3 = *(undefined1 *)(lVar9 + 0xe0);
        }
        do {
          plVar1 = *(long **)((long)param_1 + lVar5 + 0xe8);
          if ((undefined1 *)plVar1[5] < (undefined1 *)plVar1[6]) {
            *(undefined1 *)plVar1[5] = uVar3;
            plVar1[5] = plVar1[5] + 1;
          }
          else {
                    /* try { // try from 0068de91 to 0068deae has its CatchHandler @ 0068e195 */
            iVar4 = (**(code **)(*plVar1 + 0x68))(plVar1,uVar3);
            if (iVar4 == -1) {
              lVar9 = *(long *)(*param_1 + -0x18) + (long)param_1;
              FUN_0066ec40(lVar9,*(uint *)(lVar9 + 0x20) | 1);
              lVar9 = *(long *)(*param_1 + -0x18) + (long)param_1;
              goto LAB_0068deba;
            }
          }
          lVar5 = *(long *)(*param_1 + -0x18);
          lVar6 = lVar6 + -1;
        } while (lVar6 != 0);
        lVar9 = (long)param_1 + lVar5;
        iVar4 = *(int *)(lVar9 + 0x20);
      }
      if (iVar4 == 0) {
        lVar5 = (**(code **)(**(long **)(lVar9 + 0xe8) + 0x60))
                          (*(long **)(lVar9 + 0xe8),param_2,param_3);
        lVar9 = *param_1;
        if (param_3 != lVar5) {
          lVar9 = *(long *)(lVar9 + -0x18) + (long)param_1;
          FUN_0066ec40(lVar9,*(uint *)(lVar9 + 0x20) | 1);
          lVar9 = *param_1;
        }
        lVar5 = *(long *)(lVar9 + -0x18);
        lVar9 = (long)param_1 + lVar5;
        if ((uVar7 == 0x20) && (*(int *)(lVar9 + 0x20) == 0)) {
          lVar8 = lVar8 - param_3;
          if (*(char *)(lVar9 + 0xe1) == '\0') {
            plVar1 = *(long **)(lVar9 + 0xf0);
            if (plVar1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_00403826();
            }
            if ((char)plVar1[7] == '\0') {
              FUN_0063d6f0(plVar1);
              uVar3 = 0x20;
              if (*(code **)(*plVar1 + 0x30) != FUN_00405e50) {
                uVar3 = (**(code **)(*plVar1 + 0x30))(plVar1,0x20);
              }
            }
            else {
              uVar3 = *(undefined1 *)((long)plVar1 + 0x59);
            }
            *(undefined1 *)(lVar9 + 0xe0) = uVar3;
            lVar5 = *param_1;
            *(undefined1 *)(lVar9 + 0xe1) = 1;
            lVar5 = *(long *)(lVar5 + -0x18);
          }
          else {
            uVar3 = *(undefined1 *)(lVar9 + 0xe0);
          }
          do {
            plVar1 = *(long **)((long)param_1 + lVar5 + 0xe8);
            if ((undefined1 *)plVar1[5] < (undefined1 *)plVar1[6]) {
              *(undefined1 *)plVar1[5] = uVar3;
              plVar1[5] = plVar1[5] + 1;
            }
            else {
              iVar4 = (**(code **)(*plVar1 + 0x68))(plVar1,uVar3);
              if (iVar4 == -1) {
                lVar9 = *(long *)(*param_1 + -0x18) + (long)param_1;
                FUN_0066ec40(lVar9,*(uint *)(lVar9 + 0x20) | 1);
                goto LAB_0068df76;
              }
            }
            lVar5 = *(long *)(*param_1 + -0x18);
            lVar8 = lVar8 + -1;
          } while (lVar8 != 0);
          lVar9 = (long)param_1 + lVar5;
        }
      }
    }
    else {
                    /* try { // try from 0068df51 to 0068e06e has its CatchHandler @ 0068e195 */
      lVar8 = (**(code **)(**(long **)(lVar9 + 0xe8) + 0x60))
                        (*(long **)(lVar9 + 0xe8),param_2,param_3);
      lVar9 = *(long *)(*param_1 + -0x18) + (long)param_1;
      if (param_3 != lVar8) {
        FUN_0066ec40(lVar9,*(uint *)(lVar9 + 0x20) | 1);
LAB_0068df76:
        *(undefined8 *)((long)param_1 + *(long *)(*param_1 + -0x18) + 0x10) = 0;
        goto LAB_0068decd;
      }
    }
    *(undefined8 *)(lVar9 + 0x10) = 0;
  }
LAB_0068decd:
  plVar1 = local_50;
  lVar9 = *(long *)(*local_50 + -0x18);
  if (((((*(byte *)((long)local_50 + lVar9 + 0x19) & 0x20) != 0) &&
       (cVar2 = FUN_006c2f50(), cVar2 == '\0')) &&
      (plVar1 = *(long **)((long)plVar1 + lVar9 + 0xe8), plVar1 != (long *)0x0)) &&
     (iVar4 = (**(code **)(*plVar1 + 0x30))(), iVar4 == -1)) {
    lVar9 = (long)local_50 + *(long *)(*local_50 + -0x18);
    FUN_0066ec40(lVar9,*(uint *)(lVar9 + 0x20) | 1);
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    FUN_00771f60();
  }
  return param_1;
}



void FUN_00622fa0(long param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  int iVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  long lVar10;
  
  iVar5 = FUN_0070a340(&DAT_00942880);
  if (iVar5 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_004021c3();
  }
  lVar10 = *(long *)(param_1 + -0x10);
  plVar1 = (long *)(param_1 + -0x10);
  if (DAT_009428a8 != (long *)0x0) {
    plVar3 = (long *)((long)plVar1 + lVar10);
    if (DAT_009428a8 <= plVar3) {
      plVar8 = (long *)DAT_009428a8[1];
      if (DAT_009428a8 == plVar3) {
        lVar4 = *DAT_009428a8;
        *(long **)(param_1 + -8) = plVar8;
        *(long *)(param_1 + -0x10) = lVar10 + lVar4;
        DAT_009428a8 = plVar1;
      }
      else {
        plVar9 = (long *)&DAT_009428a8;
        plVar7 = DAT_009428a8;
        if (plVar8 == (long *)0x0) {
LAB_00623020:
          lVar4 = *plVar7;
          plVar3 = (long *)((long)plVar7 + lVar4);
        }
        else {
          do {
            plVar6 = plVar7;
            if (plVar8 <= plVar3) {
              if (plVar3 == plVar8) {
                lVar10 = lVar10 + *plVar3;
                plVar6[1] = plVar3[1];
              }
              plVar7 = (long *)*plVar9;
              goto LAB_00623020;
            }
            plVar2 = plVar8 + 1;
            plVar9 = plVar6 + 1;
            plVar7 = plVar8;
            plVar8 = (long *)*plVar2;
          } while ((long *)*plVar2 != (long *)0x0);
          plVar7 = (long *)plVar6[1];
          lVar4 = *plVar7;
          plVar3 = (long *)((long)plVar7 + lVar4);
        }
        if (plVar1 == plVar3) {
          *plVar7 = lVar4 + lVar10;
        }
        else {
          lVar4 = plVar7[1];
          *(long *)(param_1 + -0x10) = lVar10;
          *(long *)(param_1 + -8) = lVar4;
          *(long **)(*plVar9 + 8) = plVar1;
        }
      }
      goto LAB_00623053;
    }
  }
  *(long **)(param_1 + -8) = DAT_009428a8;
  DAT_009428a8 = plVar1;
LAB_00623053:
  iVar5 = FUN_0070abb0(&DAT_00942880);
  if (iVar5 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_004021f8();
}


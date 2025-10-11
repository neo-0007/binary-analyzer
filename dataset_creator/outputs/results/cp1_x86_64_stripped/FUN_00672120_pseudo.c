
void FUN_00672120(undefined1 *param_1,long *param_2,char param_3)

{
  byte bVar1;
  long *plVar2;
  int iVar3;
  byte *pbVar4;
  ulong uVar5;
  byte *pbVar6;
  uint uVar7;
  long lVar8;
  long lVar9;
  
  lVar8 = *param_2;
  *param_1 = 0;
  lVar8 = *(long *)(lVar8 + -0x18) + (long)param_2;
  uVar7 = *(uint *)(lVar8 + 0x20);
  if (uVar7 != 0) goto LAB_0067217b;
  if (*(long *)(lVar8 + 0xd8) == 0) {
    if ((param_3 != '\0') || ((*(byte *)(lVar8 + 0x19) & 0x10) == 0)) {
LAB_0067219a:
      *param_1 = 1;
      return;
    }
  }
  else {
                    /* try { // try from 0067215a to 0067215e has its CatchHandler @ 006722a4 */
    FUN_0068ce90(*(long *)(lVar8 + 0xd8));
    lVar8 = *(long *)(*param_2 + -0x18) + (long)param_2;
    if ((param_3 != '\0') || ((*(byte *)(lVar8 + 0x19) & 0x10) == 0)) {
LAB_00672174:
      uVar7 = *(uint *)(lVar8 + 0x20);
      if (uVar7 == 0) goto LAB_0067219a;
      goto LAB_0067217b;
    }
  }
  plVar2 = *(long **)(lVar8 + 0xe8);
  if ((byte *)plVar2[2] < (byte *)plVar2[3]) {
    lVar9 = *(long *)(lVar8 + 0xf0);
    uVar5 = (ulong)*(byte *)plVar2[2];
    if (lVar9 == 0) {
LAB_0067229f:
                    /* WARNING: Subroutine does not return */
      FUN_00403826();
    }
LAB_006721da:
    do {
      bVar1 = *(byte *)(*(long *)(lVar9 + 0x30) + 1 + (uVar5 & 0xff) * 2);
      while( true ) {
        if ((bVar1 & 0x20) == 0) {
          lVar8 = (long)param_2 + *(long *)(*param_2 + -0x18);
          goto LAB_00672174;
        }
        pbVar6 = (byte *)plVar2[3];
        if ((byte *)plVar2[2] < pbVar6) {
          pbVar4 = (byte *)plVar2[2] + 1;
          plVar2[2] = (long)pbVar4;
        }
        else {
                    /* try { // try from 0067222f to 006722a3 has its CatchHandler @ 006722a4 */
          iVar3 = (**(code **)(*plVar2 + 0x50))(plVar2);
          if (iVar3 == -1) goto LAB_00672237;
          pbVar4 = (byte *)plVar2[2];
          pbVar6 = (byte *)plVar2[3];
        }
        if (pbVar6 <= pbVar4) break;
        bVar1 = *(byte *)(*(long *)(lVar9 + 0x30) + 1 + (ulong)*pbVar4 * 2);
      }
      uVar5 = (**(code **)(*plVar2 + 0x48))(plVar2);
    } while ((int)uVar5 != -1);
LAB_00672237:
    lVar8 = (long)param_2 + *(long *)(*param_2 + -0x18);
  }
  else {
    uVar5 = (**(code **)(*plVar2 + 0x48))(plVar2);
    lVar8 = *(long *)(*param_2 + -0x18) + (long)param_2;
    lVar9 = *(long *)(lVar8 + 0xf0);
    if (lVar9 == 0) goto LAB_0067229f;
    if ((int)uVar5 != -1) goto LAB_006721da;
  }
  uVar7 = *(uint *)(lVar8 + 0x20) | 2;
LAB_0067217b:
  FUN_0066ec40(lVar8,uVar7 | 4);
  return;
}


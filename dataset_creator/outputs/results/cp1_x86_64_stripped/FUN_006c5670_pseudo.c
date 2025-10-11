
long * FUN_006c5670(long *param_1,undefined1 *param_2,long param_3,byte param_4)

{
  byte bVar1;
  long *plVar2;
  undefined1 *puVar3;
  int iVar4;
  byte *pbVar5;
  byte *pbVar6;
  long lVar7;
  byte *pbVar8;
  uint uVar9;
  long lVar10;
  long in_FS_OFFSET;
  char local_41;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  param_1[1] = 0;
  FUN_00672120(&local_41,param_1,1);
  if (local_41 == '\0') {
    if (0 < param_3) goto LAB_006c56c7;
    lVar10 = param_1[1];
    goto joined_r0x006c5718;
  }
  plVar2 = *(long **)((long)param_1 + *(long *)(*param_1 + -0x18) + 0xe8);
  pbVar8 = (byte *)plVar2[3];
  pbVar6 = (byte *)plVar2[2];
  if (pbVar6 < pbVar8) {
    lVar7 = param_1[1];
    uVar9 = (uint)*pbVar6;
    lVar10 = lVar7 + 1;
    if (lVar10 < param_3) {
LAB_006c5762:
      puVar3 = param_2;
      while (param_2 = puVar3, param_4 != uVar9) {
        lVar7 = (param_3 - lVar7) + -1;
        lVar10 = (long)pbVar8 - (long)pbVar6;
        if (lVar7 <= (long)pbVar8 - (long)pbVar6) {
          lVar10 = lVar7;
        }
        if (lVar10 < 2) {
          param_2 = puVar3 + 1;
          *puVar3 = (char)uVar9;
          pbVar8 = (byte *)plVar2[3];
          pbVar6 = (byte *)plVar2[2];
          param_1[1] = param_1[1] + 1;
          if (pbVar8 <= pbVar6) {
                    /* try { // try from 006c58c7 to 006c5919 has its CatchHandler @ 006c5a08 */
            iVar4 = (**(code **)(*plVar2 + 0x50))(plVar2);
            if (iVar4 != -1) {
              pbVar6 = (byte *)plVar2[2];
              pbVar8 = (byte *)plVar2[3];
              goto LAB_006c582f;
            }
LAB_006c58d3:
            if (0 < param_3) {
              *param_2 = 0;
            }
            lVar7 = param_1[1];
            uVar9 = 2;
            goto LAB_006c58e6;
          }
          pbVar6 = pbVar6 + 1;
          plVar2[2] = (long)pbVar6;
LAB_006c582f:
          if (pbVar8 <= pbVar6) {
            uVar9 = (**(code **)(*plVar2 + 0x48))(plVar2);
            goto LAB_006c587c;
          }
          bVar1 = *pbVar6;
          lVar7 = param_1[1];
LAB_006c57c4:
          uVar9 = (uint)bVar1;
          lVar10 = lVar7 + 1;
          if (param_3 <= lVar10) goto LAB_006c58a8;
        }
        else {
          pbVar5 = (byte *)thunk_FUN_007134f0(pbVar6,(int)(char)param_4,lVar10);
          if ((pbVar5 == (byte *)0x0) || (lVar10 = (long)pbVar5 - (long)pbVar6, lVar10 != 0)) {
            thunk_FUN_00713a50(puVar3,pbVar6,lVar10);
            pbVar8 = (byte *)plVar2[3];
            pbVar5 = (byte *)(plVar2[2] + lVar10);
          }
          lVar7 = param_1[1];
          plVar2[2] = (long)pbVar5;
          param_2 = puVar3 + lVar10;
          lVar7 = lVar7 + lVar10;
          param_1[1] = lVar7;
          if (pbVar5 < pbVar8) {
            bVar1 = *pbVar5;
            goto LAB_006c57c4;
          }
                    /* try { // try from 006c5877 to 006c5879 has its CatchHandler @ 006c5a17 */
          uVar9 = (**(code **)(*plVar2 + 0x48))(plVar2);
LAB_006c587c:
          lVar7 = param_1[1];
          lVar10 = lVar7 + 1;
          if (param_3 <= lVar10) goto LAB_006c5992;
          if (uVar9 == 0xffffffff) goto LAB_006c58d3;
          pbVar8 = (byte *)plVar2[3];
        }
        pbVar6 = (byte *)plVar2[2];
        puVar3 = param_2;
      }
    }
    else {
LAB_006c58a8:
      if (param_4 != uVar9) {
        if (param_3 < 1) {
          lVar7 = param_1[1];
          uVar9 = 4;
          goto LAB_006c58e6;
        }
        *param_2 = 0;
        uVar9 = 4;
        goto LAB_006c56d7;
      }
      pbVar6 = (byte *)plVar2[2];
      pbVar8 = (byte *)plVar2[3];
    }
    param_1[1] = lVar10;
    if (pbVar6 < pbVar8) {
      plVar2[2] = (long)(pbVar6 + 1);
      if (0 < param_3) {
LAB_006c56c7:
        *param_2 = 0;
        lVar10 = param_1[1];
      }
    }
    else {
                    /* try { // try from 006c59d1 to 006c59d3 has its CatchHandler @ 006c5a35 */
      (**(code **)(*plVar2 + 0x50))(plVar2);
      if (0 < param_3) goto LAB_006c56c7;
      lVar10 = param_1[1];
    }
joined_r0x006c5718:
    if (lVar10 != 0) goto LAB_006c56ea;
    uVar9 = 4;
  }
  else {
                    /* try { // try from 006c5967 to 006c5969 has its CatchHandler @ 006c5a26 */
    uVar9 = (**(code **)(*plVar2 + 0x48))(plVar2);
    lVar7 = param_1[1];
    lVar10 = lVar7 + 1;
    if (lVar10 < param_3) {
      if (uVar9 != 0xffffffff) {
        pbVar8 = (byte *)plVar2[3];
        pbVar6 = (byte *)plVar2[2];
        goto LAB_006c5762;
      }
      if (0 < param_3) goto LAB_006c59ac;
      uVar9 = 2;
LAB_006c58e6:
      if (lVar7 == 0) {
        uVar9 = uVar9 | 4;
      }
    }
    else {
LAB_006c5992:
      if (uVar9 != 0xffffffff) goto LAB_006c58a8;
      uVar9 = 2;
      if (param_3 < 1) goto LAB_006c58e6;
LAB_006c59ac:
      *param_2 = 0;
      uVar9 = 2;
      if (param_1[1] == 0) {
        uVar9 = 6;
      }
    }
  }
LAB_006c56d7:
  lVar10 = *(long *)(*param_1 + -0x18) + (long)param_1;
  FUN_0066ec40(lVar10,uVar9 | *(uint *)(lVar10 + 0x20));
LAB_006c56ea:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    FUN_00771f60();
  }
  return param_1;
}


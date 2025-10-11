
void FUN_006c5d80(long *param_1,undefined1 *param_2,long param_3)

{
  byte bVar1;
  long *plVar2;
  long lVar3;
  int iVar4;
  long lVar5;
  byte *pbVar6;
  byte *pbVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  uint uVar12;
  long lVar13;
  long in_FS_OFFSET;
  long local_70;
  undefined1 *local_68;
  char local_49;
  undefined1 local_48 [8];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00672120(&local_49,param_1,0);
  lVar5 = *param_1;
  if (local_49 == '\0') {
    uVar12 = 4;
    goto LAB_006c5f05;
  }
  lVar13 = *(long *)((long)param_1 + *(long *)(lVar5 + -0x18) + 0x10);
  if ((lVar13 < 1) || (param_3 <= lVar13)) {
    lVar13 = param_3;
  }
  FUN_00625160(local_48,(long)param_1 + *(long *)(lVar5 + -0x18) + 0xd0);
                    /* try { // try from 006c5dfd to 006c5e01 has its CatchHandler @ 006c6114 */
  lVar5 = FUN_0067c1e0(local_48);
  FUN_00625980(local_48);
  plVar2 = *(long **)((long)param_1 + *(long *)(*param_1 + -0x18) + 0xe8);
  if ((byte *)plVar2[2] < (byte *)plVar2[3]) {
    uVar8 = (ulong)*(byte *)plVar2[2];
    if (0 < lVar13 + -1) {
LAB_006c5e40:
      local_70 = lVar13 + -1;
      lVar11 = 0;
LAB_006c5e48:
      do {
        if ((*(byte *)(*(long *)(lVar5 + 0x30) + 1 + (uVar8 & 0xff) * 2) & 0x20) != 0) {
          *param_2 = 0;
          lVar5 = *param_1;
          uVar12 = 4;
          *(undefined8 *)((long)param_1 + *(long *)(lVar5 + -0x18) + 0x10) = 0;
          if (lVar11 != 0) goto LAB_006c5f14;
          goto LAB_006c5f05;
        }
        lVar3 = plVar2[2];
        lVar10 = (lVar13 - lVar11) + -1;
        lVar9 = plVar2[3] - lVar3;
        if (lVar9 < lVar10) {
          lVar10 = lVar9;
        }
        if (lVar10 < 2) {
          *param_2 = (char)uVar8;
          param_2 = param_2 + 1;
          lVar11 = lVar11 + 1;
          pbVar7 = (byte *)plVar2[3];
          if ((byte *)plVar2[2] < pbVar7) {
            pbVar6 = (byte *)plVar2[2] + 1;
            plVar2[2] = (long)pbVar6;
LAB_006c5f7b:
            if (pbVar7 <= pbVar6) {
              uVar8 = (**(code **)(*plVar2 + 0x48))(plVar2);
              goto LAB_006c5fe6;
            }
            bVar1 = *pbVar6;
            goto LAB_006c5ed3;
          }
          iVar4 = (**(code **)(*plVar2 + 0x50))(plVar2);
          if (iVar4 != -1) {
            pbVar6 = (byte *)plVar2[2];
            pbVar7 = (byte *)plVar2[3];
            goto LAB_006c5f7b;
          }
          local_68 = param_2;
          if (local_70 <= lVar11) {
LAB_006c5ede:
            *param_2 = 0;
            *(undefined8 *)((long)param_1 + *(long *)(*param_1 + -0x18) + 0x10) = 0;
            goto LAB_006c5f14;
          }
          break;
        }
        pbVar7 = (byte *)(lVar3 + 1);
        if (pbVar7 < (byte *)(lVar10 + lVar3)) {
          do {
            if ((*(byte *)(*(long *)(lVar5 + 0x30) + 1 + (ulong)*pbVar7 * 2) & 0x20) != 0) break;
            pbVar7 = pbVar7 + 1;
          } while ((byte *)(lVar10 + lVar3) != pbVar7);
          lVar10 = (long)pbVar7 - lVar3;
          if (lVar10 != 0) goto LAB_006c5fa0;
          plVar2[2] = (long)pbVar7;
          if ((byte *)plVar2[3] <= pbVar7) goto LAB_006c5fdd;
LAB_006c5ed0:
          bVar1 = *pbVar7;
LAB_006c5ed3:
          uVar8 = (ulong)bVar1;
          if (local_70 <= lVar11) goto LAB_006c5ede;
          goto LAB_006c5e48;
        }
        lVar10 = 1;
LAB_006c5fa0:
        thunk_FUN_00713a50(param_2,lVar3);
        pbVar7 = (byte *)(plVar2[2] + lVar10);
        param_2 = param_2 + lVar10;
        plVar2[2] = (long)pbVar7;
        lVar11 = lVar11 + lVar10;
        if (pbVar7 < (byte *)plVar2[3]) goto LAB_006c5ed0;
LAB_006c5fdd:
                    /* try { // try from 006c5fe3 to 006c6088 has its CatchHandler @ 006c6123 */
        uVar8 = (**(code **)(*plVar2 + 0x48))(plVar2);
LAB_006c5fe6:
        if (local_70 <= lVar11) goto LAB_006c5ede;
        local_68 = param_2;
      } while ((int)uVar8 != -1);
      *local_68 = 0;
      lVar5 = *param_1;
      uVar12 = (-(uint)(lVar11 == 0) & 4) + 2;
      *(undefined8 *)((long)param_1 + *(long *)(lVar5 + -0x18) + 0x10) = 0;
      goto LAB_006c5f05;
    }
  }
  else {
                    /* try { // try from 006c6099 to 006c609b has its CatchHandler @ 006c6105 */
    uVar8 = (**(code **)(*plVar2 + 0x48))(plVar2);
    if (0 < lVar13 + -1) {
      if ((int)uVar8 == -1) {
        *param_2 = 0;
        lVar5 = *param_1;
        uVar12 = 6;
        *(undefined8 *)((long)param_1 + *(long *)(lVar5 + -0x18) + 0x10) = 0;
        goto LAB_006c5f05;
      }
      goto LAB_006c5e40;
    }
  }
  *param_2 = 0;
  lVar5 = *param_1;
  uVar12 = 4;
  *(undefined8 *)((long)param_1 + *(long *)(lVar5 + -0x18) + 0x10) = 0;
LAB_006c5f05:
  lVar5 = *(long *)(lVar5 + -0x18) + (long)param_1;
  FUN_0066ec40(lVar5,uVar12 | *(uint *)(lVar5 + 0x20));
LAB_006c5f14:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    FUN_00771f60();
  }
  return;
}


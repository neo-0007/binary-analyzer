
long * FUN_006c5a50(long *param_1,long param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  byte *pbVar6;
  long lVar7;
  byte *pbVar8;
  char cVar9;
  long in_FS_OFFSET;
  char local_41;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_3 == 0xffffffff) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      plVar3 = (long *)FUN_006ca1e0();
      return plVar3;
    }
    goto LAB_006c5d3e;
  }
  param_1[1] = 0;
  FUN_00672120(&local_41,param_1,1);
  if ((0 < param_2) && (local_41 != '\0')) {
    plVar3 = *(long **)((long)param_1 + *(long *)(*param_1 + -0x18) + 0xe8);
    if ((byte *)plVar3[2] < (byte *)plVar3[3]) {
      uVar1 = (uint)*(byte *)plVar3[2];
    }
    else {
      uVar1 = (**(code **)(*plVar3 + 0x48))(plVar3);
    }
    cVar9 = '\0';
LAB_006c5b38:
    do {
      lVar7 = param_1[1];
      while (lVar7 < param_2) {
        if (uVar1 == 0xffffffff) {
          if (param_2 == 0x7fffffffffffffff) {
LAB_006c5c2f:
            if (cVar9 != '\0') {
              param_1[1] = 0x7fffffffffffffff;
            }
          }
          goto LAB_006c5c43;
        }
        if (uVar1 == param_3) {
          if (param_2 == 0x7fffffffffffffff) goto LAB_006c5c6f;
          goto LAB_006c5cc4;
        }
        pbVar8 = (byte *)plVar3[3];
        pbVar6 = (byte *)plVar3[2];
        lVar5 = param_2 - lVar7;
        if ((long)pbVar8 - (long)pbVar6 < param_2 - lVar7) {
          lVar5 = (long)pbVar8 - (long)pbVar6;
        }
        if (lVar5 < 2) {
          param_1[1] = lVar7 + 1;
          if (pbVar6 < pbVar8) {
            pbVar6 = pbVar6 + 1;
            plVar3[2] = (long)pbVar6;
          }
          else {
            iVar2 = (**(code **)(*plVar3 + 0x50))(plVar3);
            if (iVar2 == -1) {
              if (param_2 == 0x7fffffffffffffff) goto LAB_006c5c2f;
              if (param_2 <= param_1[1]) goto LAB_006c5aa9;
              goto LAB_006c5c43;
            }
            pbVar6 = (byte *)plVar3[2];
            pbVar8 = (byte *)plVar3[3];
          }
          if (pbVar8 <= pbVar6) goto LAB_006c5ca7;
        }
        else {
          lVar4 = thunk_FUN_007134f0(pbVar6,(int)(char)param_3);
          if (lVar4 != 0) {
            lVar5 = lVar4 - (long)pbVar6;
          }
          pbVar6 = pbVar6 + lVar5;
          plVar3[2] = (long)pbVar6;
          param_1[1] = lVar5 + lVar7;
          if (pbVar8 <= pbVar6) {
LAB_006c5ca7:
                    /* try { // try from 006c5cad to 006c5d38 has its CatchHandler @ 006c5d63 */
            uVar1 = (**(code **)(*plVar3 + 0x48))(plVar3);
            goto LAB_006c5b38;
          }
        }
        uVar1 = (uint)*pbVar6;
        lVar7 = param_1[1];
      }
      if (param_2 != 0x7fffffffffffffff) break;
      if (uVar1 == 0xffffffff) {
        if (cVar9 != '\0') {
          param_1[1] = 0x7fffffffffffffff;
        }
LAB_006c5c43:
        lVar7 = *(long *)(*param_1 + -0x18) + (long)param_1;
        FUN_0066ec40(lVar7,*(uint *)(lVar7 + 0x20) | 2);
        break;
      }
      if (uVar1 == param_3) goto LAB_006c5c6f;
      param_1[1] = -0x8000000000000000;
      cVar9 = local_41;
    } while( true );
  }
  goto LAB_006c5aa9;
LAB_006c5c6f:
  if (cVar9 == '\0') {
    if (lVar7 != 0x7fffffffffffffff) {
LAB_006c5cc4:
      param_1[1] = lVar7 + 1;
    }
  }
  else {
    param_1[1] = 0x7fffffffffffffff;
  }
  if ((ulong)plVar3[2] < (ulong)plVar3[3]) {
    plVar3[2] = plVar3[2] + 1;
  }
  else {
    (**(code **)(*plVar3 + 0x50))(plVar3);
  }
LAB_006c5aa9:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
LAB_006c5d3e:
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}



long * FUN_006ca1e0(long *param_1,long param_2)

{
  int iVar1;
  uint uVar2;
  long *plVar3;
  byte *pbVar4;
  long lVar5;
  byte *pbVar6;
  long lVar7;
  char cVar8;
  long in_FS_OFFSET;
  char local_41;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_2 == 1) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      plVar3 = (long *)FUN_006730a0();
      return plVar3;
    }
    goto LAB_006ca415;
  }
  param_1[1] = 0;
  FUN_00672120(&local_41,param_1,1);
  if ((0 < param_2) && (local_41 != '\0')) {
    plVar3 = *(long **)((long)param_1 + *(long *)(*param_1 + -0x18) + 0xe8);
    if ((byte *)plVar3[2] < (byte *)plVar3[3]) {
      uVar2 = (uint)*(byte *)plVar3[2];
    }
    else {
      uVar2 = (**(code **)(*plVar3 + 0x48))(plVar3);
    }
    cVar8 = '\0';
LAB_006ca2c0:
    do {
      lVar7 = param_1[1];
      while (lVar7 < param_2) {
        if (uVar2 == 0xffffffff) {
LAB_006ca370:
          if (param_2 == 0x7fffffffffffffff) goto LAB_006ca3f0;
          goto LAB_006ca37f;
        }
        pbVar6 = (byte *)plVar3[3];
        pbVar4 = (byte *)plVar3[2];
        lVar5 = param_2 - lVar7;
        if ((long)pbVar6 - (long)pbVar4 < param_2 - lVar7) {
          lVar5 = (long)pbVar6 - (long)pbVar4;
        }
        if (lVar5 < 2) {
          param_1[1] = lVar7 + 1;
          if (pbVar4 < pbVar6) {
            pbVar4 = pbVar4 + 1;
            plVar3[2] = (long)pbVar4;
          }
          else {
                    /* try { // try from 006ca357 to 006ca359 has its CatchHandler @ 006ca430 */
            iVar1 = (**(code **)(*plVar3 + 0x50))(plVar3);
            if (iVar1 == -1) {
              lVar7 = param_1[1];
              goto LAB_006ca370;
            }
            pbVar4 = (byte *)plVar3[2];
            pbVar6 = (byte *)plVar3[3];
          }
          if (pbVar6 <= pbVar4) goto LAB_006ca3d7;
        }
        else {
          pbVar4 = pbVar4 + lVar5;
          plVar3[2] = (long)pbVar4;
          param_1[1] = lVar7 + lVar5;
          if (pbVar6 <= pbVar4) {
LAB_006ca3d7:
                    /* try { // try from 006ca3de to 006ca40f has its CatchHandler @ 006ca430 */
            uVar2 = (**(code **)(*plVar3 + 0x48))(plVar3);
            goto LAB_006ca2c0;
          }
        }
        uVar2 = (uint)*pbVar4;
        lVar7 = param_1[1];
      }
      if (param_2 != 0x7fffffffffffffff) {
        local_41 = uVar2 == 0xffffffff;
LAB_006ca37f:
        if ((param_2 <= lVar7) || (local_41 == '\0')) break;
        goto LAB_006ca398;
      }
      if (uVar2 == 0xffffffff) goto LAB_006ca3f0;
      param_1[1] = -0x8000000000000000;
      cVar8 = local_41;
    } while( true );
  }
  goto LAB_006ca238;
LAB_006ca3f0:
  if (cVar8 != '\0') {
    param_1[1] = 0x7fffffffffffffff;
  }
LAB_006ca398:
  lVar7 = *(long *)(*param_1 + -0x18) + (long)param_1;
  FUN_0066ec40(lVar7,*(uint *)(lVar7 + 0x20) | 2);
LAB_006ca238:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
LAB_006ca415:
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}



ulong * FUN_0063cfa0(ulong *param_1,ulong param_2,ulong param_3,ulong param_4,ulong param_5)

{
  int *piVar1;
  undefined4 *puVar2;
  ulong uVar3;
  ulong uVar4;
  int iVar5;
  ulong *puVar6;
  long lVar7;
  undefined4 *puVar8;
  ulong uVar9;
  long in_FS_OFFSET;
  undefined1 local_39;
  long local_38;
  long local_30;
  
  uVar3 = *param_1;
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  uVar4 = *(ulong *)(uVar3 - 0x18);
  if (uVar4 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_0066ea20("%s: __pos (which is %zu) > this->size() (which is %zu)","basic_string::replace",
                 param_2,uVar4);
  }
  uVar9 = uVar4 - param_2;
  if (param_3 < uVar4 - param_2) {
    uVar9 = param_3;
  }
  if ((0xffffffffffffffe - uVar4) + uVar9 < param_5) {
                    /* WARNING: Subroutine does not return */
    FUN_00403998("basic_string::replace");
  }
  if (((param_4 < uVar3) || (uVar3 + uVar4 * 4 < param_4)) || (0 < *(int *)(uVar3 - 8))) {
    if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
      puVar6 = (ulong *)FUN_0063ba70(param_1,param_2,uVar9);
      return puVar6;
    }
    goto LAB_0063d17c;
  }
  uVar4 = *param_1;
  uVar3 = param_4 + param_5 * 4;
  if (uVar4 + param_2 * 4 < uVar3) {
    if (uVar4 + (param_2 + uVar9) * 4 <= param_4) {
      lVar7 = (((long)(param_4 - uVar4) >> 2) + param_5) - uVar9;
      goto LAB_0063d078;
    }
    lVar7 = FUN_0063cec0(param_4,uVar3,&local_39);
    local_38 = lVar7;
                    /* try { // try from 0063d0fe to 0063d102 has its CatchHandler @ 0063d1a6 */
    param_1 = (ulong *)FUN_0063ba70(param_1,param_2,uVar9,lVar7,param_5);
    if ((undefined8 *)(lVar7 + -0x18) != &DAT_009452c0) {
      if (DAT_0093ea10 == '\0') {
        LOCK();
        piVar1 = (int *)(lVar7 + -8);
        iVar5 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
      }
      else {
        iVar5 = *(int *)(lVar7 + -8);
        *(int *)(lVar7 + -8) = iVar5 + -1;
      }
      if (iVar5 < 1) {
        thunk_FUN_007104f0((undefined8 *)(lVar7 + -0x18),&local_39);
      }
    }
  }
  else {
    lVar7 = (long)(param_4 - uVar4) >> 2;
LAB_0063d078:
    FUN_0063b2f0(param_1,param_2,uVar9,param_5);
    puVar2 = (undefined4 *)(*param_1 + lVar7 * 4);
    puVar8 = (undefined4 *)(*param_1 + param_2 * 4);
    if (param_5 == 1) {
      *puVar8 = *puVar2;
    }
    else if (param_5 != 0) {
      FUN_00771ea0(puVar8,puVar2,param_5,0x3fffffffffffffff);
    }
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
LAB_0063d17c:
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}


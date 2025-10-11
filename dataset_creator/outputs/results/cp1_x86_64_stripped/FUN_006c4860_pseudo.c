
void FUN_006c4860(long *param_1,long param_2,undefined8 *param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  
  lVar2 = param_1[1];
  lVar3 = *param_1;
  uVar4 = lVar2 - lVar3 >> 3;
  if (uVar4 == 0xfffffffffffffff) {
                    /* WARNING: Subroutine does not return */
    FUN_00403998("vector::_M_realloc_insert");
  }
  uVar7 = 1;
  if (uVar4 != 0) {
    uVar7 = uVar4;
  }
  uVar5 = uVar4 + uVar7;
  if (CARRY8(uVar4,uVar7)) {
    lVar8 = 0x7ffffffffffffff8;
LAB_006c497a:
    lVar6 = FUN_006c31f0(lVar8);
    lVar8 = lVar8 + lVar6;
  }
  else {
    if (uVar5 != 0) {
      if (0xfffffffffffffff < uVar5) {
        uVar5 = 0xfffffffffffffff;
      }
      lVar8 = uVar5 * 8;
      goto LAB_006c497a;
    }
    lVar8 = 0;
    lVar6 = 0;
  }
  lVar1 = lVar6 + 8 + (param_2 - lVar3);
  *(undefined8 *)(lVar6 + (param_2 - lVar3)) = *param_3;
  if (param_2 == lVar3) {
    if (param_2 != lVar2) goto LAB_006c490d;
LAB_006c4923:
    if (lVar3 == 0) goto LAB_006c4928;
  }
  else {
    lVar6 = thunk_FUN_00713610(lVar6,lVar3);
    if (param_2 != lVar2) {
LAB_006c490d:
      thunk_FUN_00713a50(lVar1,param_2,lVar2 - param_2);
      goto LAB_006c4923;
    }
  }
  thunk_FUN_007104f0(lVar3);
LAB_006c4928:
  *param_1 = lVar6;
  param_1[1] = lVar1 + (lVar2 - param_2);
  param_1[2] = lVar8;
  return;
}


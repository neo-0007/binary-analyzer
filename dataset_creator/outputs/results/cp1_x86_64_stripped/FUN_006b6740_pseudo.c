
undefined8 *
FUN_006b6740(undefined8 *param_1,long param_2,ulong param_3,undefined8 *param_4,ulong param_5)

{
  ulong uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined8 *puVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  bool bVar8;
  bool bVar9;
  
  lVar7 = param_1[1];
  if ((param_3 + 0xfffffffffffffff) - lVar7 < param_5) {
                    /* WARNING: Subroutine does not return */
    FUN_00403998("basic_string::_M_replace");
  }
  puVar4 = (undefined8 *)*param_1;
  uVar1 = lVar7 + (param_5 - param_3);
  if (puVar4 == param_1 + 2) {
    uVar5 = 3;
  }
  else {
    uVar5 = param_1[2];
  }
  if (uVar5 < uVar1) {
    FUN_006b5810(param_1,param_2,param_3,param_4);
    goto LAB_006b67e1;
  }
  puVar2 = (undefined4 *)((long)puVar4 + param_2 * 4);
  lVar6 = lVar7 - (param_2 + param_3);
  bVar8 = lVar6 == 0;
  bVar9 = param_3 == param_5;
  if ((param_4 < puVar4) || ((undefined8 *)((long)puVar4 + lVar7 * 4) < param_4)) {
    if (!bVar8 && !bVar9) {
      if (lVar6 == 1) {
        puVar2[param_5] = puVar2[param_3];
      }
      else {
        FUN_00771ed0(puVar2 + param_5,puVar2 + param_3,lVar6,0x3fffffffffffffff);
      }
    }
    if (param_5 != 0) {
      if (param_5 == 1) {
LAB_006b689e:
        *puVar2 = *(undefined4 *)param_4;
        puVar4 = (undefined8 *)*param_1;
        goto LAB_006b67e5;
      }
      FUN_00771ea0(puVar2,param_4,param_5,0x3fffffffffffffff);
    }
  }
  else {
    if (param_5 - 1 < param_3) {
      if (param_5 == 1) {
        *puVar2 = *(undefined4 *)param_4;
        goto LAB_006b682a;
      }
      if (param_5 != 0) {
        FUN_00771ed0(puVar2,param_4,param_5,0x3fffffffffffffff);
        goto LAB_006b682a;
      }
      if (bVar8 || bVar9) goto LAB_006b67e5;
LAB_006b682f:
      if (lVar6 == 1) {
        puVar2[param_5] = puVar2[param_3];
      }
      else {
        FUN_00771ed0(puVar2 + param_5,puVar2 + param_3,lVar6,0x3fffffffffffffff);
      }
    }
    else {
LAB_006b682a:
      if (!bVar8 && !bVar9) goto LAB_006b682f;
    }
    if (param_3 < param_5) {
      puVar4 = (undefined8 *)(puVar2 + param_3);
      if (puVar4 < (undefined8 *)((long)param_4 + param_5 * 4)) {
        if (param_4 < puVar4) {
          lVar7 = (long)puVar4 - (long)param_4 >> 2;
          if (lVar7 == 1) {
            *puVar2 = *(undefined4 *)param_4;
          }
          else if (lVar7 != 0) {
            FUN_00771ed0(puVar2,param_4,lVar7,0x3fffffffffffffff);
          }
          lVar7 = param_5 - lVar7;
          puVar3 = (undefined4 *)((long)puVar2 + ((long)puVar4 - (long)param_4));
          if (lVar7 == 1) {
            *puVar3 = puVar2[param_5];
            puVar4 = (undefined8 *)*param_1;
            goto LAB_006b67e5;
          }
          if (lVar7 != 0) {
            FUN_00771ea0(puVar3,puVar2 + param_5,lVar7,0x3fffffffffffffff);
            puVar4 = (undefined8 *)*param_1;
            goto LAB_006b67e5;
          }
        }
        else {
          if (param_5 == 1) {
            *puVar2 = puVar2[((long)param_4 - (long)puVar2 >> 2) + (param_5 - param_3)];
            puVar4 = (undefined8 *)*param_1;
            goto LAB_006b67e5;
          }
          if (param_5 != 0) {
            FUN_00771ea0(puVar2,puVar2 + ((long)param_4 - (long)puVar2 >> 2) + (param_5 - param_3),
                         param_5,0x3fffffffffffffff);
            puVar4 = (undefined8 *)*param_1;
            goto LAB_006b67e5;
          }
        }
      }
      else {
        if (param_5 == 1) goto LAB_006b689e;
        if (param_5 != 0) {
          FUN_00771ed0(puVar2,param_4,param_5,0x3fffffffffffffff);
          puVar4 = (undefined8 *)*param_1;
          goto LAB_006b67e5;
        }
      }
    }
  }
LAB_006b67e1:
  puVar4 = (undefined8 *)*param_1;
LAB_006b67e5:
  param_1[1] = uVar1;
  *(undefined4 *)((long)puVar4 + uVar1 * 4) = 0;
  return param_1;
}



undefined8 *
FUN_0069f220(undefined8 *param_1,long param_2,ulong param_3,undefined8 *param_4,ulong param_5)

{
  ulong uVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  ulong uVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  bool bVar8;
  bool bVar9;
  
  lVar7 = param_1[1];
  if ((param_3 + 0x3fffffffffffffff) - lVar7 < param_5) {
                    /* WARNING: Subroutine does not return */
    FUN_00403998("basic_string::_M_replace");
  }
  puVar6 = (undefined8 *)*param_1;
  uVar1 = lVar7 + (param_5 - param_3);
  if (puVar6 == param_1 + 2) {
    uVar4 = 0xf;
  }
  else {
    uVar4 = param_1[2];
  }
  if (uVar4 < uVar1) {
    FUN_0069e300(param_1,param_2,param_3,param_4);
  }
  else {
    puVar3 = (undefined1 *)((long)puVar6 + param_2);
    bVar8 = param_3 == param_5;
    lVar5 = lVar7 - (param_2 + param_3);
    bVar9 = lVar5 == 0;
    if ((param_4 < puVar6) || ((undefined8 *)(lVar7 + (long)puVar6) < param_4)) {
      if (!bVar8 && !bVar9) {
        if (lVar5 == 1) {
          puVar3[param_5] = puVar3[param_3];
        }
        else {
          thunk_FUN_00713610(puVar3 + param_5,puVar3 + param_3,lVar5);
        }
      }
      if (param_5 == 0) goto LAB_0069f2d5;
      if (param_5 == 1) {
LAB_0069f350:
        *puVar3 = *(undefined1 *)param_4;
        puVar6 = (undefined8 *)*param_1;
        goto LAB_0069f2d9;
      }
LAB_0069f32f:
      thunk_FUN_00713a50(puVar3,param_4,param_5);
    }
    else {
      if (param_5 - 1 < param_3) {
        if (param_5 == 1) {
          *puVar3 = *(undefined1 *)param_4;
          goto LAB_0069f387;
        }
        if (param_5 != 0) {
          puVar3 = (undefined1 *)thunk_FUN_00713610(puVar3,param_4,param_5);
          goto LAB_0069f387;
        }
        if (bVar8 || bVar9) goto LAB_0069f2d9;
LAB_0069f38c:
        if (lVar5 == 1) {
          puVar3[param_5] = puVar3[param_3];
        }
        else {
          thunk_FUN_00713610(puVar3 + param_5,puVar3 + param_3,lVar5);
        }
      }
      else {
LAB_0069f387:
        if (!bVar8 && !bVar9) goto LAB_0069f38c;
      }
      if (param_3 < param_5) {
        puVar6 = (undefined8 *)(puVar3 + param_3);
        if (puVar6 < (undefined8 *)((long)param_4 + param_5)) {
          if (param_4 < puVar6) {
            lVar7 = (long)puVar6 - (long)param_4;
            if (lVar7 == 1) {
              *puVar3 = *(undefined1 *)param_4;
            }
            else if (lVar7 != 0) {
              puVar3 = (undefined1 *)thunk_FUN_00713610(puVar3,param_4,lVar7);
            }
            param_4 = (undefined8 *)(puVar3 + param_5);
            puVar3 = puVar3 + lVar7;
            param_5 = param_5 - lVar7;
            if (param_5 == 1) {
              *puVar3 = *(undefined1 *)param_4;
              puVar6 = (undefined8 *)*param_1;
              goto LAB_0069f2d9;
            }
            if (param_5 != 0) goto LAB_0069f32f;
          }
          else {
            puVar2 = (undefined1 *)((long)param_4 + (param_5 - param_3));
            if (param_5 == 1) {
              *puVar3 = *puVar2;
              puVar6 = (undefined8 *)*param_1;
              goto LAB_0069f2d9;
            }
            if (param_5 != 0) {
              thunk_FUN_00713a50(puVar3,puVar2,param_5);
              puVar6 = (undefined8 *)*param_1;
              goto LAB_0069f2d9;
            }
          }
        }
        else {
          if (param_5 == 1) goto LAB_0069f350;
          if (param_5 != 0) {
            thunk_FUN_00713610(puVar3,param_4,param_5);
            puVar6 = (undefined8 *)*param_1;
            goto LAB_0069f2d9;
          }
        }
      }
    }
  }
LAB_0069f2d5:
  puVar6 = (undefined8 *)*param_1;
LAB_0069f2d9:
  param_1[1] = uVar1;
  *(undefined1 *)((long)puVar6 + uVar1) = 0;
  return param_1;
}


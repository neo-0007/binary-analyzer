
ulong * FUN_0063bcf0(ulong *param_1,ulong param_2,ulong param_3,ulong param_4)

{
  undefined4 *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong *puVar4;
  long lVar5;
  long lVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  
  uVar2 = *param_1;
  uVar3 = *(ulong *)(uVar2 - 0x18);
  if (uVar3 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_0066ea20("%s: __pos (which is %zu) > this->size() (which is %zu)","basic_string::insert",
                 param_2,uVar3);
  }
  if (param_4 <= 0xffffffffffffffe - uVar3) {
    if (((uVar2 <= param_3) && (param_3 <= uVar2 + uVar3 * 4)) && (*(int *)(uVar2 - 8) < 1)) {
      uVar2 = *param_1;
      FUN_0063b2f0(param_1,param_2,0,param_4);
      puVar8 = (undefined4 *)(*param_1 + (param_3 - uVar2));
      puVar7 = (undefined4 *)(*param_1 + param_2 * 4);
      puVar1 = puVar8 + param_4;
      if (puVar7 < puVar1) {
        if (puVar8 < puVar7) {
          lVar6 = param_2 * 4 - (param_3 - uVar2);
          lVar5 = lVar6 >> 2;
          if (lVar5 == 1) {
            *puVar7 = *puVar8;
          }
          else if (lVar5 != 0) {
            FUN_00771ea0(puVar7,puVar8,lVar5,0x3fffffffffffffff);
          }
          lVar5 = param_4 - lVar5;
          puVar8 = (undefined4 *)((long)puVar7 + lVar6);
          if (lVar5 == 1) {
            *puVar8 = puVar7[param_4];
          }
          else if (lVar5 != 0) {
            FUN_00771ea0(puVar8,puVar7 + param_4,lVar5,0x3fffffffffffffff);
          }
        }
        else if (param_4 == 1) {
          *puVar7 = *puVar1;
        }
        else if (param_4 != 0) {
          FUN_00771ea0(puVar7,puVar1,param_4,0x3fffffffffffffff);
        }
      }
      else if (param_4 == 1) {
        *puVar7 = *puVar8;
      }
      else if (param_4 != 0) {
        FUN_00771ea0(puVar7,puVar8,param_4,0x3fffffffffffffff);
      }
      return param_1;
    }
    puVar4 = (ulong *)FUN_0063ba70(param_1,param_2,0,param_3);
    return puVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00403998("basic_string::insert");
}



ulong * FUN_006388a0(ulong *param_1,ulong param_2,ulong param_3,ulong param_4)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong *puVar5;
  undefined1 *puVar6;
  
  uVar3 = *param_1;
  uVar4 = *(ulong *)(uVar3 - 0x18);
  if (uVar4 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_0066ea20("%s: __pos (which is %zu) > this->size() (which is %zu)","basic_string::insert",
                 param_2);
  }
  if (param_4 <= 0x3ffffffffffffff9 - uVar4) {
    if (((uVar3 <= param_3) && (param_3 <= uVar4 + uVar3)) && (*(int *)(uVar3 - 8) < 1)) {
      uVar3 = *param_1;
      FUN_00637f00(param_1,param_2,0,param_4);
      puVar1 = (undefined1 *)(*param_1 + (param_3 - uVar3));
      puVar6 = (undefined1 *)(*param_1 + param_2);
      puVar2 = puVar1 + param_4;
      if (puVar6 < puVar2) {
        if (puVar1 < puVar6) {
          param_2 = param_2 - (param_3 - uVar3);
          if (param_2 == 1) {
            *puVar6 = *puVar1;
          }
          else if (param_2 != 0) {
            puVar6 = (undefined1 *)thunk_FUN_00713a50(puVar6,puVar1,param_2);
          }
          if (param_4 - param_2 == 1) {
            puVar6[param_2] = puVar6[param_4];
          }
          else if (param_4 != param_2) {
            thunk_FUN_00713a50();
          }
        }
        else if (param_4 == 1) {
          *puVar6 = *puVar2;
        }
        else if (param_4 != 0) {
          thunk_FUN_00713a50(puVar6,puVar2,param_4);
        }
      }
      else if (param_4 == 1) {
        *puVar6 = *puVar1;
      }
      else if (param_4 != 0) {
        thunk_FUN_00713a50(puVar6,puVar1,param_4);
      }
      return param_1;
    }
    puVar5 = (ulong *)FUN_00638630(param_1,param_2,0,param_3);
    return puVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00403998("basic_string::insert");
}


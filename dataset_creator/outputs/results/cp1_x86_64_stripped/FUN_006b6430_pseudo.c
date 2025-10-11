
long * FUN_006b6430(long *param_1,long param_2,ulong param_3,ulong param_4,undefined4 param_5)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  
  lVar4 = param_1[1];
  if (param_4 <= (param_3 + 0xfffffffffffffff) - lVar4) {
    plVar3 = (long *)*param_1;
    uVar5 = (param_4 - param_3) + lVar4;
    if (plVar3 == param_1 + 2) {
      uVar6 = 3;
    }
    else {
      uVar6 = param_1[2];
    }
    if (uVar6 < uVar5) {
      FUN_006b5810(param_1,param_2,param_3,0,param_4);
      plVar3 = (long *)*param_1;
    }
    else {
      lVar4 = lVar4 - (param_3 + param_2);
      if ((lVar4 != 0) && (param_3 != param_4)) {
        puVar1 = (undefined4 *)((long)plVar3 + param_3 * 4 + param_2 * 4);
        puVar2 = (undefined4 *)((long)plVar3 + param_4 * 4 + param_2 * 4);
        if (lVar4 == 1) {
          *puVar2 = *puVar1;
        }
        else {
          FUN_00771ed0(puVar2,puVar1,lVar4,0x3fffffffffffffff);
          plVar3 = (long *)*param_1;
        }
      }
    }
    if (param_4 != 0) {
      puVar1 = (undefined4 *)((long)plVar3 + param_2 * 4);
      if (param_4 == 1) {
        *puVar1 = param_5;
      }
      else {
        FUN_00771ff0(puVar1,param_5,param_4,0x3fffffffffffffff);
        plVar3 = (long *)*param_1;
      }
    }
    param_1[1] = uVar5;
    *(undefined4 *)((long)plVar3 + uVar5 * 4) = 0;
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00403998("basic_string::_M_replace_aux");
}


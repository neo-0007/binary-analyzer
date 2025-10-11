
long * FUN_0069ef10(long *param_1,long param_2,ulong param_3,ulong param_4,char param_5)

{
  undefined1 *puVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  undefined1 *puVar5;
  long *plVar6;
  
  lVar3 = param_1[1];
  if (param_4 <= (param_3 + 0x3fffffffffffffff) - lVar3) {
    plVar6 = (long *)*param_1;
    uVar4 = (param_4 - param_3) + lVar3;
    if (plVar6 == param_1 + 2) {
      uVar2 = 0xf;
    }
    else {
      uVar2 = param_1[2];
    }
    if (uVar2 < uVar4) {
      FUN_0069e300(param_1,param_2,param_3,0,param_4);
      plVar6 = (long *)*param_1;
    }
    else {
      lVar3 = lVar3 - (param_3 + param_2);
      if ((lVar3 != 0) && (param_3 != param_4)) {
        puVar1 = (undefined1 *)((long)plVar6 + param_3 + param_2);
        puVar5 = (undefined1 *)((long)plVar6 + param_4 + param_2);
        if (lVar3 == 1) {
          *puVar5 = *puVar1;
          plVar6 = (long *)*param_1;
        }
        else {
          thunk_FUN_00713610(puVar5,puVar1,lVar3);
          plVar6 = (long *)*param_1;
        }
      }
    }
    if (param_4 != 0) {
      if (param_4 == 1) {
        *(char *)((long)plVar6 + param_2) = param_5;
        plVar6 = (long *)*param_1;
      }
      else {
        thunk_FUN_00713720((char *)((long)plVar6 + param_2),(int)param_5,param_4);
        plVar6 = (long *)*param_1;
      }
    }
    param_1[1] = uVar4;
    *(undefined1 *)((long)plVar6 + uVar4) = 0;
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00403998("basic_string::_M_replace_aux");
}


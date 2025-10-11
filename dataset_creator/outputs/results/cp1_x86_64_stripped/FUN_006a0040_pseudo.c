
ulong FUN_006a0040(long *param_1,char *param_2,ulong param_3,ulong param_4)

{
  char cVar1;
  ulong uVar2;
  long lVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  
  uVar2 = param_1[1];
  if (param_4 == 0) {
    uVar7 = 0xffffffffffffffff;
    if (param_3 <= uVar2) {
      uVar7 = param_3;
    }
  }
  else {
    uVar7 = 0xffffffffffffffff;
    if (param_3 < uVar2) {
      lVar3 = *param_1;
      lVar6 = lVar3 + param_3;
      if (param_4 <= uVar2 - param_3) {
        lVar5 = (uVar2 - param_3) + (1 - param_4);
        if (lVar5 != 0) {
          cVar1 = *param_2;
          while (lVar6 = thunk_FUN_007134f0(lVar6,(int)cVar1,lVar5), lVar6 != 0) {
            iVar4 = thunk_FUN_00713570(lVar6,param_2,param_4);
            if (iVar4 == 0) {
              return lVar6 - lVar3;
            }
            lVar6 = lVar6 + 1;
            uVar7 = (lVar3 + uVar2) - lVar6;
            if (uVar7 < param_4) {
              return 0xffffffffffffffff;
            }
            lVar5 = uVar7 + (1 - param_4);
            if (lVar5 == 0) {
              return 0xffffffffffffffff;
            }
          }
        }
      }
      return 0xffffffffffffffff;
    }
  }
  return uVar7;
}


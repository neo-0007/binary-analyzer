
ulong FUN_00637220(long *param_1,char *param_2,ulong param_3,ulong param_4)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  
  lVar2 = *param_1;
  uVar3 = *(ulong *)(lVar2 + -0x18);
  if (param_4 == 0) {
    uVar7 = 0xffffffffffffffff;
    if (param_3 <= uVar3) {
      uVar7 = param_3;
    }
  }
  else {
    uVar7 = 0xffffffffffffffff;
    if (param_3 < uVar3) {
      lVar6 = lVar2 + param_3;
      if (param_4 <= uVar3 - param_3) {
        lVar5 = (uVar3 - param_3) + (1 - param_4);
        if (lVar5 != 0) {
          cVar1 = *param_2;
          while (lVar6 = thunk_FUN_007134f0(lVar6,(int)cVar1,lVar5), lVar6 != 0) {
            iVar4 = thunk_FUN_00713570(lVar6,param_2,param_4);
            if (iVar4 == 0) {
              return lVar6 - lVar2;
            }
            lVar6 = lVar6 + 1;
            uVar7 = (lVar2 + uVar3) - lVar6;
            if ((uVar7 < param_4) || (lVar5 = uVar7 + (1 - param_4), lVar5 == 0)) break;
          }
          uVar7 = 0xffffffffffffffff;
        }
      }
    }
  }
  return uVar7;
}


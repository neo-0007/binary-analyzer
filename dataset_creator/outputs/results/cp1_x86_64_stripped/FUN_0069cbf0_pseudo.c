
long FUN_0069cbf0(long *param_1,undefined1 *param_2,long param_3)

{
  code *pcVar1;
  int iVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  if (param_3 < 1) {
    return 0;
  }
  lVar6 = 0;
  do {
    lVar4 = param_1[3] - param_1[2];
    if (lVar4 != 0) {
      lVar5 = param_3 - lVar6;
      if (lVar4 < param_3 - lVar6) {
        lVar5 = lVar4;
      }
      lVar6 = lVar6 + lVar5;
      lVar4 = thunk_FUN_00713a50(param_2,param_1[2],lVar5);
      param_1[2] = param_1[2] + lVar5;
      if (param_3 <= lVar6) {
        return lVar6;
      }
      param_2 = (undefined1 *)(lVar5 + lVar4);
    }
    pcVar1 = *(code **)(*param_1 + 0x50);
    if (pcVar1 == FUN_0069cb50) {
      pcVar1 = *(code **)(*param_1 + 0x48);
      if (pcVar1 == FUN_0069c950) {
        return lVar6;
      }
      iVar2 = (*pcVar1)(param_1);
      if (iVar2 == -1) {
        return lVar6;
      }
      uVar3 = (uint)*(byte *)param_1[2];
      param_1[2] = (long)((byte *)param_1[2] + 1);
    }
    else {
      uVar3 = (*pcVar1)(param_1);
      if (uVar3 == 0xffffffff) {
        return lVar6;
      }
    }
    lVar6 = lVar6 + 1;
    *param_2 = (char)uVar3;
    param_2 = param_2 + 1;
    if (param_3 <= lVar6) {
      return lVar6;
    }
  } while( true );
}



int FUN_005fbf80(undefined8 param_1,long param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  long lVar4;
  int iVar5;
  int local_44;
  
  piVar3 = (int *)FUN_004ab640();
  lVar4 = FUN_004ac470(param_1);
  if ((piVar3 != (int *)0x0) && (lVar4 != 0)) {
    FUN_004ab6c0(param_1,0xf);
    iVar2 = piVar3[1];
    for (iVar5 = *piVar3 - iVar2; 0 < iVar5; iVar5 = iVar5 - iVar1) {
      iVar1 = FUN_004ab7e0(lVar4,(long)piVar3 + (long)iVar2 + 0x30,iVar5);
      if (iVar1 < 1) {
        FUN_004ac5f0(param_1);
        return iVar1;
      }
      iVar2 = piVar3[1] + iVar1;
      piVar3[1] = iVar2;
    }
    if ((param_2 != 0) && (0 < param_3)) {
      piVar3[1] = 0;
      local_44 = param_3;
      do {
        iVar2 = 0x1000;
        if (local_44 < 0x1001) {
          iVar2 = local_44;
        }
        iVar5 = FUN_005366f0(*(undefined8 *)(piVar3 + 6),piVar3 + 0xc,piVar3,param_2);
        if (iVar5 == 0) {
          FUN_004ab6c0(param_1,0xf);
          piVar3[4] = 0;
          return 0;
        }
        local_44 = local_44 - iVar2;
        iVar5 = *piVar3;
        iVar1 = 0;
        piVar3[1] = 0;
        param_2 = param_2 + iVar2;
        for (; 0 < iVar5; iVar5 = iVar5 - iVar2) {
          iVar2 = FUN_004ab7e0(lVar4,(long)piVar3 + (long)iVar1 + 0x30,iVar5);
          if (iVar2 < 1) {
            FUN_004ac5f0(param_1);
            if (param_3 != local_44) {
              iVar2 = param_3 - local_44;
            }
            return iVar2;
          }
          iVar1 = iVar2 + piVar3[1];
          piVar3[1] = iVar1;
        }
        piVar3[0] = 0;
        piVar3[1] = 0;
      } while (0 < local_44);
      FUN_004ac5f0(param_1);
      return param_3;
    }
  }
  return 0;
}


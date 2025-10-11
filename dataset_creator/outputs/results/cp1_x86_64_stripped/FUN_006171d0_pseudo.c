
int FUN_006171d0(long param_1,long param_2,int param_3)

{
  int iVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  lVar2 = *(long *)(param_1 + 0x40);
  if (lVar2 == 0) {
    iVar4 = 0;
  }
  else {
    iVar7 = 0;
    iVar4 = iVar7;
    if (*(long *)(param_1 + 0x48) != 0) {
      FUN_004ab6c0(param_1,0xf);
      iVar1 = *(int *)(lVar2 + 0x20);
      iVar6 = *(int *)(lVar2 + 0x24);
      iVar3 = *(int *)(lVar2 + 4);
      iVar5 = iVar1 + iVar6;
      iVar8 = iVar3 - iVar5;
      iVar4 = param_3;
      if (iVar8 < param_3) {
        do {
          if (iVar1 != 0) {
            if (0 < iVar8) {
              param_3 = param_3 - iVar8;
              iVar7 = iVar7 + iVar8;
              thunk_FUN_00713a50((long)iVar5 + *(long *)(lVar2 + 0x18),param_2);
              iVar6 = *(int *)(lVar2 + 0x24);
              param_2 = param_2 + iVar8;
              *(int *)(lVar2 + 0x20) = *(int *)(lVar2 + 0x20) + iVar8;
            }
            do {
              iVar4 = FUN_004ab7e0(*(undefined8 *)(param_1 + 0x48),
                                   (long)iVar6 + *(long *)(lVar2 + 0x18));
              if (iVar4 < 1) {
                FUN_004ac5f0(param_1);
                if (iVar7 != 0) {
                  return iVar7;
                }
                if (iVar4 == 0) {
                  return 0;
                }
                return iVar4;
              }
              iVar6 = *(int *)(lVar2 + 0x24) + iVar4;
              iVar4 = *(int *)(lVar2 + 0x20) - iVar4;
              *(int *)(lVar2 + 0x24) = iVar6;
              *(int *)(lVar2 + 0x20) = iVar4;
            } while (iVar4 != 0);
            iVar3 = *(int *)(lVar2 + 4);
          }
          *(undefined4 *)(lVar2 + 0x24) = 0;
          while (iVar3 <= param_3) {
            iVar4 = FUN_004ab7e0(*(undefined8 *)(param_1 + 0x48),param_2,param_3);
            if (iVar4 < 1) {
              FUN_004ac5f0(param_1);
              if (iVar4 == 0) {
                return iVar7;
              }
              if (iVar7 != 0) {
                return iVar7;
              }
              return iVar4;
            }
            iVar7 = iVar7 + iVar4;
            param_2 = param_2 + iVar4;
            param_3 = param_3 - iVar4;
            if (param_3 == 0) {
              return iVar7;
            }
            iVar3 = *(int *)(lVar2 + 4);
          }
          iVar1 = *(int *)(lVar2 + 0x20);
          iVar6 = *(int *)(lVar2 + 0x24);
          iVar5 = iVar1 + iVar6;
          iVar8 = iVar3 - iVar5;
        } while (iVar8 < param_3);
        iVar4 = iVar7 + param_3;
      }
      thunk_FUN_00713a50((long)iVar5 + *(long *)(lVar2 + 0x18),param_2,(long)param_3);
      *(int *)(lVar2 + 0x20) = *(int *)(lVar2 + 0x20) + param_3;
    }
  }
  return iVar4;
}


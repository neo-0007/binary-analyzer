
undefined8 FUN_0059e2f0(long param_1,undefined8 param_2,undefined4 param_3)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  long lVar4;
  byte *pbVar5;
  int iVar6;
  byte bVar7;
  byte *pbVar8;
  
  if (param_1 == 0) {
    return 0;
  }
  iVar6 = 0;
  iVar3 = FUN_00436480(param_2);
  if (0 < iVar3) {
    do {
      lVar4 = FUN_004364a0(param_2,iVar6);
      pbVar8 = *(byte **)(lVar4 + 8);
      bVar7 = *pbVar8;
      pbVar5 = pbVar8;
      bVar1 = bVar7;
      if (bVar7 != 0) {
        do {
          pbVar5 = pbVar5 + 1;
          bVar2 = *pbVar5;
          if ((bVar1 < 0x3b) && ((0x400500000000000U >> ((ulong)bVar1 & 0x3f) & 1) != 0)) {
            if (bVar2 != 0) {
              pbVar8 = pbVar5;
              bVar7 = bVar2;
            }
            break;
          }
          bVar1 = bVar2;
        } while (bVar2 != 0);
        if (bVar7 == 0x2b) {
          pbVar8 = pbVar8 + 1;
        }
      }
      iVar3 = FUN_005aa0a0(param_1,pbVar8,param_3,*(undefined8 *)(lVar4 + 0x10),0xffffffff,
                           0xffffffff);
      if (iVar3 == 0) {
        return 0;
      }
      iVar6 = iVar6 + 1;
      iVar3 = FUN_00436480(param_2);
    } while (iVar6 < iVar3);
  }
  return 1;
}


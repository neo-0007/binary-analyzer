
uint FUN_005fd460(uint *param_1,long param_2,int *param_3,byte *param_4,int param_5)

{
  uint *puVar1;
  byte *pbVar2;
  byte bVar3;
  byte bVar4;
  int iVar5;
  long lVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  undefined *puVar10;
  
  puVar1 = param_1 + 2;
  uVar8 = *param_1;
  iVar7 = 0;
  if (((0 < (int)uVar8) && (iVar7 = 0, *(char *)((long)param_1 + (long)(int)uVar8 + 7) == '=')) &&
     (iVar7 = 1, uVar8 != 1)) {
    iVar7 = (*(char *)((long)param_1 + (long)(int)uVar8 + 6) == '=') + 1;
  }
  uVar9 = 0;
  if (param_5 != 0) {
    puVar10 = &DAT_0081a240;
    if ((param_1[0x17] & 2) == 0) {
      puVar10 = &DAT_0081a2c0;
    }
    if (0 < param_5) {
      pbVar2 = param_4 + param_5;
      param_5 = 0;
LAB_005fd502:
      bVar3 = *param_4;
      param_4 = param_4 + 1;
      if ((-1 < (char)bVar3) && (bVar4 = puVar10[bVar3], bVar4 != 0xff)) {
        if (bVar3 == 0x3d) {
          iVar7 = iVar7 + 1;
          if (iVar7 != 3) goto LAB_005fd538;
          goto LAB_005fd5f8;
        }
        if (iVar7 == 0) {
LAB_005fd538:
          if (bVar4 == 0xf2) goto LAB_005fd5e0;
          if ((bVar4 | 0x13) != 0xf3) {
            if (0x3f < (int)uVar8) goto LAB_005fd5f8;
            lVar6 = (long)(int)uVar8;
            uVar8 = uVar8 + 1;
            *(byte *)((long)puVar1 + lVar6) = bVar3;
          }
joined_r0x005fd565:
          if (uVar8 == 0x40) {
            iVar5 = FUN_005fcfb0(param_1,param_2,puVar1,0x40);
            if (iVar7 <= iVar5) {
              uVar8 = 0;
              param_5 = param_5 + (iVar5 - iVar7);
              param_2 = param_2 + (iVar5 - iVar7);
              goto joined_r0x005fd5a1;
            }
            goto LAB_005fd690;
          }
joined_r0x005fd5a1:
          if (param_4 == pbVar2) goto LAB_005fd5b0;
          goto LAB_005fd502;
        }
        if ((bVar4 | 0x13) != 0xf3) goto LAB_005fd5f8;
        if (bVar4 != 0xf2) goto joined_r0x005fd565;
LAB_005fd5e0:
        uVar9 = 0;
        if ((int)uVar8 < 1) goto LAB_005fd5fe;
        uVar9 = uVar8 & 3;
        if ((uVar8 & 3) == 0) {
          iVar5 = FUN_005fcfb0(param_1,param_2,puVar1,uVar8);
          if (iVar5 < iVar7) {
LAB_005fd690:
            uVar8 = 0;
            goto LAB_005fd5f8;
          }
          uVar8 = 0;
          param_5 = param_5 + (iVar5 - iVar7);
          goto LAB_005fd5fe;
        }
      }
LAB_005fd5f8:
      uVar9 = 0xffffffff;
      goto LAB_005fd5fe;
    }
    param_5 = 0;
LAB_005fd5b0:
    if ((int)uVar8 < 1) {
      uVar9 = (uint)(uVar8 != 0);
    }
    else {
      uVar9 = 1;
      if ((uVar8 & 3) == 0) {
        uVar9 = 0xffffffff;
        iVar5 = FUN_005fcfb0(param_1,param_2,puVar1,uVar8);
        uVar8 = 0;
        if (iVar5 < iVar7) goto LAB_005fd5fe;
        param_5 = param_5 + (iVar5 - iVar7);
        uVar9 = 0;
        uVar8 = 0;
      }
    }
    uVar9 = iVar7 == 0 | uVar9;
  }
LAB_005fd5fe:
  *param_3 = param_5;
  *param_1 = uVar8;
  return uVar9;
}



uint FUN_006e6230(byte *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                 undefined8 *param_5,long *param_6)

{
  byte bVar1;
  int iVar2;
  long lVar3;
  uint uVar4;
  byte *pbVar5;
  byte *pbVar6;
  byte *pbVar7;
  byte *pbVar8;
  uint uVar9;
  uint uVar10;
  
  *param_3 = 0;
  *param_4 = 0;
  *param_5 = 0;
  *param_6 = 0;
  *param_2 = param_1;
  bVar1 = *param_1;
  if ((bVar1 != 0x5f) && (pbVar5 = param_1, bVar1 != 0)) {
    do {
      pbVar8 = pbVar5;
      if ((bVar1 == 0x40) || (bVar1 == 0x2e)) {
        pbVar6 = pbVar8;
        if (param_1 == pbVar8) goto LAB_006e62d8;
        goto LAB_006e62b0;
      }
      bVar1 = pbVar8[1];
      pbVar5 = pbVar8 + 1;
    } while ((bVar1 != 0) && (bVar1 != 0x5f));
    if (param_1 != pbVar5) {
      pbVar6 = pbVar5;
      if (bVar1 == 0x5f) {
        pbVar6 = pbVar8 + 2;
        *pbVar5 = 0;
        *param_4 = pbVar6;
        bVar1 = pbVar8[2];
        while (((bVar1 & 0xbf) != 0 && (bVar1 != 0x2e))) {
          pbVar5 = pbVar6 + 1;
          pbVar6 = pbVar6 + 1;
          bVar1 = *pbVar5;
        }
        uVar4 = 6;
        uVar10 = 4;
      }
      else {
LAB_006e62b0:
        uVar10 = 0;
        uVar4 = 2;
      }
      pbVar5 = pbVar6;
      uVar9 = uVar10;
      if (bVar1 == 0x2e) {
        pbVar5 = pbVar6 + 1;
        *pbVar6 = 0;
        *param_5 = pbVar5;
        bVar1 = pbVar6[1];
        pbVar8 = pbVar5;
        uVar9 = uVar4;
        if ((bVar1 & 0xbf) != 0) {
          do {
            pbVar7 = pbVar8;
            pbVar8 = pbVar7 + 1;
          } while ((*pbVar8 & 0xbf) != 0);
          if (pbVar5 != pbVar8) {
            lVar3 = FUN_006e6110(pbVar5,(long)pbVar7 - (long)pbVar6);
            *param_6 = lVar3;
            if (lVar3 == 0) {
              return 0xffffffff;
            }
            iVar2 = thunk_FUN_00712780(*param_5,lVar3);
            pbVar5 = pbVar8;
            if (iVar2 == 0) {
              FUN_007104f0(lVar3);
              bVar1 = pbVar7[1];
            }
            else {
              bVar1 = pbVar7[1];
              uVar9 = uVar10 | 3;
            }
          }
        }
      }
      if (bVar1 == 0x40) {
        *pbVar5 = 0;
        *param_3 = pbVar5 + 1;
        if (pbVar5[1] != 0) {
          uVar9 = uVar9 | 8;
        }
      }
      goto LAB_006e62db;
    }
  }
LAB_006e62d8:
  uVar9 = 0;
LAB_006e62db:
  if (((char *)*param_4 != (char *)0x0) && (*(char *)*param_4 == '\0')) {
    uVar9 = uVar9 & 0xfffffffb;
  }
  if (((char *)*param_5 != (char *)0x0) && (*(char *)*param_5 == '\0')) {
    uVar9 = uVar9 & 0xfffffffd;
  }
  return uVar9;
}



uint _nl_explode_name(byte *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                     undefined8 *param_5,undefined8 *param_6)

{
  byte bVar1;
  int iVar2;
  char *__s2;
  uint uVar3;
  byte *pbVar4;
  byte *pbVar5;
  byte *pbVar6;
  byte *pbVar7;
  uint uVar8;
  uint uVar9;
  
  *param_3 = 0;
  *param_4 = 0;
  *param_5 = 0;
  *param_6 = 0;
  *param_2 = param_1;
  bVar1 = *param_1;
  if ((bVar1 != 0x5f) && (pbVar4 = param_1, bVar1 != 0)) {
    do {
      pbVar7 = pbVar4;
      if ((bVar1 == 0x40) || (bVar1 == 0x2e)) {
        pbVar5 = pbVar7;
        if (param_1 == pbVar7) goto LAB_006dc8c8;
        goto LAB_006dc8a0;
      }
      bVar1 = pbVar7[1];
      pbVar4 = pbVar7 + 1;
    } while ((bVar1 != 0) && (bVar1 != 0x5f));
    if (param_1 != pbVar4) {
      pbVar5 = pbVar4;
      if (bVar1 == 0x5f) {
        pbVar5 = pbVar7 + 2;
        *pbVar4 = 0;
        *param_4 = pbVar5;
        bVar1 = pbVar7[2];
        while (((bVar1 & 0xbf) != 0 && (bVar1 != 0x2e))) {
          pbVar4 = pbVar5 + 1;
          pbVar5 = pbVar5 + 1;
          bVar1 = *pbVar4;
        }
        uVar3 = 6;
        uVar9 = 4;
      }
      else {
LAB_006dc8a0:
        uVar9 = 0;
        uVar3 = 2;
      }
      pbVar4 = pbVar5;
      uVar8 = uVar9;
      if (bVar1 == 0x2e) {
        pbVar4 = pbVar5 + 1;
        *pbVar5 = 0;
        *param_5 = pbVar4;
        bVar1 = pbVar5[1];
        pbVar7 = pbVar4;
        uVar8 = uVar3;
        if ((bVar1 & 0xbf) != 0) {
          do {
            pbVar6 = pbVar7;
            pbVar7 = pbVar6 + 1;
          } while ((*pbVar7 & 0xbf) != 0);
          if (pbVar4 != pbVar7) {
            __s2 = (char *)_nl_normalize_codeset(pbVar4,(long)pbVar6 - (long)pbVar5);
            *param_6 = __s2;
            if (__s2 == (char *)0x0) {
              return 0xffffffff;
            }
            iVar2 = strcmp((char *)*param_5,__s2);
            pbVar4 = pbVar7;
            if (iVar2 == 0) {
              free(__s2);
              bVar1 = pbVar6[1];
            }
            else {
              bVar1 = pbVar6[1];
              uVar8 = uVar9 | 3;
            }
          }
        }
      }
      if (bVar1 == 0x40) {
        *pbVar4 = 0;
        *param_3 = pbVar4 + 1;
        if (pbVar4[1] != 0) {
          uVar8 = uVar8 | 8;
        }
      }
      goto LAB_006dc8cb;
    }
  }
LAB_006dc8c8:
  uVar8 = 0;
LAB_006dc8cb:
  if (((char *)*param_4 != (char *)0x0) && (*(char *)*param_4 == '\0')) {
    uVar8 = uVar8 & 0xfffffffb;
  }
  if (((char *)*param_5 != (char *)0x0) && (*(char *)*param_5 == '\0')) {
    uVar8 = uVar8 & 0xfffffffd;
  }
  return uVar8;
}


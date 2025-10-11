
undefined8 equal_wildcard(byte *param_1,long param_2,char *param_3,byte *param_4,uint param_5)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  byte *pbVar6;
  byte bVar7;
  long lVar8;
  byte *pbVar9;
  uint uVar10;
  byte *pbVar11;
  bool bVar12;
  
  if (((param_4 < (byte *)0x2) || (*param_3 != '.')) && (param_2 != 0)) {
    iVar3 = 0;
    pbVar11 = (byte *)0x0;
    uVar10 = 1;
    bVar2 = false;
    lVar8 = 0;
    pbVar6 = param_1;
    do {
      bVar7 = *pbVar6;
      if (bVar7 == 0x2a) {
        bVar12 = true;
        if (param_2 + -1 != lVar8) {
          bVar12 = pbVar6[1] == 0x2e;
        }
        if ((((pbVar11 != (byte *)0x0) || (iVar3 != 0 || bVar2)) ||
            (((param_5 & 4) != 0 && ((uVar10 & 1) != 1 || !bVar12)))) ||
           (!bVar12 && (uVar10 & 1) == 0)) goto LAB_00588797;
        uVar10 = uVar10 & 0xfffffffe;
        iVar3 = 0;
        pbVar11 = pbVar6;
      }
      else if (bVar7 == 0x2e) {
        if (uVar10 != 0) goto LAB_00588797;
        iVar3 = iVar3 + 1;
        uVar10 = 1;
        bVar2 = false;
      }
      else if (bVar7 < 0x2f) {
        if ((bVar7 != 0x2d) || ((uVar10 & 1) != 0)) goto LAB_00588797;
        uVar10 = uVar10 | 4;
      }
      else {
        if (bVar7 < 0x5b) {
          if ((bVar7 < 0x41) && (9 < (byte)(bVar7 - 0x30))) goto LAB_00588797;
        }
        else if (0x19 < (byte)(bVar7 + 0x9f)) goto LAB_00588797;
        if (((uVar10 & 1) == 0) || ((ulong)(param_2 - lVar8) < 4)) {
          uVar10 = 0;
        }
        else {
          iVar4 = OPENSSL_strncasecmp(pbVar6,&DAT_00800429,4);
          if (iVar4 == 0) {
            bVar2 = true;
          }
          uVar10 = 0;
        }
      }
      lVar8 = lVar8 + 1;
      pbVar6 = pbVar6 + 1;
    } while (param_2 != lVar8);
    if (((uVar10 == 0) && (1 < iVar3)) && (pbVar11 != (byte *)0x0)) {
      lVar8 = (long)pbVar11 - (long)param_1;
      pbVar6 = param_1 + (param_2 - (long)pbVar11) + -1;
      if ((pbVar6 + lVar8 <= param_4) &&
         (iVar3 = equal_nocase(param_1,lVar8,param_3,lVar8), iVar3 != 0)) {
        pbVar9 = (byte *)(param_3 + ((long)param_4 - (long)pbVar6));
        iVar3 = equal_nocase(pbVar9,pbVar6,pbVar11 + 1,pbVar6);
        if (iVar3 != 0) {
          pbVar6 = (byte *)(param_3 + lVar8);
          if ((lVar8 == 0) && (pbVar11[1] == 0x2e)) {
            if (pbVar6 != pbVar9) {
              bVar7 = (byte)(param_5 >> 3) & 1;
              if ((pbVar9 != pbVar6 + 1) || (*pbVar6 != 0x2a)) {
                do {
                  bVar1 = *pbVar6;
                  if ((0x19 < (byte)((bVar1 & 0xdf) + 0xbf)) &&
                     ((9 < (byte)(bVar1 - 0x30) && (bVar1 != 0x2d)))) {
                    if (bVar7 != 1) {
                      return 0;
                    }
                    if (bVar1 != 0x2e) {
                      return 0;
                    }
                  }
                  pbVar6 = pbVar6 + 1;
joined_r0x005888b9:
                } while (pbVar6 != pbVar9);
              }
              return 1;
            }
          }
          else if ((param_4 < (byte *)0x4) ||
                  (iVar3 = OPENSSL_strncasecmp(param_3,&DAT_00800429,4), iVar3 != 0)) {
            if ((pbVar9 == pbVar6 + 1) && (*pbVar6 == 0x2a)) {
              return 1;
            }
            bVar7 = 0;
            goto joined_r0x005888b9;
          }
        }
      }
      return 0;
    }
  }
LAB_00588797:
  uVar5 = equal_nocase(param_1,param_2,param_3,param_4);
  return uVar5;
}


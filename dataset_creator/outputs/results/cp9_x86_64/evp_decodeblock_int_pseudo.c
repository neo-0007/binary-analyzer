
int evp_decodeblock_int(long param_1,byte *param_2,byte *param_3,uint param_4)

{
  byte bVar1;
  byte bVar2;
  ulong uVar3;
  byte *pbVar4;
  ulong uVar5;
  long lVar6;
  byte bVar7;
  int iVar8;
  undefined1 *puVar9;
  int iVar10;
  
  puVar9 = data_ascii2bin;
  if ((param_1 != 0) && ((*(byte *)(param_1 + 0x5c) & 2) != 0)) {
    puVar9 = srpdata_ascii2bin;
  }
  if ((int)param_4 < 1) {
LAB_005f388b:
    if ((param_4 & 3) != 0) {
      return -1;
    }
    if (0 < (int)param_4) {
LAB_005f37a7:
      iVar10 = 0;
      iVar8 = 0;
      do {
        if ((char)*param_3 < '\0') {
          bVar7 = param_3[1];
          uVar3 = 0xff;
          if ((char)bVar7 < '\0') goto LAB_005f3858;
LAB_005f37c9:
          uVar5 = (ulong)(byte)puVar9[bVar7];
          bVar2 = param_3[2];
          bVar7 = puVar9[bVar7] | (byte)uVar3;
        }
        else {
          bVar7 = param_3[1];
          uVar3 = (ulong)(byte)puVar9[*param_3];
          if (-1 < (char)bVar7) goto LAB_005f37c9;
LAB_005f3858:
          bVar2 = param_3[2];
          bVar7 = 0xff;
          uVar5 = 0xff;
        }
        if ((char)bVar2 < '\0') {
          return -1;
        }
        if ((char)param_3[3] < '\0') {
          return -1;
        }
        bVar1 = puVar9[param_3[3]];
        if ((char)(bVar7 | puVar9[bVar2] | bVar1) < '\0') {
          return -1;
        }
        iVar8 = iVar8 + 4;
        lVar6 = (ulong)(byte)puVar9[bVar2] << 6;
        iVar10 = iVar10 + 3;
        param_2[1] = (byte)((uVar5 << 0xc) >> 8) | (byte)((ulong)lVar6 >> 8);
        *param_2 = (byte)((uVar3 << 0x12) >> 0x10) | (byte)((uVar5 << 0xc) >> 0x10);
        param_2[2] = bVar1 | (byte)lVar6;
        param_3 = param_3 + 4;
        param_2 = param_2 + 3;
        if ((int)param_4 <= iVar8) {
          return iVar10;
        }
      } while( true );
    }
  }
  else {
    do {
      if (((char)*param_3 < '\0') || (puVar9[*param_3] != -0x20)) {
        if (3 < (int)param_4) {
          pbVar4 = param_3 + (long)(int)param_4 + -1;
          while ((-1 < (char)*pbVar4 && ((puVar9[*pbVar4] | 0x13) == 0xf3))) {
            param_4 = param_4 - 1;
            pbVar4 = pbVar4 + -1;
            if (param_4 == 3) {
              return -1;
            }
          }
          if ((param_4 & 3) != 0) {
            return -1;
          }
          goto LAB_005f37a7;
        }
        goto LAB_005f388b;
      }
      param_3 = param_3 + 1;
      param_4 = param_4 - 1;
    } while (param_4 != 0);
  }
  return 0;
}



uint ossl_ifc_ffc_compute_security_bits(int param_1)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  byte bVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  
  if (param_1 == 0x1800) {
    return 0xb0;
  }
  if (param_1 < 0x1801) {
    uVar8 = 0x80;
    if (((param_1 != 0xc00) && (uVar8 = 0x98, param_1 != 0x1000)) &&
       ((uVar8 = 0x70, param_1 != 0x800 && (uVar8 = 0, 7 < param_1)))) {
LAB_0055728c:
      uVar8 = 0xc0;
      if (0x1e00 < param_1) {
        uVar8 = 0x100;
        if (0x3c00 < param_1) {
          uVar8 = 0x4b0;
        }
      }
      uVar9 = 0;
      uVar1 = (long)param_1 * 0x2c5c8;
      do {
        uVar1 = uVar1 >> 1;
        uVar9 = uVar9 + 0x40000;
      } while (0x7ffff < uVar1);
      iVar7 = 0x12;
      uVar6 = 0x20000;
      do {
        uVar2 = uVar1 * uVar1;
        uVar1 = uVar2 >> 0x12;
        if (0x7ffff < uVar1) {
          uVar9 = uVar9 + uVar6;
          uVar1 = uVar2 >> 0x13;
        }
        uVar6 = uVar6 >> 1;
        iVar7 = iVar7 + -1;
      } while (iVar7 != 0);
      iVar7 = 0x3f;
      lVar3 = SUB168((ZEXT416(uVar9) * (undefined1  [16])0x40000) / (undefined1  [16])0x5c551,0);
      uVar1 = ((ulong)((long)param_1 * 0x2c5c8 * lVar3) >> 0x12) * lVar3 >> 0x12;
      lVar3 = 0;
      while (lVar4 = lVar3, iVar7 = iVar7 + -3, iVar7 != -3) {
        while( true ) {
          lVar3 = lVar4 * 2;
          lVar4 = lVar3 + 1;
          bVar5 = (byte)iVar7;
          uVar2 = lVar3 * lVar4 * 3 + 1;
          if (uVar1 >> (bVar5 & 0x3f) < uVar2) break;
          iVar7 = iVar7 + -3;
          uVar1 = uVar1 - (uVar2 << (bVar5 & 0x3f));
          if (iVar7 == -3) goto LAB_00557367;
        }
      }
LAB_00557367:
      uVar9 = (int)((((ulong)(lVar4 * 0x7b126000) >> 0x12) - 0x12c28f) / 0x2c5c8) + 4U & 0xfffffff8;
      if ((ushort)uVar8 < (ushort)uVar9) {
        uVar9 = uVar8;
      }
      return uVar9;
    }
  }
  else {
    uVar8 = 200;
    if (((param_1 != 0x2000) && (uVar8 = 0x100, param_1 != 0x3c00)) &&
       (uVar8 = 0xc0, param_1 != 0x1e00)) {
      if (0xa7e78 < param_1) {
        return 0x4b0;
      }
      goto LAB_0055728c;
    }
  }
  return uVar8;
}



/* WARNING: Removing unreachable block (ram,0x0042273a) */
/* WARNING: Removing unreachable block (ram,0x00422662) */
/* WARNING: Removing unreachable block (ram,0x00422654) */
/* WARNING: Removing unreachable block (ram,0x004226b0) */
/* WARNING: Removing unreachable block (ram,0x0042269b) */
/* WARNING: Removing unreachable block (ram,0x0042263a) */
/* WARNING: Removing unreachable block (ram,0x00422629) */
/* WARNING: Removing unreachable block (ram,0x004225cd) */

undefined1  [16] FUN_004225c0(uint param_1,long param_2)

{
  uint *puVar1;
  uint *puVar2;
  long lVar3;
  long lVar4;
  undefined4 uVar5;
  byte bVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  ulong uVar10;
  ulong uVar11;
  uint uVar12;
  ulong uVar13;
  uint uVar14;
  uint in_XCR0;
  uint in_register_00000604;
  undefined1 auVar15 [16];
  
  *(undefined8 *)(param_2 + 8) = 0;
  puVar1 = (uint *)cpuid_basic_info(0);
  uVar12 = (uint)((puVar1[1] != 0x756e6547 || puVar1[2] != 0x49656e69) || puVar1[3] != 0x6c65746e);
  if ((uVar12 != 0) &&
     ((puVar1[1] == 0x68747541 && puVar1[2] == 0x69746e65) && puVar1[3] == 0x444d4163)) {
    puVar2 = (uint *)cpuid(0x80000000);
    if (0x80000000 < *puVar2) {
      lVar3 = cpuid(0x80000001);
      uVar12 = uVar12 | *(uint *)(lVar3 + 0xc) & 0x801;
      if (0x80000007 < *puVar2) {
        lVar3 = cpuid(0x80000008);
        lVar4 = cpuid_Version_info(1);
        uVar14 = *(uint *)(lVar4 + 8);
        uVar10 = (ulong)uVar14;
        uVar7 = *(uint *)(lVar4 + 0xc);
        if (((uVar14 >> 0x1c & 1) != 0) &&
           ((byte)((uint)*(undefined4 *)(lVar4 + 4) >> 0x10) <=
            (byte)((char)*(undefined4 *)(lVar3 + 0xc) + 1U))) {
          uVar10 = (ulong)(uVar14 & 0xefffffff);
        }
        goto LAB_0042271a;
      }
    }
  }
  uVar14 = 0xffffffff;
  if (3 < *puVar1) {
    puVar2 = (uint *)cpuid_Deterministic_Cache_Parameters_info(4);
    uVar14 = *puVar2 >> 0xe & 0xfff;
  }
  puVar2 = (uint *)cpuid_Version_info(1);
  param_1 = *puVar2;
  uVar7 = puVar2[3];
  uVar8 = puVar2[2] & 0xbfefffff;
  uVar10 = (ulong)uVar8;
  if (uVar12 == 0) {
    uVar9 = uVar8 | 0x40000000;
    bVar6 = (byte)(param_1 >> 8) & 0xf;
    if (bVar6 == 0xf) {
      uVar9 = uVar8 | 0x40100000;
    }
    uVar10 = (ulong)uVar9;
    if ((bVar6 == 6) && (((param_1 & 0xfff0ff0) == 0x50670 || ((param_1 & 0xfff0ff0) == 0x80650))))
    {
      uVar7 = uVar7 & 0xfbffffff;
    }
  }
  if (((uint)uVar10 >> 0x1c & 1) != 0) {
    uVar8 = (uint)uVar10 & 0xefffffff;
    uVar10 = (ulong)uVar8;
    if ((uVar14 != 0) && (uVar10 = (ulong)(uVar8 | 0x10000000), (byte)(puVar2[1] >> 0x10) < 2)) {
      uVar10 = (ulong)uVar8;
    }
  }
LAB_0042271a:
  uVar13 = (ulong)(uVar12 & 0x800 | uVar7 & 0xfffff7ff);
  uVar11 = uVar10;
  if (6 < *puVar1) {
    lVar3 = cpuid_Extended_Feature_Enumeration_info(7);
    uVar12 = *(uint *)(lVar3 + 4);
    uVar11 = (ulong)*(uint *)(lVar3 + 8);
    uVar5 = *(undefined4 *)(lVar3 + 0xc);
    if ((uVar7 & 0x4000000) == 0) {
      uVar12 = uVar12 & 0xfff7ffff;
    }
    if ((param_1 & 0xfff0ff0) == 0x50650) {
      uVar12 = uVar12 & 0xfffeffff;
    }
    *(uint *)(param_2 + 8) = uVar12;
    *(undefined4 *)(param_2 + 0xc) = uVar5;
  }
  if (((uVar7 & 0x8000000) == 0) ||
     ((uVar11 = (ulong)in_register_00000604, (in_XCR0 & 0xe6) != 0xe6 &&
      (*(uint *)(param_2 + 8) = *(uint *)(param_2 + 8) & 0x3fdeffff, (in_XCR0 & 6) != 6)))) {
    uVar13 = (ulong)(uVar7 & 0xefffe7ff);
    *(uint *)(param_2 + 8) = *(uint *)(param_2 + 8) & 0x3fdeffdf;
  }
  auVar15._0_8_ = uVar10 | uVar13 << 0x20;
  auVar15._8_8_ = uVar11;
  return auVar15;
}


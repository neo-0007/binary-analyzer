
/* WARNING: Removing unreachable block (ram,0x006c6ea0) */
/* WARNING: Removing unreachable block (ram,0x006c6cfd) */
/* WARNING: Removing unreachable block (ram,0x006c6e52) */
/* WARNING: Removing unreachable block (ram,0x006c6cc8) */

uint intel_check_word_constprop_0(int param_1,uint param_2,undefined1 *param_3,undefined1 *param_4)

{
  byte *pbVar1;
  byte bVar2;
  uint *puVar3;
  ulong uVar4;
  uint uVar5;
  int iVar6;
  ulong uVar7;
  uint uVar8;
  uint uVar9;
  ulong uVar10;
  uint uVar11;
  ulong uVar12;
  byte bVar13;
  uint uVar14;
  bool bVar15;
  bool bVar16;
  
  if ((int)param_2 < 0) {
    return 0;
  }
  uVar14 = ((param_1 - 0xb9U) / 3) * 3;
  if (param_2 == 0) {
    return 0;
  }
  bVar15 = DAT_0093dec8 == 0xf;
  bVar16 = DAT_0093decc == 6;
  do {
    bVar13 = (byte)param_2;
    if (bVar13 == 0x40) {
      *param_4 = 1;
      if (uVar14 == 9) {
        return 0;
      }
    }
    else {
      if ((param_2 & 0xff) == 0xff) {
        puVar3 = (uint *)cpuid_Deterministic_Cache_Parameters_info(4);
        uVar5 = *puVar3;
        uVar11 = puVar3[1];
        uVar8 = puVar3[3];
        uVar9 = uVar5 & 0x1f;
        if (uVar9 == 0) {
          return 0;
        }
        if (uVar14 == 3) {
          while (((uVar5 >> 5 & 7) != 1 || (uVar9 != 1))) {
            puVar3 = (uint *)cpuid_Deterministic_Cache_Parameters_info(4);
            uVar5 = *puVar3;
            uVar11 = puVar3[1];
            uVar8 = puVar3[3];
            uVar9 = uVar5 & 0x1f;
            if (uVar9 == 0) {
              return 0;
            }
          }
        }
        else if (uVar14 == 0) {
          while ((((bVar15 = (uVar5 >> 5 & 7) == 1, uVar9 == 1 && (bVar15)) || (uVar9 != 2)) ||
                 (!bVar15))) {
            puVar3 = (uint *)cpuid_Deterministic_Cache_Parameters_info(4);
            uVar5 = *puVar3;
            uVar11 = puVar3[1];
            uVar8 = puVar3[3];
            uVar9 = uVar5 & 0x1f;
            if (uVar9 == 0) {
              return 0;
            }
          }
        }
        else {
          while( true ) {
            uVar5 = uVar5 >> 5 & 7;
            if ((((uVar9 != 1) || (uVar5 != 1)) && ((uVar9 != 2 || (uVar5 != 1)))) &&
               ((((uVar5 == 2 && (uVar14 == 6)) || ((uVar5 == 3 && (uVar14 == 9)))) ||
                ((uVar5 == 4 && (uVar14 == 0xc)))))) break;
            puVar3 = (uint *)cpuid_Deterministic_Cache_Parameters_info(4);
            uVar5 = *puVar3;
            uVar11 = puVar3[1];
            uVar8 = puVar3[3];
            uVar9 = uVar5 & 0x1f;
            if (uVar9 == 0) {
              return 0;
            }
          }
        }
        iVar6 = (param_1 - 0xb9U) - uVar14;
        if (param_1 - 0xb9U == uVar14) {
          return ((uVar11 >> 0x16) + 1) * ((uVar11 & 0xfff) + 1) * (uVar8 + 1) *
                 ((uVar11 >> 0xc & 0x3ff) + 1);
        }
        if (iVar6 == 1) {
          return (uVar11 >> 0x16) + 1;
        }
        if (iVar6 != 2) {
                    /* WARNING: Subroutine does not return */
          __assert_fail("offset == 2","../sysdeps/x86/dl-cacheinfo.h",0xb7,"intel_check_word");
        }
        return (uVar11 & 0xfff) + 1;
      }
      if ((((param_2 & 0xff) == 0x49) && (uVar14 == 9)) && (bVar15 && bVar16)) {
        param_1 = param_1 + -3;
        uVar14 = 6;
      }
      uVar12 = 0x44;
      uVar10 = 0;
      do {
        uVar7 = uVar10 + uVar12 >> 1;
        pbVar1 = intel_02_known + uVar7 * 8;
        bVar2 = *pbVar1;
        while( true ) {
          uVar4 = uVar7;
          if (bVar13 == bVar2) {
            if (pbVar1[3] == uVar14) {
              iVar6 = (param_1 - 0xb9U) - uVar14;
              if (param_1 - 0xb9U == uVar14) {
                return *(uint *)(pbVar1 + 4);
              }
              if (iVar6 == 1) {
                return (uint)pbVar1[1];
              }
              if (iVar6 != 2) {
                    /* WARNING: Subroutine does not return */
                __assert_fail("offset == 2","../sysdeps/x86/dl-cacheinfo.h",0xe7,"intel_check_word")
                ;
              }
              return (uint)pbVar1[2];
            }
            if (pbVar1[3] == 6) {
              *param_3 = 1;
            }
            goto joined_r0x006c6ca3;
          }
          if (bVar2 <= bVar13) break;
          if (uVar4 <= uVar10) goto joined_r0x006c6ca3;
          uVar7 = uVar10 + uVar4 >> 1;
          pbVar1 = intel_02_known + uVar7 * 8;
          bVar2 = *pbVar1;
          uVar12 = uVar4;
        }
        uVar10 = uVar4 + 1;
      } while (uVar10 < uVar12);
    }
joined_r0x006c6ca3:
    param_2 = param_2 >> 8;
    if (param_2 == 0) {
      return 0;
    }
  } while( true );
}


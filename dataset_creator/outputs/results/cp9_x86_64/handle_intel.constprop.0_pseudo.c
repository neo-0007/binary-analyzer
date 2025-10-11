
/* WARNING: Removing unreachable block (ram,0x006c6f00) */

long handle_intel_constprop_0(int param_1)

{
  byte *pbVar1;
  bool bVar2;
  uint *puVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  long lVar7;
  uint uVar8;
  uint uVar9;
  uint local_4c;
  byte local_3a [10];
  
  if (DAT_0093dec4 < 2) {
    return -1;
  }
  local_3a[0] = 0;
  pbVar1 = local_3a + 1;
  local_3a[1] = 0;
  local_4c = 1;
  uVar9 = 1;
  while( true ) {
    puVar3 = (uint *)cpuid_cache_tlb_info(2);
    uVar8 = *puVar3;
    uVar4 = puVar3[1];
    uVar5 = puVar3[2];
    uVar6 = puVar3[3];
    if (uVar9 == 1) {
      local_4c = uVar8 & 0xff;
      uVar8 = uVar8 & 0xffffff00;
    }
    lVar7 = intel_check_word_constprop_0(param_1,uVar8,pbVar1,local_3a);
    if (lVar7 != 0) {
      return lVar7;
    }
    lVar7 = intel_check_word_constprop_0(param_1,uVar4,pbVar1,local_3a);
    if (lVar7 != 0) {
      return lVar7;
    }
    lVar7 = intel_check_word_constprop_0(param_1,uVar6,pbVar1,local_3a);
    if (lVar7 != 0) break;
    lVar7 = intel_check_word_constprop_0(param_1,uVar5,pbVar1,local_3a);
    if (lVar7 != 0) {
      return lVar7;
    }
    bVar2 = local_4c <= uVar9;
    uVar9 = uVar9 + 1;
    if (bVar2) {
      lVar7 = 0;
      if (param_1 - 0xbfU < 6) {
        lVar7 = -(ulong)local_3a[0];
      }
      return lVar7;
    }
  }
  return lVar7;
}


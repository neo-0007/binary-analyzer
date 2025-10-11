
/* WARNING: Removing unreachable block (ram,0x006cfd77) */
/* WARNING: Removing unreachable block (ram,0x006cfd21) */
/* WARNING: Removing unreachable block (ram,0x006cfcae) */
/* WARNING: Removing unreachable block (ram,0x006cfc1f) */
/* WARNING: Removing unreachable block (ram,0x006cfbc8) */

int FUN_006cfbc0(int param_1)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  bool bVar6;
  
  puVar1 = (uint *)cpuid_Deterministic_Cache_Parameters_info(4);
  uVar2 = *puVar1;
  uVar5 = puVar1[1];
  uVar3 = puVar1[3];
  uVar4 = uVar2 & 0x1f;
  if (uVar4 != 0) {
    if (param_1 - 0xb7U < 5) {
      if (param_1 - 0xbcU < 3) {
        do {
          bVar6 = (uVar2 >> 5 & 7) == 1;
          if (((uVar4 == 1) && (bVar6)) || ((uVar4 == 2 && (bVar6)))) goto LAB_006cfc60;
          puVar1 = (uint *)cpuid_Deterministic_Cache_Parameters_info(4);
          uVar2 = *puVar1;
          uVar5 = puVar1[1];
          uVar3 = puVar1[3];
          uVar4 = uVar2 & 0x1f;
        } while (uVar4 != 0);
      }
      else {
        do {
          bVar6 = (uVar2 >> 5 & 7) == 1;
          if ((((uVar4 != 1) || (!bVar6)) && (uVar4 == 2)) && (bVar6)) goto LAB_006cfc60;
          puVar1 = (uint *)cpuid_Deterministic_Cache_Parameters_info(4);
          uVar2 = *puVar1;
          uVar5 = puVar1[1];
          uVar3 = puVar1[3];
          uVar4 = uVar2 & 0x1f;
        } while (uVar4 != 0);
      }
    }
    else if (param_1 - 0xbcU < 3) {
      do {
        if (((uVar2 >> 5 & 7) == 1) && (uVar4 == 1)) goto LAB_006cfc60;
        puVar1 = (uint *)cpuid_Deterministic_Cache_Parameters_info(4);
        uVar2 = *puVar1;
        uVar5 = puVar1[1];
        uVar3 = puVar1[3];
        uVar4 = uVar2 & 0x1f;
      } while (uVar4 != 0);
    }
    else {
      do {
        uVar2 = uVar2 >> 5 & 7;
        if ((((uVar4 != 1) || (uVar2 != 1)) && ((uVar4 != 2 || (uVar2 != 1)))) &&
           (((param_1 - 0xbfU < 3 && (uVar2 == 2)) || ((param_1 - 0xc2U < 3 && (uVar2 == 3)))))) {
LAB_006cfc60:
          uVar2 = (param_1 - 0xb9U) % 3;
          if (uVar2 == 0) {
            return ((uVar5 >> 0x16) + 1) * ((uVar5 & 0xfff) + 1) * (uVar3 + 1) *
                   ((uVar5 >> 0xc & 0x3ff) + 1);
          }
          if (uVar2 != 1) {
            return (uVar5 & 0xfff) + 1;
          }
          return (uVar5 >> 0x16) + 1;
        }
        puVar1 = (uint *)cpuid_Deterministic_Cache_Parameters_info(4);
        uVar2 = *puVar1;
        uVar5 = puVar1[1];
        uVar3 = puVar1[3];
        uVar4 = uVar2 & 0x1f;
      } while (uVar4 != 0);
    }
  }
  return 0;
}


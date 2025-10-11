
/* WARNING: Removing unreachable block (ram,0x006c675f) */
/* WARNING: Removing unreachable block (ram,0x006c6722) */
/* WARNING: Removing unreachable block (ram,0x006c66f8) */
/* WARNING: Removing unreachable block (ram,0x006c66ce) */
/* WARNING: Removing unreachable block (ram,0x006c66a1) */
/* WARNING: Removing unreachable block (ram,0x006c6680) */
/* WARNING: Removing unreachable block (ram,0x006c6621) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void get_common_indices_constprop_0(uint *param_1,uint *param_2,uint *param_3,uint *param_4)

{
  uint *puVar1;
  undefined4 *puVar2;
  long lVar3;
  uint uVar4;
  
  if (param_1 != (uint *)0x0) {
    puVar1 = (uint *)cpuid_Version_info(1);
    uVar4 = *puVar1;
    _DAT_0093ded8 = puVar1[1];
    DAT_0093dee0 = puVar1[2];
    DAT_0093dedc = puVar1[3];
    _DAT_0093ded4 = uVar4;
    *param_1 = uVar4 >> 8 & 0xf;
    *param_2 = uVar4 >> 4 & 0xf;
    *param_3 = uVar4 >> 0xc & 0xf0;
    *param_4 = uVar4 & 0xf;
    if (*param_1 == 0xf) {
      *param_1 = (uVar4 >> 0x14 & 0xff) + 0xf;
      *param_2 = *param_2 + *param_3;
    }
  }
  if (6 < DAT_0093dec4) {
    puVar2 = (undefined4 *)cpuid_Extended_Feature_Enumeration_info(7);
    _DAT_0093def4 = *puVar2;
    DAT_0093def8 = puVar2[1];
    DAT_0093df00 = puVar2[2];
    DAT_0093defc = puVar2[3];
    puVar2 = (undefined4 *)cpuid_Extended_Feature_Enumeration_info(7);
    DAT_0093df94 = *puVar2;
    _DAT_0093df98 = puVar2[1];
    _DAT_0093dfa0 = puVar2[2];
    _DAT_0093df9c = puVar2[3];
  }
  if (0xc < DAT_0093dec4) {
    puVar2 = (undefined4 *)cpuid_Processor_Extended_States_info(0xd);
    DAT_0093df34 = *puVar2;
    _DAT_0093df38 = puVar2[1];
    _DAT_0093df40 = puVar2[2];
    _DAT_0093df3c = puVar2[3];
  }
  if (0x13 < DAT_0093dec4) {
    puVar2 = (undefined4 *)cpuid(0x14);
    _DAT_0093dfd4 = *puVar2;
    DAT_0093dfd8 = puVar2[1];
    _DAT_0093dfe0 = puVar2[2];
    _DAT_0093dfdc = puVar2[3];
  }
  if (0x18 < DAT_0093dec4) {
    puVar2 = (undefined4 *)cpuid(0x19);
    _DAT_0093dfb4 = *puVar2;
    DAT_0093dfb8 = puVar2[1];
    _DAT_0093dfc0 = puVar2[2];
    _DAT_0093dfbc = puVar2[3];
  }
  if (_dl_minsigstacksize == 0) {
    if ((DAT_0093dec4 < 0xd) || ((DAT_0093dedc & 0x8000000) == 0)) {
      _dl_minsigstacksize = 0x800;
      return;
    }
    lVar3 = cpuid_Processor_Extended_States_info(0xd);
    _dl_minsigstacksize = (ulong)(*(int *)(lVar3 + 4) + 0x204);
  }
  return;
}


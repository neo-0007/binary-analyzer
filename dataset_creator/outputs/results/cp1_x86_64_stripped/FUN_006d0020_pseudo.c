
/* WARNING: Removing unreachable block (ram,0x006d016f) */
/* WARNING: Removing unreachable block (ram,0x006d0132) */
/* WARNING: Removing unreachable block (ram,0x006d0108) */
/* WARNING: Removing unreachable block (ram,0x006d00de) */
/* WARNING: Removing unreachable block (ram,0x006d00b1) */
/* WARNING: Removing unreachable block (ram,0x006d0090) */
/* WARNING: Removing unreachable block (ram,0x006d0031) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006d0020(uint *param_1,uint *param_2,uint *param_3,uint *param_4)

{
  uint *puVar1;
  undefined4 *puVar2;
  long lVar3;
  uint uVar4;
  
  if (param_1 != (uint *)0x0) {
    puVar1 = (uint *)cpuid_Version_info(1);
    uVar4 = *puVar1;
    _DAT_0094aed8 = puVar1[1];
    DAT_0094aee0 = puVar1[2];
    DAT_0094aedc = puVar1[3];
    _DAT_0094aed4 = uVar4;
    *param_1 = uVar4 >> 8 & 0xf;
    *param_2 = uVar4 >> 4 & 0xf;
    *param_3 = uVar4 >> 0xc & 0xf0;
    *param_4 = uVar4 & 0xf;
    if (*param_1 == 0xf) {
      *param_1 = (uVar4 >> 0x14 & 0xff) + 0xf;
      *param_2 = *param_2 + *param_3;
    }
  }
  if (6 < DAT_0094aec4) {
    puVar2 = (undefined4 *)cpuid_Extended_Feature_Enumeration_info(7);
    _DAT_0094aef4 = *puVar2;
    DAT_0094aef8 = puVar2[1];
    DAT_0094af00 = puVar2[2];
    DAT_0094aefc = puVar2[3];
    puVar2 = (undefined4 *)cpuid_Extended_Feature_Enumeration_info(7);
    DAT_0094af94 = *puVar2;
    _DAT_0094af98 = puVar2[1];
    _DAT_0094afa0 = puVar2[2];
    _DAT_0094af9c = puVar2[3];
  }
  if (0xc < DAT_0094aec4) {
    puVar2 = (undefined4 *)cpuid_Processor_Extended_States_info(0xd);
    DAT_0094af34 = *puVar2;
    _DAT_0094af38 = puVar2[1];
    _DAT_0094af40 = puVar2[2];
    _DAT_0094af3c = puVar2[3];
  }
  if (0x13 < DAT_0094aec4) {
    puVar2 = (undefined4 *)cpuid(0x14);
    _DAT_0094afd4 = *puVar2;
    DAT_0094afd8 = puVar2[1];
    _DAT_0094afe0 = puVar2[2];
    _DAT_0094afdc = puVar2[3];
  }
  if (0x18 < DAT_0094aec4) {
    puVar2 = (undefined4 *)cpuid(0x19);
    _DAT_0094afb4 = *puVar2;
    DAT_0094afb8 = puVar2[1];
    _DAT_0094afc0 = puVar2[2];
    _DAT_0094afbc = puVar2[3];
  }
  if (DAT_0094aea0 == 0) {
    if ((DAT_0094aec4 < 0xd) || ((DAT_0094aedc & 0x8000000) == 0)) {
      DAT_0094aea0 = 0x800;
      return;
    }
    lVar3 = cpuid_Processor_Extended_States_info(0xd);
    DAT_0094aea0 = (ulong)(*(int *)(lVar3 + 4) + 0x204);
  }
  return;
}


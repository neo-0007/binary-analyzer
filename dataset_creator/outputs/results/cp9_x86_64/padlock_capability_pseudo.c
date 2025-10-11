
/* WARNING: Removing unreachable block (ram,0x0059ded3) */
/* WARNING: Removing unreachable block (ram,0x0059dec0) */
/* WARNING: Removing unreachable block (ram,0x0059de85) */

uint padlock_capability(void)

{
  long lVar1;
  uint *puVar2;
  uint uVar3;
  
  lVar1 = cpuid_basic_info(0);
  if (*(int *)(lVar1 + 4) == 0x746e6543) {
    if (*(int *)(lVar1 + 8) != 0x48727561) {
      return 0;
    }
    if (*(int *)(lVar1 + 0xc) != 0x736c7561) {
      return 0;
    }
  }
  else {
    if (*(int *)(lVar1 + 4) != 0x68532020) {
      return 0;
    }
    if (*(int *)(lVar1 + 8) != 0x68676e61) {
      return 0;
    }
    if (*(int *)(lVar1 + 0xc) != 0x20206961) {
      return 0;
    }
  }
  puVar2 = (uint *)cpuid(0xc0000000);
  uVar3 = 0;
  if (0xc0000000 < *puVar2) {
    lVar1 = cpuid(0xc0000001);
    uVar3 = *(uint *)(lVar1 + 8) & 0xffffffef | 0x10;
  }
  return uVar3;
}


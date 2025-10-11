
/* WARNING: Removing unreachable block (ram,0x00692240) */
/* WARNING: Removing unreachable block (ram,0x006922bd) */
/* WARNING: Removing unreachable block (ram,0x00692231) */
/* WARNING: Removing unreachable block (ram,0x006921cb) */
/* WARNING: Removing unreachable block (ram,0x0069229a) */

void FUN_00692180(undefined8 *param_1,undefined8 *param_2)

{
  int *piVar1;
  long lVar2;
  uint uVar3;
  bool bVar4;
  bool bVar5;
  int iVar6;
  code *pcVar7;
  ulong uVar8;
  ulong extraout_RDX;
  ulong extraout_RDX_00;
  char *pcVar9;
  
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0xffffffff;
  iVar6 = FUN_006a07e0(param_2,"default");
  bVar5 = true;
  bVar4 = true;
  pcVar9 = "/dev/urandom";
  if (iVar6 == 0) {
LAB_006921c9:
    piVar1 = (int *)cpuid_basic_info(0);
    iVar6 = piVar1[1];
    uVar3 = piVar1[2];
    if ((*piVar1 != 0) &&
       ((iVar6 == 0x756e6547 ||
        (uVar3 = CONCAT31((int3)(uVar3 >> 8),iVar6 == 0x68747541), iVar6 == 0x68747541)))) {
      lVar2 = cpuid_Extended_Feature_Enumeration_info(7);
      uVar3 = *(uint *)(lVar2 + 8);
      if ((*(uint *)(lVar2 + 4) & 0x40000) != 0) {
        lVar2 = cpuid_Version_info(1);
        pcVar7 = FUN_00692110;
        if ((*(uint *)(lVar2 + 0xc) & 0x40000000) == 0) {
          pcVar7 = (code *)&LAB_00691fd0;
        }
        param_1[1] = pcVar7;
        return;
      }
    }
    uVar8 = (ulong)uVar3;
    if (bVar4) {
LAB_00692298:
      piVar1 = (int *)cpuid_basic_info(0);
      uVar8 = (ulong)(uint)piVar1[2];
      if ((*piVar1 != 0) && ((piVar1[1] == 0x756e6547 || (piVar1[1] == 0x68747541)))) {
        lVar2 = cpuid_Version_info(1);
        uVar8 = (ulong)*(uint *)(lVar2 + 8);
        if ((*(uint *)(lVar2 + 0xc) & 0x40000000) != 0) {
          param_1[1] = FUN_00691f60;
          return;
        }
      }
    }
    if (!bVar5) goto LAB_0069232d;
  }
  else {
    iVar6 = FUN_006a07e0(param_2,"rdseed");
    bVar5 = false;
    bVar4 = false;
    pcVar9 = (char *)0x0;
    if (iVar6 == 0) goto LAB_006921c9;
    iVar6 = FUN_006a07e0(param_2,"rdrand");
    if ((iVar6 == 0) || (iVar6 = FUN_006a07e0(param_2,"rdrnd"), iVar6 == 0)) {
      pcVar9 = (char *)0x0;
      bVar5 = false;
      goto LAB_00692298;
    }
    iVar6 = FUN_006a07e0(param_2,"/dev/urandom");
    uVar8 = extraout_RDX;
    if ((iVar6 != 0) &&
       (iVar6 = FUN_006a07e0(param_2,"/dev/random"), uVar8 = extraout_RDX_00, iVar6 != 0)) {
                    /* WARNING: Subroutine does not return */
      FUN_00403a6e("random_device::random_device(const std::string&): unsupported token");
    }
    pcVar9 = (char *)*param_2;
  }
  iVar6 = FUN_0076d890(pcVar9,0,uVar8);
  *(int *)(param_1 + 2) = iVar6;
  if (iVar6 != -1) {
    *param_1 = param_1 + 2;
    return;
  }
LAB_0069232d:
                    /* WARNING: Subroutine does not return */
  FUN_00403a6e("random_device::random_device(const std::string&): device not available");
}


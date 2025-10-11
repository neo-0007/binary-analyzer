
uint FUN_00477420(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  int iVar7;
  long in_FS_OFFSET;
  undefined1 local_34 [4];
  long local_30;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  uVar2 = FUN_0043b840();
  if (uVar2 == 0) goto LAB_004774e1;
  if (*(int *)(param_1 + 0x40) == 0) {
    uVar4 = *(long *)(param_1 + 0x28) << 3;
    if (uVar4 == 0) {
      iVar7 = 2;
      uVar3 = 1;
      uVar5 = 1;
      uVar2 = 0;
      goto LAB_004774a2;
    }
    uVar5 = uVar4;
    uVar3 = 0;
    do {
      uVar2 = uVar3;
      uVar3 = uVar2 + 1;
      uVar5 = uVar5 >> 8;
      if (uVar5 == 0) break;
    } while (uVar3 < 8);
    uVar5 = (ulong)uVar3;
    if (uVar3 < 4) {
      iVar7 = uVar2 + 2;
      goto LAB_004774a2;
    }
    FUN_0051f420();
    FUN_0051f540("../providers/implementations/macs/kmac_prov.c",0x1dc,"right_encode");
    FUN_0051f8f0(0x39,0xca,0);
    uVar2 = 0;
  }
  else {
    iVar7 = 2;
    uVar3 = 1;
    uVar2 = 0;
    uVar4 = 0;
    uVar5 = 1;
LAB_004774a2:
    lVar6 = (long)(int)uVar2;
    do {
      local_34[lVar6] = (char)uVar4;
      lVar6 = lVar6 + -1;
      uVar4 = uVar4 >> 8;
    } while ((int)lVar6 != -1);
    local_34[uVar5] = (char)uVar3;
    uVar2 = FUN_00405f60(uVar1,local_34,iVar7);
    if (uVar2 != 0) {
      iVar7 = FUN_004062e0(uVar1,param_2,*(undefined8 *)(param_1 + 0x28));
      uVar2 = (uint)(iVar7 != 0);
    }
  }
  *param_3 = *(undefined8 *)(param_1 + 0x28);
LAB_004774e1:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}


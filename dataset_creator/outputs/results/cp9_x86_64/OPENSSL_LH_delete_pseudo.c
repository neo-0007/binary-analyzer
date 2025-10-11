
undefined8 OPENSSL_LH_delete(undefined8 *param_1,undefined8 param_2)

{
  long *plVar1;
  int iVar2;
  undefined8 *ptr;
  long lVar3;
  long lVar4;
  int iVar5;
  uint uVar6;
  undefined8 *puVar7;
  long lVar8;
  void *addr;
  uint uVar9;
  undefined8 uVar10;
  long in_FS_OFFSET;
  undefined1 auStack_38 [8];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)(param_1 + 0x15) = 0;
  puVar7 = (undefined8 *)getrn(param_1,param_2,auStack_38);
  ptr = (undefined8 *)*puVar7;
  if (ptr == (undefined8 *)0x0) {
    param_1[0x11] = param_1[0x11] + 1;
    uVar10 = 0;
  }
  else {
    *puVar7 = ptr[1];
    uVar10 = *ptr;
    CRYPTO_free(ptr);
    lVar3 = param_1[7];
    uVar9 = *(uint *)(param_1 + 3);
    param_1[0x10] = param_1[0x10] + 1;
    param_1[7] = lVar3 + -1;
    if ((0x10 < uVar9) && ((ulong)((lVar3 + -1) * 0x100) / (ulong)uVar9 <= (ulong)param_1[6])) {
      iVar5 = *(int *)(param_1 + 4);
      iVar2 = *(int *)((long)param_1 + 0x24);
      addr = (void *)*param_1;
      plVar1 = (long *)((long)addr + (ulong)(uint)(iVar5 + -1 + iVar2) * 8);
      lVar3 = *plVar1;
      *plVar1 = 0;
      if (iVar5 == 0) {
        addr = CRYPTO_realloc(addr,iVar2 * 8,"../crypto/lhash/lhash.c",300);
        if (addr == (void *)0x0) {
          *(int *)(param_1 + 0x15) = *(int *)(param_1 + 0x15) + 1;
          goto LAB_00537ec9;
        }
        param_1[0xb] = param_1[0xb] + 1;
        *param_1 = addr;
        uVar9 = *(uint *)(param_1 + 3);
        uVar6 = *(uint *)((long)param_1 + 0x24) >> 1;
        *(uint *)((long)param_1 + 0x1c) = *(uint *)((long)param_1 + 0x1c) >> 1;
        *(uint *)((long)param_1 + 0x24) = uVar6;
        iVar5 = uVar6 - 1;
        *(int *)(param_1 + 4) = iVar5;
      }
      else {
        iVar5 = iVar5 + -1;
        *(int *)(param_1 + 4) = iVar5;
      }
      param_1[10] = param_1[10] + 1;
      plVar1 = (long *)((long)addr + (long)iVar5 * 8);
      *(uint *)(param_1 + 3) = uVar9 - 1;
      lVar4 = *plVar1;
      if (lVar4 == 0) {
        *plVar1 = lVar3;
      }
      else {
        do {
          lVar8 = lVar4;
          lVar4 = *(long *)(lVar8 + 8);
        } while (lVar4 != 0);
        *(long *)(lVar8 + 8) = lVar3;
      }
    }
  }
LAB_00537ec9:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar10;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}


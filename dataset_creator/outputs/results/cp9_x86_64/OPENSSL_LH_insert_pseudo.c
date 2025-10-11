
undefined8 * OPENSSL_LH_insert(undefined8 *param_1,undefined8 param_2)

{
  long *plVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined8 *puVar5;
  long *plVar6;
  undefined8 *puVar7;
  uint uVar8;
  long lVar9;
  void *addr;
  long in_FS_OFFSET;
  undefined8 local_48;
  long local_40;
  
  uVar8 = *(uint *)(param_1 + 3);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)(param_1 + 0x15) = 0;
  if ((ulong)(param_1[7] << 8) / (ulong)uVar8 < (ulong)param_1[5]) {
LAB_00537d38:
    plVar6 = (long *)getrn(param_1,param_2,&local_48);
    puVar5 = (undefined8 *)*plVar6;
    if (puVar5 != (undefined8 *)0x0) {
      puVar7 = (undefined8 *)*puVar5;
      *puVar5 = param_2;
      param_1[0xf] = param_1[0xf] + 1;
      goto LAB_00537d60;
    }
    puVar7 = (undefined8 *)CRYPTO_malloc(0x18,"../crypto/lhash/lhash.c",0x8f);
    if (puVar7 != (undefined8 *)0x0) {
      *puVar7 = param_2;
      puVar7[1] = 0;
      puVar7[2] = local_48;
      *plVar6 = (long)puVar7;
      puVar7 = (undefined8 *)0x0;
      param_1[0xe] = param_1[0xe] + 1;
      param_1[7] = param_1[7] + 1;
      goto LAB_00537d60;
    }
  }
  else {
    uVar2 = *(uint *)(param_1 + 4);
    uVar3 = *(uint *)((long)param_1 + 0x24);
    uVar4 = *(uint *)((long)param_1 + 0x1c);
    addr = (void *)*param_1;
    if (uVar2 + 1 < uVar3) {
      *(uint *)(param_1 + 4) = uVar2 + 1;
LAB_00537ccd:
      param_1[8] = param_1[8] + 1;
      plVar6 = (long *)((long)addr + (ulong)uVar2 * 8);
      plVar1 = (long *)((long)addr + (ulong)(uVar2 + uVar3) * 8);
      *(uint *)(param_1 + 3) = uVar8 + 1;
      *plVar1 = 0;
      lVar9 = *plVar6;
      while (lVar9 != 0) {
        while ((ulong)uVar2 != *(ulong *)(lVar9 + 0x10) % (ulong)uVar4) {
          *plVar6 = *(long *)(lVar9 + 8);
          *(long *)(lVar9 + 8) = *plVar1;
          *plVar1 = lVar9;
          lVar9 = *plVar6;
          if (lVar9 == 0) goto LAB_00537d38;
        }
        plVar6 = (long *)(lVar9 + 8);
        lVar9 = *plVar6;
      }
      goto LAB_00537d38;
    }
    puVar7 = (undefined8 *)CRYPTO_realloc(addr,uVar4 << 4,"../crypto/lhash/lhash.c",0x102);
    if (puVar7 != (undefined8 *)0x0) {
      *param_1 = puVar7;
      memset(puVar7 + uVar4,0,(ulong)uVar4 << 3);
      param_1[9] = param_1[9] + 1;
      uVar8 = *(uint *)(param_1 + 3);
      *(uint *)((long)param_1 + 0x24) = uVar4;
      addr = (void *)*param_1;
      *(uint *)((long)param_1 + 0x1c) = uVar4 * 2;
      *(undefined4 *)(param_1 + 4) = 0;
      goto LAB_00537ccd;
    }
  }
  *(int *)(param_1 + 0x15) = *(int *)(param_1 + 0x15) + 1;
LAB_00537d60:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar7;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

